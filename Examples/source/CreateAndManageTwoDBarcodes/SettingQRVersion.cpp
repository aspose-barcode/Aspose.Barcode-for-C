/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "SettingQRVersion.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/QRVersion.h>
#include <Generation/QRErrorLevel.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/EncodeTypes/BaseEncodeType.h>
#include <Generation/BarCodeBuilder.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace CreateAndManageTwoDBarcodes {

RTTI_INFO_IMPL_HASH(3971072197u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::SettingQRVersion, ThisTypeBaseTypesInfo);

void SettingQRVersion::Run()
{
    //ExStart:EncodeQRCode
    
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();
    
    // Instantiate BarCodeBuilder object
    System::SharedPtr<Aspose::BarCode::BarCodeBuilder> builder = System::MakeObject<Aspose::BarCode::BarCodeBuilder>();
    
    // Set the Code text for the barcode
    builder->set_CodeText(u"ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    
    // Set the symbology type to QR
    builder->set_EncodeType(Aspose::BarCode::Generation::EncodeTypes::QR);
    
    // Set the error level
    builder->set_QRErrorLevel(Aspose::BarCode::QRErrorLevel::LevelQ);
    
    // Set the QR barcode version number
    builder->set_QRVersion(Aspose::BarCode::QRVersion::Version10);
    
    //Save the image
    builder->Save(u"qr_version10_errorQ.png");
    
    //ExEnd:EncodeQRCode
}

} // namespace CreateAndManageTwoDBarcodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
