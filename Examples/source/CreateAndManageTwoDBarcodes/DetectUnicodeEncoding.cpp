/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "DetectUnicodeEncoding.h"

#include <system/text/encoding.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/memory_stream.h>
#include <system/exceptions.h>
#include <system/details/dispose_guard.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeImageFormat.h>
#include <Generation/BarCodeBuilder.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/DecodeTypes/SingleDecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/DecodeTypes/DecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/BarCodeReader.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::BarCodeRecognition;
using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace CreateAndManageTwoDBarcodes {

RTTI_INFO_IMPL_HASH(2091013871u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::DetectUnicodeEncoding, ThisTypeBaseTypesInfo);

void DetectUnicodeEncoding::Run()
{
    //ExStart:DetectUnicodeEncoding
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();
    
    try
    {
        System::SharedPtr<System::IO::MemoryStream> memoryStream = System::MakeObject<System::IO::MemoryStream>();
        // Instantiate barcode object, Set CodeText, Barcode Symbology and Text Encoding
        {
            System::SharedPtr<BarCodeBuilder> barCodeBuilder = System::MakeObject<BarCodeBuilder>();
            // Clearing resources under 'using' statement
            System::Details::DisposeGuard<1> __dispose_guard_0({ barCodeBuilder});
            // ------------------------------------------
            
            try
            {
                System::SharedPtr<BarCodeBuilder> builder = System::MakeObject<BarCodeBuilder>(u"Слово", EncodeTypes::QR);
                barCodeBuilder->set_CodeTextEncoding(System::Text::Encoding::get_UTF8());
                barCodeBuilder->Save(dataDir + u"" + memoryStream + u"_out.png", Aspose::BarCode::BarCodeImageFormat::Png);
            }
            catch(...)
            {
                __dispose_guard_0.SetCurrentException(std::current_exception());
            }
        }
        
        System::String fileName = dataDir + u"" + memoryStream + u"_out.png";
        {
            System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(fileName, DecodeType::QR);
            // Clearing resources under 'using' statement
            System::Details::DisposeGuard<1> __dispose_guard_1({ reader});
            // ------------------------------------------
            
            try
            {
                reader->SetDetectEncoding(false);
                if (reader->Read())
                {
                    System::Console::WriteLine(reader->GetCodeText(System::Text::Encoding::get_UTF8()));
                }
                //"Слово"
            }
            catch(...)
            {
                __dispose_guard_1.SetCurrentException(std::current_exception());
            }
        }
        
    }
    catch (System::Exception& ) { }
    
    //ExEnd:DetectUnicodeEncoding
}

} // namespace CreateAndManageTwoDBarcodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
