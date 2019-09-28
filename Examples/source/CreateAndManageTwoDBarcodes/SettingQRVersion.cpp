/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "SettingQRVersion.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/QRVersion.h>
#include <Generation/QRErrorLevel.h>
#include <Generation/QREncodeType.h>
#include <Generation/QREncodeMode.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/EncodeTypes/BaseEncodeType.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace CreateAndManageTwoDBarcodes {

					RTTI_INFO_IMPL_HASH(3971072197u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::SettingQRVersion, ThisTypeBaseTypesInfo);

					void SettingQRVersion::Run()
					{
						//ExStart:SettingQRVersion

						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();

						// Instantiate BarcodeGenerator object
						System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::QR);

						// Set the Code text for the barcode
						generator->set_CodeText(u"ABCDEFGHIJKLMNOPQRSTUVWXYZ");

						// Set the symbology type to QR
						generator->get_Parameters()->get_Barcode()->get_QR()->set_QrEncodeType(QREncodeType::ForceQR);

						// Set the error level
						generator->get_Parameters()->get_Barcode()->get_QR()->set_QrErrorLevel(Aspose::BarCode::QRErrorLevel::LevelQ);

						// Set the QR barcode version number
						generator->get_Parameters()->get_Barcode()->get_QR()->set_QrVersion(Aspose::BarCode::QRVersion::Version10);

						//Save the image
						generator->Save(dataDir + u"qr_version10_errorQ.png");

						System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir + u"qr_version10_errorQ.png");
						//ExEnd:SettingQRVersion
					}

				} // namespace CreateAndManageTwoDBarcodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
