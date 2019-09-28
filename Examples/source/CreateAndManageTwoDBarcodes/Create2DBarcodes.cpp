/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "Create2DBarcodes.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeImageFormat.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>
#include <BarCode.Generation/Helpers/Unit.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace CreateAndManageTwoDBarcodes {

					RTTI_INFO_IMPL_HASH(973485823u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::Create2DBarcodes, ThisTypeBaseTypesInfo);

					void Create2DBarcodes::Run()
					{
						//ExStart:Create2DBarcodes
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();

						// Instantiate barcode object and set CodeText & Barcode Symbology
						System::SharedPtr<Aspose::BarCode::Generation::BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::Pdf417, u"ABCDEF123456");

						generator->get_Parameters()->get_Barcode()->get_XDimension()->set_Millimeters(2.0f);
						generator->get_Parameters()->get_Barcode()->get_XDimension()->set_Millimeters(1.0f);

						// Save the Barcode image in JPEG format
						generator->Save(dataDir + u"2d-barcode_out.jpg", Aspose::BarCode::BarCodeImageFormat::Jpeg);

						// Save the Barcode image in TIFF format
						generator->Save(dataDir + u"2d-barcode_out.tiff", Aspose::BarCode::BarCodeImageFormat::Tiff);

						// Save the Barcode image in PNG format
						generator->Save(dataDir + u"2d-barcode_out.png", Aspose::BarCode::BarCodeImageFormat::Png);

						// Save the Barcode image in BMP format
						generator->Save(dataDir + u"2d-barcode_out.bmp", Aspose::BarCode::BarCodeImageFormat::Bmp);

						// Save the Barcode image in GIF format
						generator->Save(dataDir + u"2d-barcode_out.gif", Aspose::BarCode::BarCodeImageFormat::Gif);

						// Save the Barcode image in TiffInCmyk format
						generator->Save(dataDir + u"2d-barcode_out_cmyk.tiff", Aspose::BarCode::BarCodeImageFormat::TiffInCmyk);

						// Save the Barcode image in SVG format
						generator->Save(dataDir + u"2d-barcode_out.svg", Aspose::BarCode::BarCodeImageFormat::Svg);

						System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir);
						//ExEnd:Create2DBarcodes
					}

				} // namespace CreateAndManageTwoDBarcodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
