/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "CreateUpcaGs1DatabarCoupon.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/Caption.h>
#include <Generation/BarCodeBuilder.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodes {

RTTI_INFO_IMPL_HASH(264671268u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::CreateUpcaGs1DatabarCoupon, ThisTypeBaseTypesInfo);

void CreateUpcaGs1DatabarCoupon::Run()
{
    // ExStart:CreateUpcaGs1DatabarCoupon
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
    
    // Instantiate barcode object and set CodeText & Barcode Symbology
    System::SharedPtr<BarCodeBuilder> barCodeBuilder = [&]{ auto tmp_0 = System::MakeObject<BarCodeBuilder>(u"512345678900(8110)001234502239811110555", EncodeTypes::UpcaGs1DatabarCoupon); tmp_0->get_CaptionAbove()->set_Text(u"012345-022398"); return tmp_0; }();
    
    barCodeBuilder->Save(dataDir + u"couponUpcaDatabar_out.png");
    // ExEnd:CreateUpcaGs1DatabarCoupon
}

} // namespace ManageBarCodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
