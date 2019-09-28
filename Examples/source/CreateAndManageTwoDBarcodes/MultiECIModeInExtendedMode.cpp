/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "MultiECIModeInExtendedMode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/QRErrorLevel.h>
#include <Generation/QREncodeMode.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/ECIEncodings.h>
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

					RTTI_INFO_IMPL_HASH(1853325012u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::MultiECIModeInExtendedMode, ThisTypeBaseTypesInfo);

					void MultiECIModeInExtendedMode::Run()
					{
						//ExStart:MultiECIModeInExtendedMode
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();

						// Create codetext
						System::SharedPtr<QrExtCodetextBuilder> lTextBuilder = System::MakeObject<QrExtCodetextBuilder>();
						lTextBuilder->AddECICodetext(Aspose::BarCode::ECIEncodings::Win1251, u"Will");
						lTextBuilder->AddECICodetext(Aspose::BarCode::ECIEncodings::UTF8, u"Right");
						lTextBuilder->AddECICodetext(Aspose::BarCode::ECIEncodings::UTF16BE, u"Power");
						lTextBuilder->AddPlainCodetext(u"t\\e\\\\st");

						// Generate codetext
						System::String lCodetext = lTextBuilder->GetExtendedCodetext();

						// Initialize a BarcodeGenerator class object, Set CodeText, Symbology, Encoding mode, correction level and display text
						System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::QR, lCodetext);
						generator->get_Parameters()->get_Barcode()->get_QR()->set_QrEncodeMode(Aspose::BarCode::QREncodeMode::ExtendedCodetext);
						generator->get_Parameters()->get_Barcode()->get_QR()->set_QrErrorLevel(Aspose::BarCode::QRErrorLevel::LevelL);
						generator->set_CodeText(lCodetext);
						generator->get_Parameters()->get_Barcode()->get_CodeTextParameters()->set_TwoDDisplayText(u"My Text");
						System::SharedPtr<System::Drawing::Bitmap> lBmp = generator->GenerateBarCodeImage();
						lBmp->Save(dataDir + u"MultiECIModeInExtendedMode_out.bmp", System::Drawing::Imaging::ImageFormat::get_Bmp());

						System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir + u"MultiECIModeInExtendedMode_out.bmp");
						//ExEnd:MultiECIModeInExtendedMode
					}

				} // namespace CreateAndManageTwoDBarcodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
