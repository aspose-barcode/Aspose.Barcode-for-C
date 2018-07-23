/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "SetCodeTextFontFamilyNameAndSize.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/BarCodeBuilder.h>
#include <drawing/imaging/image_format.h>
#include <drawing/font.h>

#include "RunExamples.h"

namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodeImages {

RTTI_INFO_IMPL_HASH(2054056452u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodeImages::SetCodeTextFontFamilyNameAndSize, ThisTypeBaseTypesInfo);

void SetCodeTextFontFamilyNameAndSize::Run()
{
    // ExStart:SetCodeTextFontFamilyNameAndSize       
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodesImages();
    
    // Instantiate barcode object and Set Code text font's type and size
    System::SharedPtr<BarCodeBuilder> barCodeBuilder = [&]{ auto tmp_0 = System::MakeObject<BarCodeBuilder>(); tmp_0->set_CodeTextFont(System::MakeObject<System::Drawing::Font>(u"Verdana", 12.f)); return tmp_0; }();
    barCodeBuilder->Save(dataDir + u"SetCodeTextFontFamilyNameAndSize_out.bmp", System::Drawing::Imaging::ImageFormat::get_Bmp());
    // ExEnd:SetCodeTextFontFamilyNameAndSize       
}

} // namespace ManageBarCodeImages
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
