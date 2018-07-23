/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "CreateEnCodeDatamatrixBarCode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/DataMatrixEncodeMode.h>
#include <Generation/BarCodeBuilder.h>
#include <drawing/imaging/image_format.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace CreateAndManageTwoDBarcodes {

RTTI_INFO_IMPL_HASH(2471504645u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::CreateEnCodeDatamatrixBarCode, ThisTypeBaseTypesInfo);

void CreateEnCodeDatamatrixBarCode::Run()
{
    //ExStart:CreateEnCodeDatamatrixBarCode
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();
    
    // Instantiate barcode object and set CodeText & Barcode Symbology
    System::SharedPtr<BarCodeBuilder> barCodeBuilder = System::MakeObject<BarCodeBuilder>(u"This is the data to be encoded", EncodeTypes::DataMatrix);
    
    // Set Data Matrix EncodeMode 
    barCodeBuilder->set_DataMatrixEncodeMode(Aspose::BarCode::DataMatrixEncodeMode::ASCII);
    barCodeBuilder->Save(dataDir + u"ManagePDF417Barcode_out.bmp", System::Drawing::Imaging::ImageFormat::get_Bmp());
    //ExEnd:CreateEnCodeDatamatrixBarCode
}

} // namespace CreateAndManageTwoDBarcodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose