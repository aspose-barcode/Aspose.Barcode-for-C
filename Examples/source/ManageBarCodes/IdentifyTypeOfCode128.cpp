/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "IdentifyTypeOfCode128.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object_ext.h>
#include <system/object.h>
#include <system/details/dispose_guard.h>
#include <system/console.h>
#include <system/array.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/DecodeTypes/SingleDecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/DecodeTypes/DecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/BarCodeReader.h>
#include <BarCodeRecognition/Recognition/Code128/Code128SubType.h>
#include <BarCodeRecognition/Recognition/Code128/Code128DataPortion.h>

#include "RunExamples.h"

namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodes {

RTTI_INFO_IMPL_HASH(1510686984u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::IdentifyTypeOfCode128, ThisTypeBaseTypesInfo);

void IdentifyTypeOfCode128::Run()
{
    // ExStart:ChecksumSupplementData 
    
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
    
    // Create an instance of BarCodeReader class
    // Set file path
    // Set the recognition type
    {
        System::SharedPtr<Aspose::BarCode::BarCodeRecognition::BarCodeReader> reader = System::MakeObject<Aspose::BarCode::BarCodeRecognition::BarCodeReader>(u"1bc.png", Aspose::BarCode::BarCodeRecognition::DecodeType::Code128);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ reader});
        // ------------------------------------------
        
        try
        {
            // Perform read operation
            if (reader->Read())
            {
                // Create an array of Code128DataPortion class
                // Call the GetCode128DataPortions method
                System::ArrayPtr<System::SharedPtr<Aspose::BarCode::BarCodeRecognition::Code128DataPortion>> code128DataPortions = reader->GetCode128DataPortions();
                
                // Execute Loop for each Code128DataPortion instance
                
                {
                    for (int i_ = 0; i_ < code128DataPortions->Count(); ++i_)
                    {
                        System::SharedPtr<Aspose::BarCode::BarCodeRecognition::Code128DataPortion> code128DataPortion = code128DataPortions[i_];
                        {
                            // Display the subtype and data
                            System::Console::WriteLine(u"Code128SubType {0}", System::ObjectExt::Box<BarCodeRecognition::Code128SubType>(code128DataPortion->get_Code128SubType()));
                            System::Console::WriteLine(u"Data {0}", System::ObjectExt::Box<System::String>(code128DataPortion->get_Data()));
                        }
                    }
                }
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
