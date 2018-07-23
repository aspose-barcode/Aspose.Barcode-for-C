/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "RecognizeBarcodeWithChineseCharacters.h"

#include <system/text/encoding.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/console.h>
#include <system/array.h>
#include <cstdint>
#include <BarCodeRecognition/Recognition/RecognitionFilters/DecodeTypes/SingleDecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/DecodeTypes/DecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/BarCodeReader.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::BarCodeRecognition;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodes {

RTTI_INFO_IMPL_HASH(3224200634u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::RecognizeBarcodeWithChineseCharacters, ThisTypeBaseTypesInfo);

void RecognizeBarcodeWithChineseCharacters::Run()
{
    try
    {
        // ExStart:RecognizeBarcodeWithChineseCharacters
        // The path to the documents directory.
        System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
        
        // Load barcode image and Read barcode
        auto reader = System::MakeObject<BarCodeReader>(dataDir + u"Chinese.png", DecodeType::Pdf417);
        while (reader->Read())
        {
            auto t = reader->GetCodeBytes();
            System::String encodingValue = System::Text::Encoding::GetEncoding(1254)->GetString(t);
        }
        reader->Close();
        // ExEnd:RecognizeBarcodeWithChineseCharacters
    }
    catch (System::Exception& ex)
    {
        System::Console::WriteLine(ex.get_Message() + u"\nThis example will only work if you apply a valid Aspose License. You can purchase full license or get 30 day temporary license from http://www.aspose.com/purchase/default.aspx.");
    }
    
    
}

} // namespace ManageBarCodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
