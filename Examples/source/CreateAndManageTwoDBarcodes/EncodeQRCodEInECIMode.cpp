/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "EncodeQRCodEInECIMode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/QRErrorLevel.h>
#include <Generation/QREncodeType.h>
#include <Generation/QREncodeMode.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/ECIEncodings.h>
#include <Generation/BarCodeBuilder.h>
#include <drawing/imaging/image_format.h>
#include <drawing/bitmap.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace CreateAndManageTwoDBarcodes {

RTTI_INFO_IMPL_HASH(302270279u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::EncodeQRCodEInECIMode, ThisTypeBaseTypesInfo);

void EncodeQRCodEInECIMode::Run()
{
    //ExStart:EncodeQRCodEInECIMode
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();
    
    // initialize a BarCodeBuilder class object and Set its CodeText & Symbology Type 
    System::SharedPtr<BarCodeBuilder> builder = System::MakeObject<BarCodeBuilder>(u"12345TEXT", EncodeTypes::QR);
    
    // Set encoding mode, ForceQR (default) for standard QR, ECI encoding type, error correction level
    builder->set_QREncodeMode(Aspose::BarCode::QREncodeMode::ECIEncoding);
    builder->set_QREncodeType(Aspose::BarCode::QREncodeType::ForceQR);
    builder->set_ECIEncoding(Aspose::BarCode::ECIEncodings::UTF8);
    builder->set_QRErrorLevel(Aspose::BarCode::QRErrorLevel::LevelL);
    
    // Get barcode image Bitmap & Save QR code
    System::SharedPtr<System::Drawing::Bitmap> lBmp = builder->GenerateBarCodeImage();
    lBmp->Save(dataDir + u"EncodeQRCodEInECIMode_out.bmp", System::Drawing::Imaging::ImageFormat::get_Bmp());
    //ExEnd:EncodeQRCodEInECIMode
}

} // namespace CreateAndManageTwoDBarcodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
