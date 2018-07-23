/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "SpecifyITF14BorderThicknes.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/ResolutionMode.h>
#include <Generation/Resolution.h>
#include <Generation/ITF14BorderType.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeImageFormat.h>
#include <Generation/BarCodeBuilder.h>
#include <drawing/graphics_unit.h>
#include <drawing/font.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodeImages {

RTTI_INFO_IMPL_HASH(3046853486u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodeImages::SpecifyITF14BorderThicknes, ThisTypeBaseTypesInfo);

void SpecifyITF14BorderThicknes::Run()
{
    // ExEnd:SpecifyITF14BorderThicknes                       
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodesImages();
    
    // Instantiate barcode object
    System::SharedPtr<BarCodeBuilder> barCodeBuilder = [&]{ auto tmp_0 = System::MakeObject<BarCodeBuilder>(u"00850006000227", EncodeTypes::ITF14); tmp_0->set_AutoSize(true); tmp_0->set_ITF14BorderType(Aspose::BarCode::ITF14BorderType::BarOut); tmp_0->set_CodeTextFont(System::MakeObject<System::Drawing::Font>(u"OCR B Std", 8.0f)); tmp_0->set_GraphicsUnit(System::Drawing::GraphicsUnit::Millimeter); tmp_0->set_xDimension(0.495f); tmp_0->set_BarHeight(12.7f); tmp_0->set_CodeTextSpace(0.5f); tmp_0->set_Resolution(System::MakeObject<Resolution>(1200.0f, 1200.0f, Aspose::BarCode::ResolutionMode::Customized)); return tmp_0; }();
    barCodeBuilder->Save(dataDir + u"ITF14_Border_TypeBar_Out.png", Aspose::BarCode::BarCodeImageFormat::Png);
    // ExEnd:SpecifyITF14BorderThicknes                       
}

} // namespace ManageBarCodeImages
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
