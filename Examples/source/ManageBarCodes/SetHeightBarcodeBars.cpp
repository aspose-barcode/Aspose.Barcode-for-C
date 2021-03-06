/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "SetHeightBarcodeBars.h"

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

					RTTI_INFO_IMPL_HASH(2492125852u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::SetHeightBarcodeBars, ThisTypeBaseTypesInfo);

					void SetHeightBarcodeBars::Run()
					{
						//ExStart:SetHeightBarcodeBars
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();

						// Instantiate barcode object and set differnt barcode properties
						System::SharedPtr<BarcodeGenerator> generator = [&] { auto tmp_0 = System::MakeObject<BarcodeGenerator>(EncodeTypes::Code128, u"1234567"); tmp_0->get_Parameters()->get_Barcode()->get_BarHeight()->set_Millimeters(3.0f); return tmp_0; }();

						// Save the image locally and set its image format to Jpeg
						generator->Save(dataDir + u"barcode3_out.jpg", BarCodeImageFormat::Jpeg);

						// Set the bar height to 3 millimeters and Save the image locally and set its image format to Jpeg
						generator->get_Parameters()->get_Barcode()->get_BarHeight()->set_Millimeters(7.0f);
						generator->Save(dataDir + u"barcode7_out.jpg", BarCodeImageFormat::Jpeg);

						// Set the bar height to 3 millimeters and  Save the image to disk
						generator->get_Parameters()->get_Barcode()->get_BarHeight()->set_Millimeters(11.0f);
						generator->Save(dataDir + u"barcode11_out.jpg", BarCodeImageFormat::Jpeg);
						//ExEnd:SetHeightBarcodeBars
					}

				} // namespace ManageBarCodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
