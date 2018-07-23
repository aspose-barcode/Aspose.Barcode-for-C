/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "SupportImageFormat.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/console.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/BarCodeReader.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::BarCodeRecognition;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageAndOptimizeBarCodeRecognition {

RTTI_INFO_IMPL_HASH(26397468u, ::Aspose::BarCode::Examples::CSharp::ManageAndOptimizeBarCodeRecognition::SupportImageFormat, ThisTypeBaseTypesInfo);

void SupportImageFormat::Run()
{
    try
    {
        // ExStart:SupportImageFormat
        // The path to the documents directory.
        System::String dataDir = RunExamples::GetDataDir_ManageAndOptimizeBarcodeRecognition();
        
        // Create instance of BarCodeBuilder class and Get code text
        System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(dataDir + u"Scan.jpg");
        while (reader->Read())
        {
            System::Console::WriteLine(System::String(u"CodeText: ") + reader->GetCodeText());
        }
        reader->Close();
        // ExEnd:SupportImageFormat
    }
    catch (System::Exception& ex)
    {
        System::Console::WriteLine(ex.get_Message() + u"\nThis example will only work if you apply a valid Aspose BarCode License. You can purchase full license or get 30 day temporary license from http://wwww.aspose.com/purchase/default.aspx.");
    }
    
    
}

} // namespace ManageAndOptimizeBarCodeRecognition
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
