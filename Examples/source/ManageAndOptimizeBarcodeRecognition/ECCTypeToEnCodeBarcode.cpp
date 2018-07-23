/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ECCTypeToEnCodeBarcode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/DataMatrixEccType.h>
#include <Generation/BarCodeBuilder.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageAndOptimizeBarCodeRecognition {

RTTI_INFO_IMPL_HASH(3438020489u, ::Aspose::BarCode::Examples::CSharp::ManageAndOptimizeBarCodeRecognition::ECCTypeToEnCodeBarcode, ThisTypeBaseTypesInfo);

void ECCTypeToEnCodeBarcode::Run()
{
    // ExStart:ECCTypeToEnCodeBarcode
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageAndOptimizeBarcodeRecognition();
    
    // Generate barcode (Sample 1) Initialize BarCode builder class object
    System::SharedPtr<BarCodeBuilder> builder1 = [&]{ auto tmp_0 = System::MakeObject<BarCodeBuilder>(u"BASE-41 ONLY ALPHA, DIGITS AND PUNCTUATION", EncodeTypes::DataMatrix); tmp_0->set_DatamatrixEcc(Aspose::BarCode::DataMatrixEccType::Ecc050); return tmp_0; }();
    
    builder1->Save(dataDir + u"SampleBarcode1_out.png");
    // Generate barcode (Sample 2) Initialize BarCode builder class object and Set ECC level.
    System::SharedPtr<BarCodeBuilder> builder2 = [&]{ auto tmp_1 = System::MakeObject<BarCodeBuilder>(u"BASE-41 ONLY ALPHA, DIGITS AND PUNCTUATION.", EncodeTypes::DataMatrix); tmp_1->set_DatamatrixEcc(Aspose::BarCode::DataMatrixEccType::Ecc050); return tmp_1; }();
    builder2->Save(dataDir + u"SampleBarcode2_out.png");
    // ExEnd:ECCTypeToEnCodeBarcode
}

} // namespace ManageAndOptimizeBarCodeRecognition
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
