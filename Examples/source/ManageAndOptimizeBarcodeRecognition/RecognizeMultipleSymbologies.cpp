/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "RecognizeMultipleSymbologies.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/console.h>
#include <system/array.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/DecodeTypes/SingleDecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/DecodeTypes/DecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/DecodeTypes/BaseDecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/BarCodeReader.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::BarCodeRecognition;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageAndOptimizeBarCodeRecognition {

RTTI_INFO_IMPL_HASH(1375279234u, ::Aspose::BarCode::Examples::CSharp::ManageAndOptimizeBarCodeRecognition::RecognizeMultipleSymbologies, ThisTypeBaseTypesInfo);

void RecognizeMultipleSymbologies::Run()
{
    // ExStart:RecognizeMultipleSymbologies
    try
    {
        // The path to the documents directory.
        System::String dataDir = RunExamples::GetDataDir_ManageAndOptimizeBarcodeRecognition();
        System::ArrayPtr<System::SharedPtr<BaseDecodeType>> objArray = System::MakeArray<System::SharedPtr<Aspose::BarCode::BarCodeRecognition::BaseDecodeType>>({DecodeType::Code39Standard, DecodeType::Pdf417});
        
        // Initialize the BarCodeReader, Call Read() method in a loop and  Display the codetext and symbology type
        System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(dataDir + u"RecognizingMultipleSymbologies.png", objArray);
        while (reader->Read())
        {
            System::Console::WriteLine(System::String(u"Codetext: ") + reader->GetCodeText());
            System::Console::WriteLine(System::String(u"Symbology type: ") + reader->GetCodeType());
        }
        reader->Close();
    }
    catch (System::Exception& ex)
    {
        System::Console::WriteLine(ex.get_Message() + u"\nThis example will only work if you apply a valid Aspose BarCode License. You can purchase full license or get 30 day temporary license from http://wwww.aspose.com/purchase/default.aspx.");
    }
    
    // ExEnd:RecognizeMultipleSymbologies
}

} // namespace ManageAndOptimizeBarCodeRecognition
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
