/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "BarcodeImageBorders.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/MarginsF.h>
#include <Generation/BorderDashStyle.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/Caption.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>
#include <BarCode.Generation/GenerationParameters/CaptionParameters.h>
#include <BarCode.Generation/GenerationParameters/Padding.h>
#include <BarCode.Generation/GenerationParameters/BorderParameters.h>
#include <BarCode.Generation/Helpers/FontUnit.h>
#include <BarCode.Generation/Helpers/Unit.h>
#include <BarCode.Generation/GenerationParameters/TextAlignment.h>
#include <drawing/string_alignment.h>
#include <Generation/BarCodeImageFormat.h>
#include <drawing/font.h>
#include <drawing/imaging/image_format.h>

#include "RunExamples.h"

using namespace Aspose::BarCode::Generation;
namespace Aspose {
	namespace BarCode {
		namespace Examples {
			namespace CSharp {
				namespace ManageBarCodeImages {

					RTTI_INFO_IMPL_HASH(1900021222u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodeImages::BarcodeImageBorders, ThisTypeBaseTypesInfo);

					void BarcodeImageBorders::Run()
					{
						//ExStart:BarcodeImageBorders
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageBarCodesImages();

						// Instantiate barcode object and set different properties
						System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::Code93Standard);

						generator->get_Parameters()->get_Border()->set_DashStyle(Aspose::BarCode::BorderDashStyle::Solid);
						generator->get_Parameters()->get_Barcode()->get_Padding()->get_Top()->set_Millimeters(2.f);
						generator->get_Parameters()->get_Barcode()->get_Padding()->get_Left()->set_Millimeters(2.f);
						generator->get_Parameters()->get_Barcode()->get_Padding()->get_Right()->set_Millimeters(2.f);
						generator->get_Parameters()->get_Barcode()->get_Padding()->get_Bottom()->set_Millimeters(2.f);
						generator->get_Parameters()->get_Border()->get_Width()->set_Millimeters(0.5f);
						generator->get_Parameters()->get_Border()->set_Visible(true);

						generator->Save(dataDir + u"barcodeImageborders_out.jpeg", BarCodeImageFormat::Jpeg);
						System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir);
						//ExEnd:BarcodeImageBorders
					}

				} // namespace ManageBarCodeImages
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
