/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "AddSpaceInBarCodeAndText.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/BarCodeBuilder.h>
#include <drawing/imaging/image_format.h>

#include "RunExamples.h"

namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodeImages {

RTTI_INFO_IMPL_HASH(1139263540u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodeImages::AddSpaceInBarCodeAndText, ThisTypeBaseTypesInfo);

void AddSpaceInBarCodeAndText::Run()
{
    // ExStart:AddSpaceInBarCodeAndText   
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodesImages();
    
    // Instantiate barcode object and set Increase the space between code text and barcode to 1 point
    System::SharedPtr<BarCodeBuilder> barCodeBuilder = [&]{ auto tmp_0 = System::MakeObject<BarCodeBuilder>(); tmp_0->set_CodeTextSpace(1.0f); return tmp_0; }();
    barCodeBuilder->Save(dataDir + u"AddSpaceInBarCodeAndText_out.bmp", System::Drawing::Imaging::ImageFormat::get_Bmp());
    // ExEnd:AddSpaceInBarCodeAndText   
}

} // namespace ManageBarCodeImages
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
