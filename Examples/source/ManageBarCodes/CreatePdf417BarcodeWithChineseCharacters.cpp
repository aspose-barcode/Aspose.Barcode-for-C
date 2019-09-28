/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "CreatePdf417BarcodeWithChineseCharacters.h"

#include <system/text/encoding.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/console.h>
#include <system/array.h>
#include <system/environment.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeImageFormat.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>
#include <BarCode.Generation/GenerationParameters/CodetextParameters.h>

#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageBarCodes {

					RTTI_INFO_IMPL_HASH(3413856858u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::CreatePdf417BarcodeWithChineseCharacters, ThisTypeBaseTypesInfo);

					void CreatePdf417BarcodeWithChineseCharacters::Run()
					{
						//ExStart:CreatePdf417BarcodeWithChineseCharacters
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
						const System::String codetext = u"被洪水困住的";

						// Generate the barcode
						System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::Pdf417, codetext);

						// Encode the code text and Set the display text 
						generator->get_Parameters()->get_Barcode()->get_Pdf417()->set_CodeTextEncoding(System::Text::Encoding::get_Unicode());
						generator->get_Parameters()->get_Barcode()->get_CodeTextParameters()->set_TwoDDisplayText(codetext);

						generator->Save(dataDir + u"CreatePdf417BarcodeWithChineseCharacters_out.png");
						System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir);
						//ExEnd:CreatePdf417BarcodeWithChineseCharacters
					}

				} // namespace ManageBarCodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
