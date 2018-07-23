/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "CreatePostalBarcodeWithHeight.h"

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/details/dispose_guard.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeBuilder.h>


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodes {

RTTI_INFO_IMPL_HASH(4174851937u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::CreatePostalBarcodeWithHeight, ThisTypeBaseTypesInfo);

void CreatePostalBarcodeWithHeight::Run()
{
    // ExStart:ChecksumSupplementData 
    
    // Create an instance of BarCodeBuilder class
    // Set barcode text
    // Set encoding type
    
    //using (Aspose.BarCode.BarCodeBuilder barCodeBuilder = new Aspose.BarCode.BarCodeBuilder("12345678", Aspose.BarCode.Generation.EncodeTypes.Postnet))
    {
        System::SharedPtr<Aspose::BarCode::BarCodeBuilder> barCodeBuilder = System::MakeObject<Aspose::BarCode::BarCodeBuilder>(u"12345678", Aspose::BarCode::Generation::EncodeTypes::AustraliaPost);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ barCodeBuilder});
        // ------------------------------------------
        
        try
        {
            // Set barcode Dimension and height
            barCodeBuilder->set_xDimension(1.f);
            barCodeBuilder->set_BarHeight(40);
            
            // Save the barcode image
            barCodeBuilder->Save(u"postnet.png");
        }
        catch(...)
        {
            __dispose_guard_0.SetCurrentException(std::current_exception());
        }
    }
    
    // ExEnd:ChecksumSupplementData 
}

} // namespace ManageBarCodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
