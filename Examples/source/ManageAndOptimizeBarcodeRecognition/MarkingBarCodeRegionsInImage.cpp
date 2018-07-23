/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "MarkingBarCodeRegionsInImage.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/console.h>
#include <drawing/pen.h>
#include <drawing/image.h>
#include <drawing/graphics.h>
#include <drawing/color.h>
#include <drawing/brushes.h>
#include <drawing/brush.h>
#include <cstdint>
#include <BarCodeRecognition/Recognition/Region/BarCodeRegion.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/DecodeTypes/SingleDecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/DecodeTypes/DecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/BarCodeReader.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::BarCodeRecognition;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageAndOptimizeBarCodeRecognition {

RTTI_INFO_IMPL_HASH(2052290843u, ::Aspose::BarCode::Examples::CSharp::ManageAndOptimizeBarCodeRecognition::MarkingBarCodeRegionsInImage, ThisTypeBaseTypesInfo);

void MarkingBarCodeRegionsInImage::Run()
{
    // ExStart:MarkingBarCodeRegionsInImage
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageAndOptimizeBarcodeRecognition();
    
    // Create an instance of BarCodeReader and set image and symbology type to recognize
    System::SharedPtr<BarCodeReader> barCodeReader = System::MakeObject<BarCodeReader>(dataDir + u"code39.png", DecodeType::Code39Standard);
    int32_t counter = 0;
    
    // Read all the barcodes from the images
    while (barCodeReader->Read())
    {
        // Display the symbology type, codetext and Get the barcode region
        System::Console::WriteLine(System::String(u"BarCode Type: ") + barCodeReader->GetCodeType());
        System::Console::WriteLine(System::String(u"BarCode CodeText: ") + barCodeReader->GetCodeText());
        System::SharedPtr<BarCodeRegion> region = barCodeReader->GetRegion();
        
        if (region != nullptr)
        {
            // Initialize an object of type Image to get the Graphics object
            System::SharedPtr<System::Drawing::Image> image = System::Drawing::Image::FromFile(dataDir + u"code39.png");
            
            // Initialize graphics object from the image
            System::SharedPtr<System::Drawing::Graphics> graphics = System::Drawing::Graphics::FromImage(image);
            
            // Draw the barcode edges,  Save the image and Fill the barcode area with some color
            region->DrawBarCodeEdges(graphics, System::MakeObject<System::Drawing::Pen>(System::Drawing::Color::get_Red(), 1.f));
            //image->Save(dataDir + System::String::Format(u"edge_{0}.png",counter++));
            region->FillBarCodeRegion(graphics, System::Drawing::Brushes::get_Green());
            //image->Save(dataDir + System::String::Format(u"fill_{0}.png",counter++));
        }
    }
    barCodeReader->Close();
    // ExEnd:MarkingBarCodeRegionsInImage
}

} // namespace ManageAndOptimizeBarCodeRecognition
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
