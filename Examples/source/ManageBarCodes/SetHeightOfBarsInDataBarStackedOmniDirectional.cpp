/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "SetHeightOfBarsInDataBarStackedOmniDirectional.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/console.h>
#include <Generation/ResolutionMode.h>
#include <Generation/Resolution.h>
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

					RTTI_INFO_IMPL_HASH(411224691u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::SetHeightOfBarsInDataBarStackedOmniDirectional, ThisTypeBaseTypesInfo);

					void SetHeightOfBarsInDataBarStackedOmniDirectional::Run()
					{
						//ExStart:SetHeightOfBarsInDataBarStackedOmniDirectional
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();

						// Instantiate barcode object and Set the SymbologyType and Height and Resolution for barcode
						System::SharedPtr<BarcodeGenerator> generator = [&] { auto tmp_0 = System::MakeObject<BarcodeGenerator>(EncodeTypes::DatabarStackedOmniDirectional, u"(01)90013670000396(3200)15(11)150819"); tmp_0->get_Parameters()->get_Barcode()->get_XDimension()->set_Millimeters(0.330f); tmp_0->get_Parameters()->get_Barcode()->get_BarCodeHeight()->set_Millimeters(27.77f);tmp_0->get_Parameters()->set_Resolution(1200.0f); return tmp_0; }();

						// Save the image to your system and set its image format to Jpeg
						generator->Save(dataDir + u"Barheight_out.png", Aspose::BarCode::BarCodeImageFormat::Png);
						//ExEnd:SetHeightOfBarsInDataBarStackedOmniDirectional
					}

				} // namespace ManageBarCodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
