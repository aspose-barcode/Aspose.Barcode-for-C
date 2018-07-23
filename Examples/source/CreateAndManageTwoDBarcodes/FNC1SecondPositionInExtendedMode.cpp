/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "FNC1SecondPositionInExtendedMode.h"

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

RTTI_INFO_IMPL_HASH(2709183730u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::FNC1SecondPositionInExtendedMode, ThisTypeBaseTypesInfo);

void FNC1SecondPositionInExtendedMode::Run()
{
    //ExStart:FNC1SecondPositionInExtendedMode
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();
    
    // Create codetext
    System::SharedPtr<QrExtCodetextBuilder> lTextBuilder = System::MakeObject<QrExtCodetextBuilder>();
    lTextBuilder->AddFNC1SecondPosition(u"12");
    lTextBuilder->AddPlainCodetext(u"TRUE3456");
    
    // Generate codetext
    System::String lCodetext = lTextBuilder->GetExtendedCodetext();
    
    // Instantiate barcode object and Set its CodeText, encoding mode, error correction level,  display text and Symbology
    System::SharedPtr<BarCodeBuilder> builder = System::MakeObject<BarCodeBuilder>(lCodetext, EncodeTypes::QR);
    builder->set_QREncodeMode(Aspose::BarCode::QREncodeMode::ExtendedCodetext);
    builder->set_QRErrorLevel(Aspose::BarCode::QRErrorLevel::LevelL);
    builder->set_Display2DText(u"My Text");
    
    // Get barcode image Bitmap and Save QR code
    System::SharedPtr<System::Drawing::Bitmap> lBmp = builder->GenerateBarCodeImage();
    lBmp->Save(dataDir + u"FNC1SecondPositionInExtendedMode_out.bmp", System::Drawing::Imaging::ImageFormat::get_Bmp());
    //ExEnd:FNC1SecondPositionInExtendedMode
}

} // namespace CreateAndManageTwoDBarcodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
