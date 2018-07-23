/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "OptimizingBarCodeRecognitionProcess.h"

#include <system/timespan.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/diagnostics/stopwatch.h>
#include <system/details/dispose_guard.h>
#include <system/console.h>
#include <cstdint>
#include <BarCodeRecognition/Recognition/RecognitionFilters/DecodeTypes/SingleDecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/DecodeTypes/DecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/BarCodeReader.h>
#include <BarCodeRecognition/Common/ProcessorSettings.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::BarCodeRecognition;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageAndOptimizeBarCodeRecognition {

RTTI_INFO_IMPL_HASH(4239262373u, ::Aspose::BarCode::Examples::CSharp::ManageAndOptimizeBarCodeRecognition::OptimizingBarCodeRecognitionProcess, ThisTypeBaseTypesInfo);

void OptimizingBarCodeRecognitionProcess::Run()
{
    try
    {
        // ExStart:OptimizingBarCodeRecognitionProcess
        // The path to the documents directory.
        System::String dataDir = RunExamples::GetDataDir_ManageAndOptimizeBarcodeRecognition();
        System::SharedPtr<System::Diagnostics::Stopwatch> sw = System::MakeObject<System::Diagnostics::Stopwatch>();
        
        // Start the stopwatch
        sw->Start();
        
        // Define the settings to use all of the processor cores, if not then how many to use.
        BarCodeReader::get_ProcessorSettings()->set_UseAllCores(false);
        BarCodeReader::get_ProcessorSettings()->set_UseOnlyThisCoresCount(4);
        
        // Perform the BarCode recognition task Initialize the BarCodeReader object
        {
            System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(dataDir + u"code39.png", DecodeType::Code128);
            // Clearing resources under 'using' statement
            System::Details::DisposeGuard<1> __dispose_guard_0({ reader});
            // ------------------------------------------
            
            try
            {
                while (reader->Read())
                {
                    System::Console::WriteLine(System::String(u" Code Text: ") + reader->GetCodeText() + u" Type: " + reader->GetCodeType());
                }
            }
            catch(...)
            {
                __dispose_guard_0.SetCurrentException(std::current_exception());
            }
        }
        
        // Stop the stopwatch
        sw->Stop();
        
        // Write the Elapsed time to console
        System::Console::WriteLine(System::String(u"Elapsed: ") + sw->get_Elapsed());
        // ExEnd:OptimizingBarCodeRecognitionProcess
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
