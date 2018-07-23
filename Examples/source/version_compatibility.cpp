#include "version_info/version_info.h"
#include "version_info/version_defines.h"
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <iostream>

#ifdef __linux__
  #include <dlfcn.h>
  #include <string>
  #include <locale>
  #include <codecvt>

  #define USED_ATTRIBUTE __attribute__((used))
#else 
  #define USED_ATTRIBUTE
#endif

#define VERSION_MISMATCH_ACTION_STDERR  1
#define VERSION_MISMATCH_ACTION_STDOUT  2
#define VERSION_MISMATCH_ACTION_EXIT    3
#define VERSION_MISMATCH_ACTION_SILENT  4

#define VERSION_MISMATCH_ACTION         VERSION_MISMATCH_ACTION_STDERR

namespace {

class ModulesCompatibilityChecker {
public:
    ModulesCompatibilityChecker()
    {
#ifdef VERSION_COMPATIBILITY_TEST_MODE
        return;
#endif

        CheckVersions();
    }

    static void CheckVersions() 
    {
        asposecpplib::VersionInfo asposecpplib_version_info;
        asposecpplib::_getVersionInfo(asposecpplib_version_info);

        asposecpplib::VersionInfo product_version_info = { 0 };
        FillExpectedVersionInformation(product_version_info);

        if (asposecpplib_version_info != product_version_info)
        {
#if VERSION_MISMATCH_ACTION != VERSION_MISMATCH_ACTION_EXIT
            asposecpplib::MismatchedVersionInfo mvi;
            GetModuleName(mvi.module_name);
            mvi.product_version_info = product_version_info;

            asposecpplib::_registerVersionMismatch(mvi);
#endif

#if VERSION_MISMATCH_ACTION == VERSION_MISMATCH_ACTION_STDOUT
            PrintErrorMessage(std::cout, product_version_info, asposecpplib_version_info);
#elif VERSION_MISMATCH_ACTION == VERSION_MISMATCH_ACTION_EXIT
            PrintErrorMessage(std::cerr, product_version_info, asposecpplib_version_info);
  #ifdef VERSION_COMPATIBILITY_TEST_MODE
            return; // Don't exit if we are in test mode.
  #endif
            exit(EXIT_FAILURE);
#elif VERSION_MISMATCH_ACTION == VERSION_MISMATCH_ACTION_SILENT
  // NOOP
#else
            // Default is VERSION_MISMATCH_ACTION_STDERR
            PrintErrorMessage(std::cerr, product_version_info, asposecpplib_version_info);
#endif
        }
    }
    
    static void GetModuleName(wchar_t(&module_file_name)[MODULE_NAME_BUFFER_SIZE])
    {
        module_file_name[0] = L'\0'; // Assume failure.
#ifdef _WIN32
        HMODULE h_module = 0;
        BOOL success = GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
            reinterpret_cast<LPCWSTR>(&GetModuleName),
            &h_module);

        if (success)
            GetModuleFileNameW(h_module, module_file_name, MODULE_NAME_BUFFER_SIZE);

#elif defined __linux__
        Dl_info dl_info;
        int res = dladdr(reinterpret_cast<void*>(&GetModuleName), &dl_info);

        if (res > 0)
        {
            std::string utf8_module_name = dl_info.dli_fname;
            std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
            std::wstring utf16_module_name = converter.from_bytes(utf8_module_name.c_str());

            wcsncpy(module_file_name, utf16_module_name.c_str(), MODULE_NAME_BUFFER_SIZE);
            module_file_name[MODULE_NAME_BUFFER_SIZE - 1] = L'\0';
        }
#else
        // TODO: Generate compilation error.
#endif
    }

    static void PrintErrorMessage(std::ostream& destination, const asposecpplib::VersionInfo& product_version_info, const asposecpplib::VersionInfo& asposecpplib_version_info)
    {
        char encoded_product_version_info[asposecpplib::VersionInfo::ENCODED_VERSION_INFO_SIZE];
        product_version_info.encode(encoded_product_version_info);

        char encoded_asposecpplib_version_info[asposecpplib::VersionInfo::ENCODED_VERSION_INFO_SIZE];
        asposecpplib_version_info.encode(encoded_asposecpplib_version_info);

        destination
            << "Modules versions mismatch!" << std::endl
            << "ProductVersionInfo:      " << static_cast<const char*>(encoded_product_version_info) << std::endl
            << "AsposecpplibVersionInfo: " << static_cast<const char*>(encoded_asposecpplib_version_info) << std::endl;
    }

