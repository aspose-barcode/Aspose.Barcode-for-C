/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "CreatePdf417BarcodeWithChineseCharacters.h"

#include <system/text/encoding.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeBuilder.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodes {

RTTI_INFO_IMPL_HASH(3413856858u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::CreatePdf417BarcodeWithChineseCharacters, ThisTypeBaseTypesInfo);

void CreatePdf417BarcodeWithChineseCharacters::Run()
{
    // ExStart:CreatePdf417BarcodeWithChineseCharacters
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
    const System::String codetext = u"被洪水困住的";
    
    // Generate the barcode
    System::SharedPtr<BarCodeBuilder> builder = System::MakeObject<BarCodeBuilder>(codetext, EncodeTypes::Pdf417);
    
    // Encode the code text and Set the display text   
    System::ArrayPtr<uint8_t> bytes = System::Text::Encoding::GetEncoding(936)->GetBytes(codetext);
    builder->SetBinaryCodeText(bytes);
    builder->set_Display2DText(codetext);
    builder->Save(dataDir + u"CreatePdf417BarcodeWithChineseCharacters_out.png");
    // ExEnd:CreatePdf417BarcodeWithChineseCharacters
}

} // namespace ManageBarCodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
