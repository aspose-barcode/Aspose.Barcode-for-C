/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "CreateMultipleMacroPdf417.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/diagnostics/process.h>
#include <system/details/dispose_guard.h>
#include <system/console.h>
#include <system/array.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeBuilder.h>
#include <drawing/imaging/image_format.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace CreateAndManageTwoDBarcodes {

RTTI_INFO_IMPL_HASH(2022158250u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::CreateMultipleMacroPdf417, ThisTypeBaseTypesInfo);

void CreateMultipleMacroPdf417::Run()
{
    //ExStart:CreateMultipleMacroPdf417
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();
    
    // Create array for storing multiple barcodes
    const int32_t nSize = 4;
    System::ArrayPtr<System::String> lstCodeText = System::MakeArray<System::String>({u"code-1", u"code-2", u"code-3", u"code-4"});
    const int32_t strFileId = 1;
    
    // Instantiate barcode object and set CodeText & Barcode Symbology
    {
        System::SharedPtr<BarCodeBuilder> builder = System::MakeObject<BarCodeBuilder>(u"1234567890", EncodeTypes::MacroPdf417);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ builder});
        // ------------------------------------------
        
        try
        {
            for (int32_t nCount = 1; nCount <= nSize; nCount++)
            {
                builder->set_CodeText(lstCodeText[nCount - 1]);
                
                // FileID should be same for all the generated bar codes
                builder->set_MacroPdf417FileID(strFileId);
                
                // Assign segmentID in increasing order (1,2,3,....) and Set the segments count
                builder->set_MacroPdf417SegmentID(nCount);
                builder->set_MacroPdf417SegmentsCount(nSize);
                
                try
                {
                    // Save the barcode (fileid_segmentid.png)
                    builder->Save(dataDir + strFileId + u"_" + nCount + u"_out.png", System::Drawing::Imaging::ImageFormat::get_Png());
                    System::Diagnostics::Process::Start(dataDir + strFileId + u"_" + nCount + u"_out.png");
                }
                catch (System::Exception& ex)
                {
                    System::Console::WriteLine(ex.get_Message());
                }
                
            }
        }
        catch(...)
        {
            __dispose_guard_0.SetCurrentException(std::current_exception());
        }
    }
    //ExEnd:CreateMultipleMacroPdf417
}

} // namespace CreateAndManageTwoDBarcodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
