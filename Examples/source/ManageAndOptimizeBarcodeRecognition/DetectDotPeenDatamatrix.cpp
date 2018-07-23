/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "DetectDotPeenDatamatrix.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/enum_helpers.h>
#include <system/details/dispose_guard.h>
#include <system/console.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/RecognitionMode.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/ManualHint.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/DecodeTypes/SingleDecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/DecodeTypes/DecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/BarCodeReader.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::BarCodeRecognition;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageAndOptimizeBarCodeRecognition {

RTTI_INFO_IMPL_HASH(749472214u, ::Aspose::BarCode::Examples::CSharp::ManageAndOptimizeBarCodeRecognition::DetectDotPeenDatamatrix, ThisTypeBaseTypesInfo);

void DetectDotPeenDatamatrix::Run()
{
    try
    {
        // ExStart:DetectDotPeenDatamatrix               
        // The path to the documents directory.
        System::String dataDir = RunExamples::GetDataDir_ManageAndOptimizeBarcodeRecognition();
        
        // Initialize the BarCodeReader class by passing barcode file name and barcode type as parameters
        {
            System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(dataDir + u"testDotPeen.png", DecodeType::DataMatrix);
            // Clearing resources under 'using' statement
            System::Details::DisposeGuard<1> __dispose_guard_0({ reader});
            // ------------------------------------------
            
            try
            {
                // Set the reader recognition mode, Manual Hint property to speed up recognition process.
                reader->set_RecognitionMode(Aspose::BarCode::BarCodeRecognition::RecognitionMode::ManualHints);
                reader->set_ManualHints(Aspose::BarCode::BarCodeRecognition::ManualHint::SpecialFormOfCells);
                while (reader->Read())
                {
                    System::Console::WriteLine(reader->GetCodeTypeName() + u": " + reader->GetCodeText());
                }
            }
            catch(...)
            {
                __dispose_guard_0.SetCurrentException(std::current_exception());
            }
        }
        // ExEnd:DetectDotPeenDatamatrix
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
