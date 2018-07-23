/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "SetFontandColorSetting.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/Caption.h>
#include <Generation/BarCodeBuilder.h>
#include <drawing/string_alignment.h>
#include <drawing/imaging/image_format.h>
#include <drawing/font.h>
#include <drawing/color.h>

#include "RunExamples.h"

namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodeImages {

RTTI_INFO_IMPL_HASH(3783819353u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodeImages::SetFontandColorSetting, ThisTypeBaseTypesInfo);

void SetFontandColorSetting::Run()
{
    // ExStart:SetFontandColorSetting                       
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodesImages();
    
    // Instantiate barcode object
    System::SharedPtr<BarCodeBuilder> barCodeBuilder = [&]{ auto tmp_0 = System::MakeObject<BarCodeBuilder>(); tmp_0->get_CaptionAbove()->set_TextAlign(System::Drawing::StringAlignment::Near); tmp_0->get_CaptionAbove()->set_Text(u"Aspose.Demo"); tmp_0->get_CaptionAbove()->set_Visible(true); tmp_0->get_CaptionAbove()->set_Font(System::MakeObject<System::Drawing::Font>(u"Pristina", 14.f)); tmp_0->get_CaptionAbove()->set_ForeColor(System::Drawing::Color::get_OrangeRed()); return tmp_0; }();
    
    barCodeBuilder->get_CaptionBelow()->set_TextAlign(System::Drawing::StringAlignment::Far);
    barCodeBuilder->get_CaptionBelow()->set_Text(u"Aspose.Demo");
    barCodeBuilder->get_CaptionBelow()->set_Visible(true);
    barCodeBuilder->get_CaptionBelow()->set_Font(System::MakeObject<System::Drawing::Font>(u"Pristina", 14.f));
    barCodeBuilder->get_CaptionBelow()->set_ForeColor(System::Drawing::Color::get_OrangeRed());
    
    // Save the image to your system and set its image format to Jpeg
    barCodeBuilder->Save(dataDir + u"SetFontandColorSetting_out.jpeg", System::Drawing::Imaging::ImageFormat::get_Jpeg());
    // ExEnd:SetFontandColorSetting                       
}

} // namespace ManageBarCodeImages
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
