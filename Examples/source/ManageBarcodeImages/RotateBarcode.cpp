/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "RotateBarcode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/CodeLocation.h>
#include <Generation/BarCodeImageFormat.h>
#include <Generation/BarCodeBuilder.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodeImages {

RTTI_INFO_IMPL_HASH(1550129439u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodeImages::RotateBarcode, ThisTypeBaseTypesInfo);

void RotateBarcode::Run()
{
    // ExStart:RotateBarcode       
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodesImages();
    
    // Instantiate barcode object and set CodeText, Barcode Symbology and  hide code text
    System::SharedPtr<BarCodeBuilder> barCodeBuilder = [&]{ auto tmp_0 = System::MakeObject<BarCodeBuilder>(u"1234567890", EncodeTypes::QR); tmp_0->set_CodeLocation(Aspose::BarCode::CodeLocation::None); tmp_0->set_RotationAngleF(90); return tmp_0; }();
    barCodeBuilder->Save(dataDir + u"QR-rotate_out.jpeg", Aspose::BarCode::BarCodeImageFormat::Jpeg);
    // ExEnd:RotateBarcode       
}

} // namespace ManageBarCodeImages
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