    static void FillExpectedVersionInformation(asposecpplib::VersionInfo& product_version_info)
    {
        product_version_info.asposecpplib_version_major = ASPOSECPPLIB_VERSION_MAJOR;
        product_version_info.asposecpplib_version_minor = ASPOSECPPLIB_VERSION_MINOR;
        product_version_info.asposecpplib_version_revision = ASPOSECPPLIB_VERSION_REVISION;
        product_version_info.asposecpplib_version_build = ASPOSECPPLIB_VERSION_BUILD;

        product_version_info.product_version_major = PRODUCT_VERSION_MAJOR;
        product_version_info.product_version_minor = PRODUCT_VERSION_MINOR;
        product_version_info.product_version_revision = PRODUCT_VERSION_REVISION;
        product_version_info.product_version_build = PRODUCT_VERSION_BUILD;

        strncpy(product_version_info.asposecpplib_revision, ASPOSECPPLIB_REVISION, GIT_REVISION_BUFFER_SIZE - 1);

#ifdef __DBG_FOR_EACH_MEMEBR
        product_version_info.defined___DBG_FOR_EACH_MEMEBR = true;
#else
        product_version_info.defined___DBG_FOR_EACH_MEMEBR = false;
#endif

#ifdef __DBG_GARBAGE_COLLECTION
        product_version_info.defined___DBG_GARBAGE_COLLECTION = true;
#else
        product_version_info.defined___DBG_GARBAGE_COLLECTION = false;
#endif

#ifdef __DBG_TOOLS
        product_version_info.defined___DBG_TOOLS = true;
#else
        product_version_info.defined___DBG_TOOLS = false;
#endif

#ifdef ASPOSE_COMPARE_BY_REF
        product_version_info.defined_ASPOSE_COMPARE_BY_REF = true;
#else
        product_version_info.defined_ASPOSE_COMPARE_BY_REF = false;
#endif

#ifdef ASPOSE_FOUNDATION_NS
        product_version_info.defined_ASPOSE_FOUNDATION_NS = true;
#else
        product_version_info.defined_ASPOSE_FOUNDATION_NS = false;
#endif

#ifdef ASPOSE_THREADSAFE_DELEGATES
        product_version_info.defined_ASPOSE_THREADSAFE_DELEGATES = true;
#else
        product_version_info.defined_ASPOSE_THREADSAFE_DELEGATES = false;
#endif

#ifdef ASPOSE_NO_ATOMIC_REFCOUNT
        product_version_info.defined_ASPOSE_NO_ATOMIC_REFCOUNT = true;
#else
        product_version_info.defined_ASPOSE_NO_ATOMIC_REFCOUNT = false;
#endif

#ifdef DISABLE_EXTERNAL_REFCOUNT
        product_version_info.defined_DISABLE_EXTERNAL_REFCOUNT = true;
#else
        product_version_info.defined_DISABLE_EXTERNAL_REFCOUNT = false;
#endif

#ifdef DISABLE_ASTRAL
        product_version_info.defined_DISABLE_ASTRAL = true;
#else
        product_version_info.defined_DISABLE_ASTRAL = false;
#endif

#ifdef CALL_DISPOSE
        product_version_info.defined_CALL_DISPOSE = true;
#else
        product_version_info.defined_CALL_DISPOSE = false;
#endif

#ifdef ENABLE_CYCLES_DETECTION_EXT
        product_version_info.defined_ENABLE_CYCLES_DETECTION_EXT = true;
#else
        product_version_info.defined_ENABLE_CYCLES_DETECTION_EXT = false;
#endif

#ifdef ENABLE_CYCLES_DETECTION
        product_version_info.defined_ENABLE_CYCLES_DETECTION = true;
#else
        product_version_info.defined_ENABLE_CYCLES_DETECTION = false;
#endif

#ifdef USE_NANOSECONDS
        product_version_info.defined_USE_NANOSECONDS = true;
#else
        product_version_info.defined_USE_NANOSECONDS = false;
#endif

#ifdef ASPOSE_NO_CONST_METHODS
        product_version_info.defined_ASPOSE_NO_CONST_METHODS = true;
#else
        product_version_info.defined_ASPOSE_NO_CONST_METHODS = false;
#endif

#ifdef SHOW_DISPOSE_GUARD_MESSAGE
        product_version_info.defined_SHOW_DISPOSE_GUARD_MESSAGE = true;
#else
        product_version_info.defined_SHOW_DISPOSE_GUARD_MESSAGE = false;
#endif
    }
};

ModulesCompatibilityChecker USED_ATTRIBUTE a;

} // namespace