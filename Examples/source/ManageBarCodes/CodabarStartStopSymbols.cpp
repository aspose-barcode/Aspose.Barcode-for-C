/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "CodabarStartStopSymbols.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/CodaBarSymbol.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/Caption.h>
#include <BarCode.Generation/GenerationParameters/Padding.h>
#include <BarCode.Generation/GenerationParameters/CodetextParameters.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>
#include <BarCode.Generation/GenerationParameters/CaptionParameters.h>
#include <BarCode.Generation/Helpers/FontUnit.h>
#include <BarCode.Generation/Helpers/Unit.h>
#include <BarCode.Generation/GenerationParameters/TextAlignment.h>
#include <drawing/string_alignment.h>
#include <Generation/BarCodeImageFormat.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageBarCodes {

					RTTI_INFO_IMPL_HASH(1964048028u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::CodabarStartStopSymbols, ThisTypeBaseTypesInfo);

					void CodabarStartStopSymbols::Run()
					{
						//ExStart:CodabarStartStopSymbols
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();

						// Create instance of BarcodeGenerator, specify codetext and symbology in the constructor
						System::SharedPtr<BarcodeGenerator> generator = [&] { auto tmp_0 = System::MakeObject<BarcodeGenerator>(EncodeTypes::Codabar, u"11112222333344"); tmp_0->get_Parameters()->get_Barcode()->get_Codabar()->set_CodabarStartSymbol(Aspose::BarCode::CodabarSymbol::A); tmp_0->get_Parameters()->get_Barcode()->get_Codabar()->set_CodabarStopSymbol(Aspose::BarCode::CodabarSymbol::D); return tmp_0; }();
						generator->Save(dataDir + u"Coabar-start-stop-symbols_out.png");
						System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir);
						//ExEnd:CodabarStartStopSymbols
					}

				} // namespace ManageBarCodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
