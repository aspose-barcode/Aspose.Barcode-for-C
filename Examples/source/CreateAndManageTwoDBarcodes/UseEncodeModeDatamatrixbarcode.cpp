/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "UseEncodeModeDatamatrixbarcode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/MarginsF.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/CodeLocation.h>
#include <Generation/BarCodeImageFormat.h>
#include <Generation/BarCodeBuilder.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace CreateAndManageTwoDBarcodes {

RTTI_INFO_IMPL_HASH(1745324627u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::UseEncodeModeDatamatrixbarcode, ThisTypeBaseTypesInfo);

void UseEncodeModeDatamatrixbarcode::Run()
{
    //ExStart:UseEncodeModeDatamatrixbarcode
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();
    System::String gtin = u"898978777776665655";
    System::String uid = u"121212121212121212";
    System::String batch = u"GH768";
    System::String expDate = u"150923";
    System::String textToEncode = gtin + uid + batch + expDate;
    // Or  "(01)"+ gtin + "(..)"+ uid + ...
    System::String textToDisplay = System::String(u"GTIN:") + gtin + u"\nUID:" + uid + u"\nBatch:" + batch + u"\nExp.Date:" + expDate;
    
    // Instantiate barcode object and set N order to avoid including all the names into the codetext, the property called "Display2DText" should be used.            
    System::SharedPtr<BarCodeBuilder> builder = System::MakeObject<BarCodeBuilder>(u"textToEncode", EncodeTypes::DataMatrix);
    builder->set_Display2DText(textToDisplay);
    builder->set_CodeLocation(Aspose::BarCode::CodeLocation::Right);
    builder->set_Margins(System::MakeObject<MarginsF>(0, 0, 0, 0));
    
    // Builder.CodeTextSpace = 0; // Not recommended small space
    
    // Save the Barcode image
    builder->Save(dataDir + u"codetextRightDisplay_out.png", Aspose::BarCode::BarCodeImageFormat::Png);
    //ExEnd:UseEncodeModeDatamatrixbarcode
}

} // namespace CreateAndManageTwoDBarcodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
