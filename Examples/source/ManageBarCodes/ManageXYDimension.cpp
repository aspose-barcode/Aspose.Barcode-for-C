/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ManageXYDimension.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeBuilder.h>
#include <drawing/imaging/image_format.h>
#include <drawing/graphics_unit.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodes {

RTTI_INFO_IMPL_HASH(1172982299u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::ManageXYDimension, ThisTypeBaseTypesInfo);

void ManageXYDimension::Run()
{
    // ExStart:ManageXYDimension                
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
    System::String dstCode128 = dataDir + u"code128-YDimensionChanged_out.jpg";
    
    // Instantiate barcode object and set CodeText & Barcode Symbology
    System::SharedPtr<BarCodeBuilder> barCodeBuilder = System::MakeObject<BarCodeBuilder>(u"1234567", EncodeTypes::Code128);
    
    // Save the image to your system and set its image format to Jpeg
    barCodeBuilder->Save(dstCode128, System::Drawing::Imaging::ImageFormat::get_Jpeg());
    
    // Set the X-Dimension for the bars of the barcode
    barCodeBuilder->set_xDimension(0.5f);
    
    // Set the measuring unit of barcode to millimeter
    barCodeBuilder->set_GraphicsUnit(System::Drawing::GraphicsUnit::Millimeter);
    
    // Save the image to your system and set its image format to Jpeg
    barCodeBuilder->Save(dstCode128, System::Drawing::Imaging::ImageFormat::get_Jpeg());
    
    // Instantiate barcode object and set differnt barcode properties
    System::SharedPtr<BarCodeBuilder> barCodeBuilder1 = [&]{ auto tmp_0 = System::MakeObject<BarCodeBuilder>(u"1234567", EncodeTypes::Pdf417); tmp_0->set_yDimension(4); return tmp_0; }();
    
    // Save the image to your system and set its image format to Jpeg
    barCodeBuilder1->Save(dataDir + u"pdf417-YDimensionChanged_out.jpg", System::Drawing::Imaging::ImageFormat::get_Jpeg());
    // ExEnd:ManageXYDimension
}

} // namespace ManageBarCodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
