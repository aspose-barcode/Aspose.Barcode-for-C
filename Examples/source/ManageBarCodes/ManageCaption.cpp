/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ManageCaption.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/Caption.h>
#include <Generation/BarCodeBuilder.h>
#include <drawing/string_alignment.h>
#include <drawing/imaging/image_format.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodes {

RTTI_INFO_IMPL_HASH(721288412u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::ManageCaption, ThisTypeBaseTypesInfo);

void ManageCaption::Run()
{
    // ExStart:ManageCaption                
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
    
    // Instantiate barcode object and set CodeText & Barcode Symbology
    System::SharedPtr<BarCodeBuilder> barCodeBuilder = System::MakeObject<BarCodeBuilder>(u"1234567", EncodeTypes::Code128);
    
    // Create caption object. Set its text and text alignment & also make it visible
    System::SharedPtr<Caption> caption = [&]{ auto tmp_0 = System::MakeObject<Caption>(); tmp_0->set_Text(u"Aspose.BarCode"); tmp_0->set_TextAlign(System::Drawing::StringAlignment::Center); tmp_0->set_Visible(true); return tmp_0; }();
    
    // Assign caption object to be displayed above and below the barcode
    barCodeBuilder->set_CaptionAbove(caption);
    barCodeBuilder->set_CaptionBelow(caption);
    
    // Save the image to your system and set its image format to Jpeg
    barCodeBuilder->Save(dataDir + u"ManageCaption_out.jpg", System::Drawing::Imaging::ImageFormat::get_Jpeg());
    System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir);
    // ExEnd:ManageCaption                
}

} // namespace ManageBarCodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
