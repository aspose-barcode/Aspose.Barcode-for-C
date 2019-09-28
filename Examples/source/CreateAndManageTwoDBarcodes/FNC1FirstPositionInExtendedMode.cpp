/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "FNC1FirstPositionInExtendedMode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/console.h>
#include <Generation/QRErrorLevel.h>
#include <Generation/QREncodeMode.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <Encoders/QREncoder/QrExtCodetextBuilder.h>
#include <Generation/BarCodeImageFormat.h>
#include <drawing/bitmap.h>
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

					RTTI_INFO_IMPL_HASH(639878342u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::FNC1FirstPositionInExtendedMode, ThisTypeBaseTypesInfo);

					void FNC1FirstPositionInExtendedMode::Run()
					{
						System::Console::WriteLine(u"ExStart:FNC1FirstPositionInExtendedMode");
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();

						// Create codetext
						System::SharedPtr<QrExtCodetextBuilder> lTextBuilder = System::MakeObject<QrExtCodetextBuilder>();
						lTextBuilder->AddFNC1FirstPosition();
						lTextBuilder->AddPlainCodetext(u"000%89%%0");
						lTextBuilder->AddFNC1GroupSeparator();
						lTextBuilder->AddPlainCodetext(u"12345<FNC1>");

						// Generate codetext
						System::String lCodetext = lTextBuilder->GetExtendedCodetext();

						// Instantiate barcode object and Set Codetext & SymbologyType
						System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::QR, u"1234567890");

						// Set encoding mode, error correction level and display text
						generator->get_Parameters()->get_Barcode()->get_QR()->set_QrEncodeMode(Aspose::BarCode::QREncodeMode::ExtendedCodetext);
						generator->get_Parameters()->get_Barcode()->get_QR()->set_QrErrorLevel(Aspose::BarCode::QRErrorLevel::LevelL);
						generator->get_Parameters()->get_Barcode()->get_CodeTextParameters()->set_TwoDDisplayText(u"My Text");

						// Get barcode image Bitmap and Save QR code
						System::SharedPtr<System::Drawing::Bitmap> lBmp = generator->GenerateBarCodeImage();
						lBmp->Save(dataDir + u"FNC1FirstPositionInExtendedMode_out.bmp", System::Drawing::Imaging::ImageFormat::get_Bmp());
						System::Console::WriteLine(u"ExEnd:FNC1FirstPositionInExtendedMode");					}

				} // namespace CreateAndManageTwoDBarcodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
