/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "OptionalExceptionMessageWith1DBarCode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object_ext.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeBuilder.h>
#include <drawing/bitmap.h>


using namespace Aspose::BarCode::Generation;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodes {

RTTI_INFO_IMPL_HASH(245155978u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::OptionalExceptionMessageWith1DBarCode, ThisTypeBaseTypesInfo);

void OptionalExceptionMessageWith1DBarCode::Run()
{
    // ExStart:OptionalExceptionMessageWith1DBarCode
    // Instantiate BarCodeBuilder object
    System::SharedPtr<BarCodeBuilder> builder = System::MakeObject<BarCodeBuilder>(u"348503498549085409", EncodeTypes::EAN13);
    try
    {
        // Error message will not been thrown in case of false, default value is also false and Get barcode image
        builder->set_ThrowExceptionWhenCodeTextIncorrect(true);
        System::SharedPtr<System::Drawing::Bitmap> bitmap = builder->GenerateBarCodeImage();
    }
    catch (System::Exception& ex)
    {
        System::Console::WriteLine(u"Exception must be thrown, {0}", System::ObjectExt::Box<System::String>(ex.get_Message()));
    }
    
    // ExEnd:OptionalExceptionMessageWith1DBarCode
}

} // namespace ManageBarCodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose
