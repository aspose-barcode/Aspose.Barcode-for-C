/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "BarcodeImageBorders.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/MarginsF.h>
#include <Generation/BorderDashStyle.h>
#include <Generation/BarCodeBuilder.h>
#include <drawing/imaging/image_format.h>

#include "RunExamples.h"

namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodeImages {

RTTI_INFO_IMPL_HASH(1900021222u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodeImages::BarcodeImageBorders, ThisTypeBaseTypesInfo);

void BarcodeImageBorders::Run()
{
    // ExStart:BarcodeImageBorders   
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodesImages();
    
    // Instantiate barcode object and set different properties
    System::SharedPtr<BarCodeBuilder> barCodeBuilder = [&]{ auto tmp_0 = System::MakeObject<BarCodeBuilder>(); tmp_0->set_BorderDashStyle(Aspose::BarCode::BorderDashStyle::Solid); tmp_0->set_Margins(System::MakeObject<MarginsF>(2.f, 2.f, 2.f, 2.f)); tmp_0->set_BorderWidth(0.5f); tmp_0->set_BorderVisible(true); return tmp_0; }();
    barCodeBuilder->Save(dataDir + u"barcodeImageborders_out.jpeg", System::Drawing::Imaging::ImageFormat::get_Jpeg());
    // ExEnd:BarcodeImageBorders   
}

} // namespace ManageBarCodeImages
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
