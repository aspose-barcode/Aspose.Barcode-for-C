/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "CodabarChecksumMode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object_ext.h>
#include <system/object.h>
#include <system/details/dispose_guard.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/EncodeTypes/BaseEncodeType.h>
#include <Generation/EnableChecksum.h>
#include <Generation/CodabarChecksumMode.h>
#include <Generation/BarCodeBuilder.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/DecodeTypes/SingleDecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/DecodeTypes/DecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionFilters/BarCodeReader.h>
#include <BarCodeRecognition/Recognition/ChecksumValidation.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodes {

RTTI_INFO_IMPL_HASH(3347396843u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::CodabarChecksumMode, ThisTypeBaseTypesInfo);

void CodabarChecksumMode::Run()
{
    // ExStart:ChecksumSupplementData 
    
    // The path to the documents directory.
    System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
    
    //Generation
    //Instantiate BarCodeBuilder object
    System::SharedPtr<Aspose::BarCode::BarCodeBuilder> builder = System::MakeObject<Aspose::BarCode::BarCodeBuilder>();
    
    //Set the Code text for the barcode
    builder->set_CodeText(u"1234567890");
    
    //Set the symbology type to Code128
    builder->set_EncodeType(Aspose::BarCode::Generation::EncodeTypes::Codabar);
    
    //Set the EnableChecksum property to yes
    builder->set_EnableChecksum(Aspose::BarCode::EnableChecksum::Yes);
    
    //Set the CodabarChecksumMode
    builder->set_CodabarChecksumMode(Aspose::BarCode::CodabarChecksumMode::Mod10);
    
    //Save the image on the system
    builder->Save(u"Codabar_Mod10.png");
    
    //Recognition
    //Initialize reader object
    {
        System::SharedPtr<Aspose::BarCode::BarCodeRecognition::BarCodeReader> reader = System::MakeObject<Aspose::BarCode::BarCodeRecognition::BarCodeReader>(u"Codabar_Mod10.png", Aspose::BarCode::BarCodeRecognition::DecodeType::Codabar);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ reader});
        // ------------------------------------------
        
        try
        {
            //Set ChecksumValidation property of the reader to On
            reader->set_ChecksumValidation(Aspose::BarCode::BarCodeRecognition::ChecksumValidation::On);
            while (reader->Read())
            {
                //Get code text
                System::Console::WriteLine(u"{0}:{1}", reader->GetCodeType(), System::ObjectExt::Box<System::String>(reader->GetCodeText()));
                
                //Get checksum value
                System::Console::WriteLine(System::String(u"Checksum:") + reader->GetCheckSum());
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
