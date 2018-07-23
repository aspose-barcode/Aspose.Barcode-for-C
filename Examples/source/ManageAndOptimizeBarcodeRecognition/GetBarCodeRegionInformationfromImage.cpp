/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "GetBarCodeRegionInformationfromImage.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/console.h>
#include <system/array.h>
#include <drawing/point.h>
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

RTTI_INFO_IMPL_HASH(916058428u, ::Aspose::BarCode::Examples::CSharp::ManageAndOptimizeBarCodeRecognition::GetBarCodeRegionInformationfromImage, ThisTypeBaseTypesInfo);

void GetBarCodeRegionInformationfromImage::Run()
{
    // ExStart:GetBarCodeRegionInformationfromImage
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageAndOptimizeBarcodeRecognition();
    
    // Create an instance of BarCodeReader class and read barcode file
    System::SharedPtr<BarCodeReader> barCodeReader = System::MakeObject<BarCodeReader>(dataDir + u"Region.png", DecodeType::Code39Standard);
    
    // Try to recognize all possible barcodes in the image
    while (barCodeReader->Read())
    {
        // Get the region information
        System::SharedPtr<BarCodeRegion> region = barCodeReader->GetRegion();
        if (region != nullptr)
        {
            // Display x and y coordinates of barcode detected
            System::ArrayPtr<System::Drawing::Point> point = region->get_Points();
            System::Console::WriteLine(System::String(u"Top left coordinates: X = ") + point[0].get_X() + u", Y = " + point[0].get_Y());
            System::Console::WriteLine(System::String(u"Top right coordinates: X = ") + point[1].get_X() + u", Y = " + point[1].get_Y());
            System::Console::WriteLine(System::String(u"Bottom right coordinates: X = ") + point[2].get_X() + u", Y = " + point[2].get_Y());
            System::Console::WriteLine(System::String(u"Bottom left coordinates: X = ") + point[3].get_X() + u", Y = " + point[3].get_Y());
        }
        System::Console::WriteLine(System::String(u"Codetext: ") + barCodeReader->GetCodeText());
    }
    // Close reader
    barCodeReader->Close();
    // ExEnd:GetBarCodeRegionInformationfromImage
    
}

} // namespace ManageAndOptimizeBarCodeRecognition
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
