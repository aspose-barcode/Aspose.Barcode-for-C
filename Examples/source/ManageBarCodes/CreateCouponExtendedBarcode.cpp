/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "CreateCouponExtendedBarcode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeBuilder.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodes {

RTTI_INFO_IMPL_HASH(1149294048u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::CreateCouponExtendedBarcode, ThisTypeBaseTypesInfo);

void CreateCouponExtendedBarcode::Run()
{
    // ExStart:CreateCouponExtendedBarcode
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
    
    // Instantiate barcode object and set CodeText & Barcode Symbology
    System::SharedPtr<BarCodeBuilder> barCodeBuilder = System::MakeObject<BarCodeBuilder>(u"514141100906(8102)03", EncodeTypes::UpcaGs1Code128Coupon);
    barCodeBuilder->Save(dataDir + u"UpcaGs1Code128Coupon_out.png");
    // ExEnd:CreateCouponExtendedBarcode
}

} // namespace ManageBarCodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
