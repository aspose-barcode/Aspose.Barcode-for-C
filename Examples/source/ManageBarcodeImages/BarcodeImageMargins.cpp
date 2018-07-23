/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "BarcodeImageMargins.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/MarginsF.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeBuilder.h>
#include <drawing/imaging/image_format.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodeImages {

RTTI_INFO_IMPL_HASH(4231242564u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodeImages::BarcodeImageMargins, ThisTypeBaseTypesInfo);

void BarcodeImageMargins::Run()
{
    // ExStart:BarcodeImageMargins   
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodesImages();
    
    // Instantiate barcode object and different properties
    System::SharedPtr<BarCodeBuilder> barCodeBuilder = [&]{ auto tmp_0 = System::MakeObject<BarCodeBuilder>(u"1234567890", EncodeTypes::Code128); tmp_0->get_Margins()->set_Left(0.5f); tmp_0->get_Margins()->set_Right(0.f); tmp_0->get_Margins()->set_Top(0.f); tmp_0->get_Margins()->set_Bottom(0.f); return tmp_0; }();
    barCodeBuilder->Save(dataDir + u"barcode-image-margins_out.jpeg", System::Drawing::Imaging::ImageFormat::get_Jpeg());
    // ExEnd:BarcodeImageMargins   
}

} // namespace ManageBarCodeImages
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
