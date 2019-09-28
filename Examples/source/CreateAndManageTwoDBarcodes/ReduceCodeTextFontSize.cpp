/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ReduceCodeTextFontSize.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeImageFormat.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>
#include <BarCode.Generation/GenerationParameters/CodetextParameters.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace CreateAndManageTwoDBarcodes {

					RTTI_INFO_IMPL_HASH(1949665166u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::ReduceCodeTextFontSize, ThisTypeBaseTypesInfo);

					void ReduceCodeTextFontSize::Run()
					{
						System::Console::WriteLine(u"ExStart:ReduceCodeTextFontSize");
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();
						System::String codeText = System::String(u"The quick brown fox jumps over the lazy dog\n") + u"The quick brown fox jumps over the lazy dog\n";

						// Instantiate barcode object, Set CodeText, Symbology and CodeLocation
						System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::DataMatrix, codeText);
						generator->get_Parameters()->get_Barcode()->get_CodeTextParameters()->set_Location(CodeLocation::None);
						generator->Save(dataDir + u"HideBarcodeCodeText_out.png", BarCodeImageFormat::Png);
						System::Console::WriteLine(u"ExEnd:ReduceCodeTextFontSize");					}

				} // namespace CreateAndManageTwoDBarcodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
