/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ManagePDF417Barcode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/Pdf417ErrorLevel.h>
#include <Generation/Pdf417CompactionMode.h>
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

namespace CreateAndManageTwoDBarcodes {

RTTI_INFO_IMPL_HASH(2695409973u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::ManagePDF417Barcode, ThisTypeBaseTypesInfo);

void ManagePDF417Barcode::Run()
{
    //ExStart:ManagePDF417Barcode
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();
    
    // Instantiate barcode object
    System::SharedPtr<BarCodeBuilder> barCodeBuilder = System::MakeObject<BarCodeBuilder>(u"1234567890", EncodeTypes::Pdf417);
    
    // Set Pdf417 Error correction level, Compaction Mode to Text and CodeText for barcode
    barCodeBuilder->set_Pdf417ErrorLevel(Aspose::BarCode::Pdf417ErrorLevel::Level8);
    barCodeBuilder->set_Pdf417CompactionMode(Aspose::BarCode::Pdf417CompactionMode::Text);
    barCodeBuilder->set_CodeText(u"1234567890");
    barCodeBuilder->Save(dataDir + u"ManagePDF417Barcode_out.bmp", System::Drawing::Imaging::ImageFormat::get_Bmp());
    System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir + u"Datamatrixbarcode_out.bmp");
    //ExEnd:ManagePDF417Barcode
}

} // namespace CreateAndManageTwoDBarcodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
