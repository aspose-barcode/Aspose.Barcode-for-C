/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ExportPropertiesToXML.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/enum_helpers.h>
#include <Generation/ImageQualityMode.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/CodeLocation.h>
#include <Generation/Caption.h>
#include <Generation/BarCodeBuilder.h>
#include <drawing/string_alignment.h>
#include <drawing/font_style.h>
#include <drawing/font.h>
#include <drawing/color.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodes {

RTTI_INFO_IMPL_HASH(213939568u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::ExportPropertiesToXML, ThisTypeBaseTypesInfo);

void ExportPropertiesToXML::Run()
{
    // ExStart:ExportPropertiesToXML                
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
    
    // Initialize the BarCodeBuilder class by passing barcode text and barcode symbology as parameters.
    System::SharedPtr<BarCodeBuilder> builder = [&]{ auto tmp_0 = System::MakeObject<BarCodeBuilder>(u"abcdefghijklmnopqrstuvwxyzabcdef", EncodeTypes::DataMatrix); tmp_0->set_BorderVisible(true); tmp_0->set_ImageQuality(Aspose::BarCode::ImageQualityMode::AntiAlias); tmp_0->set_CodeLocation(Aspose::BarCode::CodeLocation::Above); tmp_0->set_Columns(4); tmp_0->set_Rows(3); tmp_0->set_CaptionAbove([&]{ auto tmp_1 = System::MakeObject<Caption>(u"{Caption ABOVE}"); tmp_1->set_TextAlign(System::Drawing::StringAlignment::Center); tmp_1->set_Visible(true); tmp_1->set_ForeColor(System::Drawing::Color::get_Green()); return tmp_1; }()); return tmp_0; }();
    
    // Specify caption settings.
    builder->set_CaptionBelow(System::MakeObject<Caption>(u"{Caption BELOW}"));
    builder->get_CaptionBelow()->set_TextAlign(System::Drawing::StringAlignment::Far);
    builder->get_CaptionBelow()->set_Visible(true);
    builder->get_CaptionBelow()->set_ForeColor(System::Drawing::Color::get_Yellow());
    
    // Specify text font settings.
    builder->set_CodeTextFont(System::MakeObject<System::Drawing::Font>(u"Courier New", 24, System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic));
    
    // Call the export to XML method to export the properties to XML file.
    builder->ExportToXml(dataDir + u"BarCodeBuilder.DataMatrix_out.xml");
    // ExEnd:ExportPropertiesToXML                
}

} // namespace ManageBarCodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
