/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "FNC1SecondPositionInExtendedMode.h"

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
#include <drawing/imaging/image_format.h>
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

					RTTI_INFO_IMPL_HASH(2709183730u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::FNC1SecondPositionInExtendedMode, ThisTypeBaseTypesInfo);

					void FNC1SecondPositionInExtendedMode::Run()
					{
						System::Console::WriteLine(u"ExStart:FNC1SecondPositionInExtendedMode");
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();

						// Create codetext
						System::SharedPtr<QrExtCodetextBuilder> lTextBuilder = System::MakeObject<QrExtCodetextBuilder>();
						lTextBuilder->AddFNC1SecondPosition(u"12");
						lTextBuilder->AddPlainCodetext(u"TRUE3456");

						// Generate codetext
						System::String lCodetext = lTextBuilder->GetExtendedCodetext();

						// Instantiate barcode object and Set its CodeText, encoding mode, error correction level,  display text and Symbology
						System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::QR, lCodetext);
						generator->get_Parameters()->get_Barcode()->get_QR()->set_QrEncodeMode(Aspose::BarCode::QREncodeMode::ExtendedCodetext);
						generator->get_Parameters()->get_Barcode()->get_QR()->set_QrErrorLevel(Aspose::BarCode::QRErrorLevel::LevelL);
						generator->get_Parameters()->get_Barcode()->get_CodeTextParameters()->set_TwoDDisplayText(u"My Text");

						// Get barcode image Bitmap and Save QR code
						System::SharedPtr<System::Drawing::Bitmap> lBmp = generator->GenerateBarCodeImage();
						lBmp->Save(dataDir + u"FNC1SecondPositionInExtendedMode_out.bmp", System::Drawing::Imaging::ImageFormat::get_Bmp());
						System::Console::WriteLine(u"ExEnd:FNC1SecondPositionInExtendedMode");					}

				} // namespace CreateAndManageTwoDBarcodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
