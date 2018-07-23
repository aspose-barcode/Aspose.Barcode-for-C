/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "CreateAndSetSizeForImageWithBarcode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/console.h>
#include <Generation/MarginsF.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/CodeLocation.h>
#include <Generation/BarCodeBuilder.h>
#include <drawing/size.h>
#include <drawing/graphics_unit.h>
#include <drawing/bitmap.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodes {

RTTI_INFO_IMPL_HASH(1785422843u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::CreateAndSetSizeForImageWithBarcode, ThisTypeBaseTypesInfo);

void CreateAndSetSizeForImageWithBarcode::Run()
{
    try
    {
        // ExStart:CreateAndSetSizeForImageWithBarcode
        // The path to the documents directory.
        System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
        
        // Generate the barcode and set code text, symbology type
        System::SharedPtr<BarCodeBuilder> builder = System::MakeObject<BarCodeBuilder>(u"One thing 2 thing", EncodeTypes::Pdf417);
        
        // Set the code text location,  graphics unit and margins
        builder->set_CodeLocation(Aspose::BarCode::CodeLocation::None);
        builder->set_GraphicsUnit(System::Drawing::GraphicsUnit::Pixel);
        builder->get_Margins()->Set(0);
        
        // Get Bitmap with exact barcode only
        System::SharedPtr<System::Drawing::Bitmap> bmp = builder->GetOnlyBarCodeImage();
        
        // Allows to set size for whole picture with barcode inside and Save image on local disk
        System::SharedPtr<System::Drawing::Bitmap> bitmap = builder->GetCustomSizeBarCodeImage(System::Drawing::Size(bmp->get_Width() * 5, bmp->get_Height() * 5), false);
        bitmap->Save(dataDir + u"CreateAndSetSizeForImageWithBarcode_out.Png");
        // ExEnd:CreateAndSetSizeForImageWithBarcode
    }
    catch (System::Exception& ex)
    {
        System::Console::WriteLine(ex.get_Message() + u"\nThis example will only work if you apply a valid Aspose License. You can purchase full license or get 30 day temporary license from http://www.aspose.com/purchase/default.aspx.");
    }
    
}

} // namespace ManageBarCodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
