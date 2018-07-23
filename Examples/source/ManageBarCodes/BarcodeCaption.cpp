/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "BarcodeCaption.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/Caption.h>
#include <Generation/BarCodeBuilder.h>
#include <drawing/string_alignment.h>
#include <drawing/imaging/image_format.h>
#include <drawing/font.h>
#include <drawing/color.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodes {

RTTI_INFO_IMPL_HASH(2398488011u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::BarcodeCaption, ThisTypeBaseTypesInfo);

void BarcodeCaption::Run()
{
    // ExStart:BarcodeCaption 
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
    
    // Instantiate barcode object and set CodeText & Barcode Symbology
    System::SharedPtr<BarCodeBuilder> barCodeBuilder = [&]{ auto tmp_0 = System::MakeObject<BarCodeBuilder>(u"1234567", EncodeTypes::Code128); tmp_0->get_CaptionAbove()->set_Visible(false); return tmp_0; }();
    
    // Create caption object. Set its text and text alignment & also make it visible
    System::SharedPtr<Caption> caption = [&]{ auto tmp_1 = System::MakeObject<Caption>(); tmp_1->set_Text(u"Aspose"); tmp_1->set_TextAlign(System::Drawing::StringAlignment::Center); tmp_1->set_Visible(true); tmp_1->set_Font(System::MakeObject<System::Drawing::Font>(u"Pristina", 14.f)); tmp_1->set_ForeColor(System::Drawing::Color::get_Red()); return tmp_1; }();
    
    // Assign caption object to be displayed above the barcode
    barCodeBuilder->set_CaptionAbove(caption);
    System::SharedPtr<Caption> captionBelow = [&]{ auto tmp_2 = System::MakeObject<Caption>(); tmp_2->set_Text(u"Aspose.BarCode Caption Below"); tmp_2->set_TextAlign(System::Drawing::StringAlignment::Center); tmp_2->set_Visible(true); tmp_2->set_Font(System::MakeObject<System::Drawing::Font>(u"Pristina", 14.f)); tmp_2->set_ForeColor(System::Drawing::Color::get_OrangeRed()); return tmp_2; }();
    
    // Assign caption object to be displayed below the barcode
    barCodeBuilder->set_CaptionBelow(captionBelow);
    
    // Save the image to your system and set its image format to Jpeg
    barCodeBuilder->Save(dataDir + u"barcode-caption_out.jpg", System::Drawing::Imaging::ImageFormat::get_Jpeg());
    //ExEnd:BarcodeCaption
}

} // namespace ManageBarCodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
