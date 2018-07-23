/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "CreatebarcodewithImageInsteadOfCodetext.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/math.h>
#include <system/exceptions.h>
#include <system/details/dispose_guard.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeBuilder.h>
#include <drawing/point_f.h>
#include <drawing/image.h>
#include <drawing/graphics.h>
#include <drawing/color.h>
#include <drawing/bitmap.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace CreateAndManageTwoDBarcodes {

RTTI_INFO_IMPL_HASH(1083119876u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::CreatebarcodewithImageInsteadOfCodetext, ThisTypeBaseTypesInfo);

void CreatebarcodewithImageInsteadOfCodetext::Run()
{
    // ExStart:CreateAztecbarcode
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();
    
    // Create an instance of BarCodeBuilder class
    // Set the barcode text
    // Set the barcode symbology 
    {
        System::SharedPtr<Aspose::BarCode::BarCodeBuilder> builder = System::MakeObject<Aspose::BarCode::BarCodeBuilder>(u"123456789012", Aspose::BarCode::Generation::EncodeTypes::EAN13);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_4({ builder});
        // ------------------------------------------
        
        try
        {
            // Generate Barcode image and store it in a Bitmap
            {
                System::SharedPtr<System::Drawing::Bitmap> barcode = builder->GenerateBarCodeImage();
                // Clearing resources under 'using' statement
                System::Details::DisposeGuard<1> __dispose_guard_3({ barcode});
                // ------------------------------------------
                
                try
                {
                    // Load the logo/other image as Bitmap
                    {
                        System::SharedPtr<System::Drawing::Bitmap> picture = System::DynamicCast<System::Drawing::Bitmap>(System::Drawing::Image::FromFile(u"path_to_your_picture.png"));
                        // Clearing resources under 'using' statement
                        System::Details::DisposeGuard<1> __dispose_guard_2({ picture});
                        // ------------------------------------------
                        
                        try
                        {
                            // Create a new empty image with new Calculated height &amp; width
                            {
                                System::SharedPtr<System::Drawing::Bitmap> output = System::MakeObject<System::Drawing::Bitmap>(System::Math::Max(barcode->get_Width(), picture->get_Width()), barcode->get_Height() + picture->get_Height());
                                // Clearing resources under 'using' statement
                                System::Details::DisposeGuard<1> __dispose_guard_1({ output});
                                // ------------------------------------------
                                
                                try
                                {
                                    // Get the Graphics object
                                    {
                                        System::SharedPtr<System::Drawing::Graphics> g = System::Drawing::Graphics::FromImage(output);
                                        // Clearing resources under 'using' statement
                                        System::Details::DisposeGuard<1> __dispose_guard_0({ g});
                                        // ------------------------------------------
                                        
                                        try
                                        {
                                            // Clear the canvas 
                                            g->Clear(System::Drawing::Color::get_White());
                                            
                                            // Draw the primary image (barcode image) on the canvas
                                            g->DrawImage(picture, System::Drawing::PointF(0, 0));
                                            
                                            // Draw the second image (logo image) on the canvas inside the barcode image
                                            g->DrawImage(barcode, System::Drawing::PointF(0, picture->get_Height()));
                                        }
                                        catch(...)
                                        {
                                            __dispose_guard_0.SetCurrentException(std::current_exception());
                                        }
                                    }
                                    output->Save(u"output.jpg");
                                }
                                catch(...)
                                {
                                    __dispose_guard_1.SetCurrentException(std::current_exception());
                                }
                            }
                        }
                        catch(...)
                        {
                            __dispose_guard_2.SetCurrentException(std::current_exception());
                        }
                    }
                }
                catch(...)
                {
                    __dispose_guard_3.SetCurrentException(std::current_exception());
                }
            }
        }
        catch(...)
        {
            __dispose_guard_4.SetCurrentException(std::current_exception());
        }
    }
    
    // ExEnd:CreateAztecbarcode
}

} // namespace CreateAndManageTwoDBarcodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
