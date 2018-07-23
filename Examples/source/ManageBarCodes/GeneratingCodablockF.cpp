/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "GeneratingCodablockF.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/EncodeTypes/BaseEncodeType.h>
#include <Generation/BarCodeBuilder.h>
#include <drawing/bitmap.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodes {

RTTI_INFO_IMPL_HASH(3228156377u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::GeneratingCodablockF, ThisTypeBaseTypesInfo);

void GeneratingCodablockF::Run()
{
    // ExStart:GeneratingCodablockF
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
    
    // Create instance of BarCodeBuilder class.
    System::SharedPtr<BarCodeBuilder> b = System::MakeObject<BarCodeBuilder>();
    
    // Specify code text and set encode type.
    b->set_CodeText(u"CODABLOCKF 01234567890123456789012digits");
    b->set_EncodeType(EncodeTypes::CodablockF);
    
    // Save the image to disk in PNG format
    b->get_BarCodeImage()->Save(u"CodablockF_out.png");
    // ExEnd:GeneratingCodablockF
}

} // namespace ManageBarCodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
