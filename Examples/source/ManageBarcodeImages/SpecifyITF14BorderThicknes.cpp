/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "SpecifyITF14BorderThicknes.h"

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
#include <BarCode.Generation/GenerationParameters/TextAlignment.h>
#include <BarCode.Generation/GenerationParameters/CodetextParameters.h>
#include <drawing/string_alignment.h>
#include <Generation/BarCodeImageFormat.h>
#include <drawing/font.h>
#include <drawing/color.h>


#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageBarCodeImages {

					RTTI_INFO_IMPL_HASH(3046853486u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodeImages::SpecifyITF14BorderThicknes, ThisTypeBaseTypesInfo);

					void SpecifyITF14BorderThicknes::Run()
					{
						//ExEnd:SpecifyITF14BorderThicknes
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageBarCodesImages();

						// Instantiate barcode object
						System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::ITF14, u"00850006000227"); 
						
						// Set ITF Barcode Border Type
						generator->get_Parameters()->get_Barcode()->get_ITF()->set_ItfBorderType(Aspose::BarCode::ITF14BorderType::BarOut);

						// Set ITF Barcode Border Thickness
						generator->get_Parameters()->get_Barcode()->get_ITF()->get_ItfBorderThickness()->set_Point(1);

						// Set Font
						generator->get_Parameters()->get_Barcode()->get_CodeTextParameters()->set_Alignment(TextAlignment::Center);
						generator->get_Parameters()->get_Barcode()->get_CodeTextParameters()->set_Location(CodeLocation::Above);
						generator->get_Parameters()->get_Barcode()->get_CodeTextParameters()->set_Color(System::Drawing::Color::get_Red());
						

						generator->get_Parameters()->get_Barcode()->get_CodeTextParameters()->get_Font()->set_FamilyName(u"OCR B Std");
						generator->get_Parameters()->get_Barcode()->get_CodeTextParameters()->get_Font()->get_Size()->set_Point(8);

						// Set xDimension
						generator->get_Parameters()->get_Barcode()->get_XDimension()->set_Millimeters(0.495f);

						// Set Bars Height
						generator->get_Parameters()->get_Barcode()->get_BarCodeHeight()->set_Millimeters(12.7f);

						// Specify space between characters
						generator->get_Parameters()->get_Barcode()->get_CodeTextParameters()->get_Space()->set_Millimeters(1.0f);

						// Define resolution
						generator->get_Parameters()->set_Resolution(1200.0f);

						generator->Save(dataDir + u"ITF14_Border_TypeBar_Out.png", Aspose::BarCode::BarCodeImageFormat::Png);
						System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir);
						//ExEnd:SpecifyITF14BorderThicknes
					}

				} // namespace ManageBarCodeImages
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
