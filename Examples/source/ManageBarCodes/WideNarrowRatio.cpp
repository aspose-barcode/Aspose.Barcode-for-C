/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "WideNarrowRatio.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <BarCode.Generation/BarcodeGenerator.h>
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

					RTTI_INFO_IMPL_HASH(2293996824u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::WideNarrowRatio, ThisTypeBaseTypesInfo);

					void WideNarrowRatio::Run()
					{
						//ExStart:WideNarrowRatio
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();

						// Instantiate linear barcode object
						System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::Code39Standard, u"1234567");

						// Set the wide to narrow ratio for the barcode
						generator->get_Parameters()->get_Barcode()->set_WideNarrowRatio(3.0f);

						// Save the image to your system and set its image format to Jpeg
						generator->Save(dataDir + u"barcode_ratio_3_out.jpg", BarCodeImageFormat::Jpeg);

						// Set the wide to narrow ratio for the barcode
						generator->get_Parameters()->get_Barcode()->set_WideNarrowRatio(5.0f);

						// Save the image to your system and set its image format to Jpeg
						generator->Save(dataDir + u"barcode_ratio_5_out.jpg", BarCodeImageFormat::Jpeg);

						// Set the wide to narrow ratio for the barcode
						generator->get_Parameters()->get_Barcode()->set_WideNarrowRatio(7.0f);

						// Save the image to your system and set its image format to Jpeg
						generator->Save(dataDir + u"barcode_ratio_7_out.jpg", BarCodeImageFormat::Jpeg);

						// Set the wide to narrow ratio for the barcode
						generator->get_Parameters()->get_Barcode()->set_WideNarrowRatio(9.0f);

						// Save the image to your system and set its image format to Jpeg
						generator->Save(dataDir + u"code39-wide-narrow-ratio_out.jpg", BarCodeImageFormat::Jpeg);
						//ExEnd:WideNarrowRatio
					}

				} // namespace ManageBarCodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
