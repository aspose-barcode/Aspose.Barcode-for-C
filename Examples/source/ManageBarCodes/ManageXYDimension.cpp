/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ManageXYDimension.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
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

				namespace ManageBarCodes {

					RTTI_INFO_IMPL_HASH(1172982299u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::ManageXYDimension, ThisTypeBaseTypesInfo);

					void ManageXYDimension::Run()
					{
						//ExStart:ManageXYDimension
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
						System::String dstCode128 = dataDir + u"code128-XDimensionChanged_out.jpg";

						// Instantiate barcode object and set CodeText & Barcode Symbology
						System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::Code128, u"1234567");

						// Set the X-Dimension for the bars of the barcode
						generator->get_Parameters()->get_Barcode()->get_XDimension()->set_Millimeters(0.5f);

						// Save the image to your system and set its image format to Jpeg
						generator->Save(dstCode128, BarCodeImageFormat::Jpeg);

						// Instantiate barcode object and set differnt barcode properties
						System::SharedPtr<BarcodeGenerator> generator1 = [&] { auto tmp_0 = System::MakeObject<BarcodeGenerator>(EncodeTypes::Pdf417, u"1234567"); tmp_0->get_Parameters()->get_Barcode()->get_BarCodeHeight()->set_Millimeters(4); return tmp_0; }();

						// Save the image to your system and set its image format to Jpeg
						generator1->Save(dataDir + u"pdf417-YDimensionChanged_out.jpg", BarCodeImageFormat::Jpeg);
						//ExEnd:ManageXYDimension
					}

				} // namespace ManageBarCodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
