/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "BarcodeWithSegments.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/EncodeTypes/BaseEncodeType.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <cstdint>


using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageBarCodes {

					RTTI_INFO_IMPL_HASH(1941942497u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::BarcodeWithSegments, ThisTypeBaseTypesInfo);

					void BarcodeWithSegments::Run()
					{
						//ExStart:ChecksumSupplementData

						//Instantiate BarcodeGenerator object
						System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::DatabarExpandedStacked);

						//Set the Code text for the barcode
						generator->set_CodeText(u"(01)98898765432106(3202)012345(15)991231");

						//Save the image
						generator->Save(u"6segmets.png");

						//ExEnd:ChecksumSupplementData
					}

				} // namespace ManageBarCodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
