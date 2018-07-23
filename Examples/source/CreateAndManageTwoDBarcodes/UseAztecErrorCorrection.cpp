/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "UseAztecErrorCorrection.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeImageFormat.h>
#include <Generation/BarCodeBuilder.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace CreateAndManageTwoDBarcodes {

RTTI_INFO_IMPL_HASH(2991363062u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::UseAztecErrorCorrection, ThisTypeBaseTypesInfo);

void UseAztecErrorCorrection::Run()
{
    //ExStart:UseAztecErrorCorrection
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();
    
    // Instantiate barcode object and set Barcode CodeText & Symbology
    System::SharedPtr<BarCodeBuilder> barCodeBuilder = [&]{ auto tmp_0 = System::MakeObject<BarCodeBuilder>(u"123456789", EncodeTypes::Aztec); tmp_0->set_AztectErrorLevel(10); return tmp_0; }();
    barCodeBuilder->Save(dataDir + u"UseAztecErrorCorrection_out.bmp", Aspose::BarCode::BarCodeImageFormat::Bmp);
    //ExEnd:UseAztecErrorCorrection
}

} // namespace CreateAndManageTwoDBarcodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
