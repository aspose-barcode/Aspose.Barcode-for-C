/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ColorizeAnyPartoftheBarcodeImage.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/Caption.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>
#include <BarCode.Generation/GenerationParameters/CaptionParameters.h>
#include <BarCode.Generation/GenerationParameters/CodetextParameters.h>
#include <BarCode.Generation/Helpers/FontUnit.h>
#include <BarCode.Generation/Helpers/Unit.h>
#include <BarCode.Generation/GenerationParameters/TextAlignment.h>
#include <drawing/string_alignment.h>
#include <Generation/BarCodeImageFormat.h>
#include <BarCode.Generation/GenerationParameters/BorderParameters.h>
#include <drawing/font.h>
#include <drawing/color.h>


#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageBarCodeImages {

					RTTI_INFO_IMPL_HASH(4266438029u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodeImages::ColorizeAnyPartoftheBarcodeImage, ThisTypeBaseTypesInfo);

					void ColorizeAnyPartoftheBarcodeImage::Run()
					{
						//ExStart:ColorizeAnyPartoftheBarcodeImage
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageBarCodesImages();
						System::String dst = dataDir + u"colorize-barcode_out.jpg";

						// Instantiate barcode object and differnt properties
						System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::Code128, u"1234567"); 
						
						generator->get_Parameters()->set_BackColor(System::Drawing::Color::get_Yellow());
						generator->get_Parameters()->get_Barcode()->set_ForeColor(System::Drawing::Color::get_Blue());
						generator->get_Parameters()->get_Border()->set_Color(System::Drawing::Color::get_Red());
						generator->get_Parameters()->get_Barcode()->get_CodeTextParameters()->set_Color(System::Drawing::Color::get_Red());

						generator->Save(dst, BarCodeImageFormat::Jpeg);
						System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir);
						//ExEnd:ColorizeAnyPartoftheBarcodeImage
					}

				} // namespace ManageBarCodeImages
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
