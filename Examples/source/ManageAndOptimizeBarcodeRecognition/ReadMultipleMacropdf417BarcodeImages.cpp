/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ReadMultipleMacropdf417BarcodeImages.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/directory.h>
#include <system/exceptions.h>
#include <system/console.h>
#include <system/array.h>
#include <cstdint>
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

RTTI_INFO_IMPL_HASH(843569411u, ::Aspose::BarCode::Examples::CSharp::ManageAndOptimizeBarCodeRecognition::ReadMultipleMacropdf417BarcodeImages, ThisTypeBaseTypesInfo);

void ReadMultipleMacropdf417BarcodeImages::Run()
{
    // ExStart:ReadMultipleMacropdf417BarcodeImages
    try
    {
        // The path to the documents directory.             
        System::String dataDir = RunExamples::GetDataDir_ManageAndOptimizeBarcodeRecognition();
        System::String strFileID = u"1";
        System::ArrayPtr<System::String> strFileslist = System::IO::Directory::GetFiles(dataDir + strFileID + u"_*.png");
        
        {
            for (int i_ = 0; i_ < strFileslist->Count(); ++i_)
            {
                System::String strFile = strFileslist[i_];
                {
                    // We got list of all the files, now read barcodes
                    System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(strFile, DecodeType::MacroPdf417);
                    if (reader->Read() == true)
                    {
                        System::Console::WriteLine(System::String(u"File: ") + strFile + u" == FileID: " + reader->GetMacroPdf417FileID() + u" == SegmentID: " + reader->GetMacroPdf417SegmentID() + u"  == CodeText: " + reader->GetCodeText());
                    }
                    
                    // Close the reader
                    reader->Close();
                }
            }
        }
    }
    catch (System::Exception& ex)
    {
        System::Console::WriteLine(ex.get_Message() + u"\nThis example will only work if you apply a valid Aspose BarCode License. You can purchase full license or get 30 day temporary license from http://wwww.aspose.com/purchase/default.aspx.");
    }
    
    // ExEnd:ReadMultipleMacropdf417BarcodeImages
}

} // namespace ManageAndOptimizeBarCodeRecognition
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
