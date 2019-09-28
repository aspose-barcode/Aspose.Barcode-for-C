/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "DisplayChecksumCharacter.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeImageFormat.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageBarCodes {

					RTTI_INFO_IMPL_HASH(701737449u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::DisplayChecksumCharacter, ThisTypeBaseTypesInfo);

					void DisplayChecksumCharacter::Run()
					{
						//ExStart:DisplayChecksumCharacter
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();

						// Instantiate barcode object and set Always show checksum on image
						System::SharedPtr<BarcodeGenerator> generator = [&] { auto tmp_0 = System::MakeObject<BarcodeGenerator>(EncodeTypes::Code39Standard, u"0123456789"); tmp_0->get_Parameters()->get_Barcode()->set_ChecksumAlwaysShow(true); return tmp_0; }();
						generator->Save(dataDir + u"DisplayChecksumCharacter_out.png");
						System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir);
						//ExEnd:DisplayChecksumCharacter
					}

				} // namespace ManageBarCodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
