/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "GetMinimumBarCodeSize.h"

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/details/dispose_guard.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>
#include <BarCode.Generation/GenerationParameters/CaptionParameters.h>
#include <BarCode.Generation/Helpers/FontUnit.h>
#include <BarCode.Generation/Helpers/Unit.h>
#include <BarCode.Generation/GenerationParameters/AutoSizeMode.h>
#include <BarCode.Generation/GenerationParameters/TextAlignment.h>
#include <Generation/BarCodeImageFormat.h>

#include "RunExamples.h"

using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageBarCodes {

					RTTI_INFO_IMPL_HASH(1726601380u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::GetMinimumBarCodeSize, ThisTypeBaseTypesInfo);

					void GetMinimumBarCodeSize::Run()
					{
						//ExStart:ChecksumSupplementData
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();

						// Create an instance of BarcodeGenerator class
						System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::Code128, u"1234567890");

						generator->get_Parameters()->get_Barcode()->set_AutoSizeMode(AutoSizeMode::None);

						// Set image height & width to minimum
						generator->get_Parameters()->get_Barcode()->get_BarCodeWidth()->set_Millimeters(1);
						generator->get_Parameters()->get_Barcode()->get_BarCodeHeight()->set_Millimeters(1);

						// Save the image to your system and set its image format to Jpeg
						generator->Save(dataDir + u"ManageCaption_out.jpg", BarCodeImageFormat::Jpeg);
						System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir);

						//ExEnd:ChecksumSupplementData
					}

				} // namespace ManageBarCodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
