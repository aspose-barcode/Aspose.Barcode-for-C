/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "CreateQRbarcode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeImageFormat.h>
#include <Generation/BarCodeBuilder.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodes {

RTTI_INFO_IMPL_HASH(1331609918u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::CreateQRbarcode, ThisTypeBaseTypesInfo);

void CreateQRbarcode::Run()
{
    // ExStart:CreateQRbarcode                
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
    
    // Instantiate barcode object and set CodeText & Barcode Symbology
    System::SharedPtr<BarCodeBuilder> barCodeBarCodeBuilder = System::MakeObject<BarCodeBuilder>(u"1234567890", EncodeTypes::QR);
    barCodeBarCodeBuilder->Save(dataDir + u"CreateQRbarcode_out.bmp", Aspose::BarCode::BarCodeImageFormat::Bmp);
    // ExEnd:CreateQRbarcode                
}

} // namespace ManageBarCodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
