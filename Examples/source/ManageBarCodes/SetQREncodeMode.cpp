/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "SetQREncodeMode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/QREncodeMode.h>
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

RTTI_INFO_IMPL_HASH(1487438807u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::SetQREncodeMode, ThisTypeBaseTypesInfo);

void SetQREncodeMode::Run()
{
    // ExStart:SetQREncodeMode   
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
    
    // Create instance of BarCodeBuilder, specify codetext symbology and encode mode 
    System::SharedPtr<BarCodeBuilder> builder = [&]{ auto tmp_0 = System::MakeObject<BarCodeBuilder>(u"test123", EncodeTypes::QR); tmp_0->set_QREncodeMode(Aspose::BarCode::QREncodeMode::Auto); return tmp_0; }();
    builder->Save(dataDir + u"QR-Encode-mode_out.jpg");
    // ExEnd:SetQREncodeMode   
}

} // namespace ManageBarCodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
