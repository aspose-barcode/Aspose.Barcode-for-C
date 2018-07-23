/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ControlBarsFillingofOneDBarcodes.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/details/dispose_guard.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeBuilder.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodeImages {

RTTI_INFO_IMPL_HASH(2749826736u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodeImages::ControlBarsFillingofOneDBarcodes, ThisTypeBaseTypesInfo);

void ControlBarsFillingofOneDBarcodes::Run()
{
    // ExStart:ControlBarsFillingofOneDBarcodes       
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodesImages();
    
    // Instantiate barcode object
    {
        System::SharedPtr<BarCodeBuilder> builder = System::MakeObject<BarCodeBuilder>(u"TEXT", EncodeTypes::Pdf417);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ builder});
        // ------------------------------------------
        
        try
        {
            builder->set_FilledBars(false);
            builder->Save(dataDir + u"ControlBarsFillingofOneDBarcodes_out.png");
        }
        catch(...)
        {
            __dispose_guard_0.SetCurrentException(std::current_exception());
        }
    }
    // ExEnd:ControlBarsFillingofOneDBarcodes       
}

} // namespace ManageBarCodeImages
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
