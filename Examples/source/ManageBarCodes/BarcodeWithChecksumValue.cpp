/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "BarcodeWithChecksumValue.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object_ext.h>
#include <system/object.h>
#include <system/details/dispose_guard.h>
#include <system/console.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/DecodeTypes/SingleDecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/DecodeTypes/DecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/BarCodeReader.h>

#include "RunExamples.h"

namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodes {

RTTI_INFO_IMPL_HASH(2588785965u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::BarcodeWithChecksumValue, ThisTypeBaseTypesInfo);

void BarcodeWithChecksumValue::Run()
{
    // ExStart:ChecksumSupplementData 
    
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
    
    //Initialize reader object
    {
        System::SharedPtr<Aspose::BarCode::BarCodeRecognition::BarCodeReader> reader = System::MakeObject<Aspose::BarCode::BarCodeRecognition::BarCodeReader>(u"error5.jpg", Aspose::BarCode::BarCodeRecognition::DecodeType::EAN13);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ reader});
        // ------------------------------------------
        
        try
        {
            while (reader->Read())
            {
                //Get code text by passing TRUE to get the Barcode along with checksum value
                System::Console::WriteLine(u"{0}: {1}", reader->GetCodeType(), System::ObjectExt::Box<System::String>(reader->GetCodeText(true)));
            }
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
