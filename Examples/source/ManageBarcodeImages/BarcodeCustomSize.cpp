/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "BarcodeCustomSize.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/Caption.h>
#include <Generation/ITF14BorderType.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>
#include <BarCode.Generation/GenerationParameters/CaptionParameters.h>
#include <BarCode.Generation/Helpers/FontUnit.h>
#include <BarCode.Generation/Helpers/Unit.h>
#include <BarCode.Generation/GenerationParameters/AutoSizeMode.h>
#include <BarCode.Generation/GenerationParameters/TextAlignment.h>
#include <BarCode.Generation/GenerationParameters/CodetextParameters.h>
#include <drawing/string_alignment.h>
#include <Generation/BarCodeImageFormat.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageBarCodeImages {

					RTTI_INFO_IMPL_HASH(548008204u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodeImages::BarcodeCustomSize, ThisTypeBaseTypesInfo);

					void BarcodeCustomSize::Run()
					{
						//ExStart:BarcodeCustomSize
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageBarCodesImages();

						// Instantiate barcode object and set CodeText & Barcode Symbology
						System::SharedPtr<BarcodeGenerator> generator = [&] { auto tmp_0 = System::MakeObject<BarcodeGenerator>(EncodeTypes::Code39Standard, u"1234567890"); tmp_0->get_Parameters()->get_Barcode()->set_AutoSizeMode(AutoSizeMode::Nearest); tmp_0->get_Parameters()->get_Barcode()->get_BarCodeHeight()->set_Millimeters(50); tmp_0->get_Parameters()->get_Barcode()->get_BarCodeWidth()->set_Millimeters(120); return tmp_0; }();
						generator->Save(dataDir + u"barcode-custom-size_out.jpg");
						//ExEnd:BarcodeCustomSize
					}

				} // namespace ManageBarCodeImages
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
