/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ColorizeAnyPartoftheBarcodeImage.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeBuilder.h>
#include <drawing/imaging/image_format.h>
#include <drawing/color.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodeImages {

RTTI_INFO_IMPL_HASH(4266438029u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodeImages::ColorizeAnyPartoftheBarcodeImage, ThisTypeBaseTypesInfo);

void ColorizeAnyPartoftheBarcodeImage::Run()
{
    // ExStart:ColorizeAnyPartoftheBarcodeImage       
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodesImages();
    System::String dst = dataDir + u"colorize-barcode_out.jpg";
    
    // Instantiate barcode object and differnt properties
    System::SharedPtr<BarCodeBuilder> barCodeBuilder = [&]{ auto tmp_0 = System::MakeObject<BarCodeBuilder>(u"1234567", EncodeTypes::Code128); tmp_0->set_BackColor(System::Drawing::Color::get_Yellow()); tmp_0->set_ForeColor(System::Drawing::Color::get_Blue()); tmp_0->set_BorderColor(System::Drawing::Color::get_Red()); tmp_0->set_CodeTextColor(System::Drawing::Color::get_Red()); return tmp_0; }();
    barCodeBuilder->Save(dst, System::Drawing::Imaging::ImageFormat::get_Jpeg());
    // ExEnd:ColorizeAnyPartoftheBarcodeImage       
}

} // namespace ManageBarCodeImages
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
