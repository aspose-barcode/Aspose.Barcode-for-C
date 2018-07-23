/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "GetMinimumBarCodeSize.h"

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/details/dispose_guard.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeBuilder.h>
#include <drawing/size_f.h>
#include <drawing/graphics_unit.h>
#include <drawing/bitmap.h>


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodes {

RTTI_INFO_IMPL_HASH(1726601380u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::GetMinimumBarCodeSize, ThisTypeBaseTypesInfo);

void GetMinimumBarCodeSize::Run()
{
    // ExStart:ChecksumSupplementData 
    
    // Create an instance of BarCodeBuilder class
    // Set barcode text
    // Set encoding type
    {
        System::SharedPtr<Aspose::BarCode::BarCodeBuilder> builder = System::MakeObject<Aspose::BarCode::BarCodeBuilder>(u"1234567890", Aspose::BarCode::Generation::EncodeTypes::Code128);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_1({ builder});
        // ------------------------------------------
        
        try
        {
            // Set graphic unit
            builder->set_GraphicsUnit(System::Drawing::GraphicsUnit::Pixel);
            
            // Call GetMinimumBarCodeSize method to get the minimum size required
            System::Drawing::SizeF minSize = builder->GetMinimumBarCodeSize();
            
            // Set Auto size to false
            builder->set_AutoSize(false);
            
            // Set image height & width with the help of min size got from GetMinimumBarCodeSize method
            builder->set_ImageWidth(minSize.get_Width());
            builder->set_ImageHeight(minSize.get_Height());
            
            // Save the barcode image
            {
                System::SharedPtr<System::Drawing::Bitmap> image = builder->get_BarCodeImage();
                // Clearing resources under 'using' statement
                System::Details::DisposeGuard<1> __dispose_guard_0({ image});
                // ------------------------------------------
                
                try
                {
                    image->Save(u"minimumresult.png");
                }
                catch(...)
                {
                    __dispose_guard_0.SetCurrentException(std::current_exception());
                }
            }
            
            // ExEnd:ChecksumSupplementData 
        }
        catch(...)
        {
            __dispose_guard_1.SetCurrentException(std::current_exception());
        }
    }
}

} // namespace ManageBarCodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
