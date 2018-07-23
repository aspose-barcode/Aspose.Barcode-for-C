/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "SwissPostParcelBarcodeWithAdditionalServiceType.h"

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

RTTI_INFO_IMPL_HASH(2443940075u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::SwissPostParcelBarcodeWithAdditionalServiceType, ThisTypeBaseTypesInfo);

void SwissPostParcelBarcodeWithAdditionalServiceType::Run()
{
    
    // ExStart:SwissPostParcelBarcodeWithAdditionalServiceType
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
    
    // Generate the barcode, Set codeText, SymbologyType and Save barcode on local disk
    System::SharedPtr<BarCodeBuilder> builder = System::MakeObject<BarCodeBuilder>(u"989967121212121212", EncodeTypes::SwissPostParcel);
    
    builder->Save(dataDir + u"SwissPostParcelBarcodeWithAdditionalServiceType_out.Png");
    // ExEnd:SwissPostParcelBarcodeWithAdditionalServiceType
    
}

} // namespace ManageBarCodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
