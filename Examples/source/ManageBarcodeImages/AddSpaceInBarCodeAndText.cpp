/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "AddSpaceInBarCodeAndText.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <BarCode.Generation/GenerationParameters/CodetextParameters.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>
#include <BarCode.Generation/Helpers/Unit.h>
#include <Generation/BarCodeImageFormat.h>
#include <drawing/imaging/image_format.h>

#include "RunExamples.h"

using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageBarCodeImages {

					RTTI_INFO_IMPL_HASH(1139263540u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodeImages::AddSpaceInBarCodeAndText, ThisTypeBaseTypesInfo);

					void AddSpaceInBarCodeAndText::Run()
					{
						//ExStart:AddSpaceInBarCodeAndText
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageBarCodesImages();

						// Instantiate barcode object and set Increase the space between code text and barcode to 1 point
						System::SharedPtr<BarcodeGenerator> generator = [&] { auto tmp_0 = System::MakeObject<BarcodeGenerator>(EncodeTypes::Code93Standard); tmp_0->get_Parameters()->get_Barcode()->get_CodeTextParameters()->get_Space()->set_Millimeters(1.0f); return tmp_0; }();
						generator->Save(dataDir + u"AddSpaceInBarCodeAndText_out.bmp", BarCodeImageFormat::Bmp);
						//ExEnd:AddSpaceInBarCodeAndText
					}

				} // namespace ManageBarCodeImages
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
