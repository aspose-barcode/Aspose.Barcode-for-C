#ifndef _CSharp_ManageBarCodes_ReadAndSortBarcodesInSpecificOrder_h_
#define _CSharp_ManageBarCodes_ReadAndSortBarcodesInSpecificOrder_h_
/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference 
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information. 
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads, 
install it and then add its reference to this project. For any issues, questions or suggestions 
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/icomparer.h>
#include <cstdint>

namespace Aspose { namespace BarCode { namespace BarCodeRecognition { class BarCodeRegion; } } }

namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

namespace ManageBarCodes {

class ReadAndSortBarcodesInSpecificOrder : public System::Object
{
    typedef ReadAndSortBarcodesInSpecificOrder ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    class FoundBarCodes : public System::Object
    {
        typedef FoundBarCodes ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::String CodeText;
        System::SharedPtr<Aspose::BarCode::BarCodeRecognition::BarCodeRegion> region;
        
        FoundBarCodes(System::String text, System::SharedPtr<Aspose::BarCode::BarCodeRecognition::BarCodeRegion> reg);
        FoundBarCodes();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    };
    
    class FoundComparator : public System::Collections::Generic::IComparer<Aspose::BarCode::Examples::CSharp::ManageBarCodes::ReadAndSortBarcodesInSpecificOrder::FoundBarCodes>
    {
        typedef FoundComparator ThisType;
        typedef System::Collections::Generic::IComparer<Aspose::BarCode::Examples::CSharp::ManageBarCodes::ReadAndSortBarcodesInSpecificOrder::FoundBarCodes> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        int32_t Compare(ReadAndSortBarcodesInSpecificOrder::FoundBarCodes found1, ReadAndSortBarcodesInSpecificOrder::FoundBarCodes found2) const;
        
    };
    
    
public:

    static void Run();
    
};

} // namespace ManageBarCodes
} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose

#endif // _CSharp_ManageBarCodes_ReadAndSortBarcodesInSpecificOrder_h_

