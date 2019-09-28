/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "GetDLLVersionInformation.h"

#include <system/string.h>
#include <system/exceptions.h>
#include <system/date_time.h>
#include <system/console.h>
#include <Metadata/AssemblyInfo.h>
#include <cstdint>

namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageBarCodes {

					RTTI_INFO_IMPL_HASH(2064647655u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::GetDLLVersionInformation, ThisTypeBaseTypesInfo);

					void GetDLLVersionInformation::Run()
					{
						try
						{
							//ExStart:GetDLLVersionInformation
							// The path to the documents directory.              
							System::Console::WriteLine(System::String(u"Assembly version: ") + BuildVersionInfo::AssemblyVersion);
							System::Console::WriteLine(System::String(u"File Version: ") + BuildVersionInfo::FileVersion);
							System::Console::WriteLine(System::String(u"Product: ") + BuildVersionInfo::Product);
							System::Console::WriteLine(System::String(u"Product Major: ") + BuildVersionInfo::ProductMajor);
							System::Console::WriteLine(System::String(u"Product Minor: ") + BuildVersionInfo::ProductMinor);
							System::Console::WriteLine(System::String(u"Release Date: ") + BuildVersionInfo::ReleaseDate);
							//ExEnd:GetDLLVersionInformation
						}
						catch (System::Exception& ex)
						{
							System::Console::WriteLine(ex->get_Message() + u"\nThis example will only work if you apply a valid Aspose License. You can purchase full license or get 30 day temporary license from http://www.aspose.com/purchase/default.aspx.");
						}

					}

				} // namespace ManageBarCodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
