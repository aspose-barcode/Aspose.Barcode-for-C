/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "FNC1FirstPositionInExtendedMode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/QRErrorLevel.h>
#include <Generation/QREncodeMode.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeBuilder.h>
#include <Encoders/QREncoder/QrExtCodetextBuilder.h>
#include <drawing/imaging/image_format.h>
#include <drawing/bitmap.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace CreateAndManageTwoDBarcodes {

RTTI_INFO_IMPL_HASH(639878342u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::FNC1FirstPositionInExtendedMode, ThisTypeBaseTypesInfo);

void FNC1FirstPositionInExtendedMode::Run()
{
    //ExStart:FNC1FirstPositionInExtendedMode
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();
    
    // Create codetext
    System::SharedPtr<QrExtCodetextBuilder> lTextBuilder = System::MakeObject<QrExtCodetextBuilder>();
    lTextBuilder->AddFNC1FirstPosition();
    lTextBuilder->AddPlainCodetext(u"000%89%%0");
    lTextBuilder->AddFNC1GroupSeparator();
    lTextBuilder->AddPlainCodetext(u"12345<FNC1>");
    
    // Generate codetext
    System::String lCodetext = lTextBuilder->GetExtendedCodetext();
    
    // Instantiate barcode object and Set Codetext & SymbologyType
    System::SharedPtr<BarCodeBuilder> builder = System::MakeObject<BarCodeBuilder>(u"1234567890", EncodeTypes::QR);
    
    // Set encoding mode, error correction level and display text
    builder->set_QREncodeMode(Aspose::BarCode::QREncodeMode::ExtendedCodetext);
    builder->set_QRErrorLevel(Aspose::BarCode::QRErrorLevel::LevelL);
    builder->set_Display2DText(u"My Text");
    
    // Get barcode image Bitmap and Save QR code
    System::SharedPtr<System::Drawing::Bitmap> lBmp = builder->GenerateBarCodeImage();
    lBmp->Save(dataDir + u"FNC1FirstPositionInExtendedMode_out.bmp", System::Drawing::Imaging::ImageFormat::get_Bmp());
    //ExEnd:FNC1FirstPositionInExtendedMode
}

} // namespace CreateAndManageTwoDBarcodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
