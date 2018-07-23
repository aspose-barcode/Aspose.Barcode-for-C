/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "SetWideNarrowRatio.h"

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

RTTI_INFO_IMPL_HASH(3288560640u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::SetWideNarrowRatio, ThisTypeBaseTypesInfo);

void SetWideNarrowRatio::Run()
{
    // ExStart:SetWideNarrowRatio
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
    
    // Set the symbology and code text and X dimension reduction property of barcode and save barcode Image
    System::SharedPtr<BarCodeBuilder> barCodeBuilder = [&]{ auto tmp_0 = System::MakeObject<BarCodeBuilder>(u"blackReduction", EncodeTypes::Code128); tmp_0->set_xDimension(1.2f); tmp_0->set_BarWidthReduction(0.2f); return tmp_0; }();
    barCodeBuilder->Save(dataDir + u"SetWideNarrowRatio_out.png");
    // ExEnd:SetWideNarrowRatio
}

} // namespace ManageBarCodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
