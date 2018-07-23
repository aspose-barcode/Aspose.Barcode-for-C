/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "SetAspectRatio.h"

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

namespace CreateAndManageTwoDBarcodes {

RTTI_INFO_IMPL_HASH(1661211471u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::SetAspectRatio, ThisTypeBaseTypesInfo);

void SetAspectRatio::Run()
{
    //ExStart:SetAspectRatio
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();
    
    // Create instance of BarCodeBuilder class, Set Aspect Ratio to 3:2 or 1.5 and Save the barcode image to disk in PNG format  
    System::SharedPtr<BarCodeBuilder> barCodeBuilder = System::MakeObject<BarCodeBuilder>(u"1234567890", EncodeTypes::Pdf417);
    barCodeBuilder->set_AspectRatio(1.5f);
    barCodeBuilder->Save(dataDir + u"SetAspectRatio_out.png", Aspose::BarCode::BarCodeImageFormat::Png);
    //ExEnd:SetAspectRatio
}

} // namespace CreateAndManageTwoDBarcodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose