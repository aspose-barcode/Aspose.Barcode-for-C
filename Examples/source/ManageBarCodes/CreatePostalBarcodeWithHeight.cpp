/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "CreatePostalBarcodeWithHeight.h"

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/details/dispose_guard.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/Caption.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>
#include <BarCode.Generation/GenerationParameters/CaptionParameters.h>
#include <BarCode.Generation/Helpers/FontUnit.h>
#include <BarCode.Generation/Helpers/Unit.h>
#include <BarCode.Generation/GenerationParameters/TextAlignment.h>
#include <drawing/string_alignment.h>
#include <Generation/BarCodeImageFormat.h>
#include <drawing/font.h>
#include <drawing/color.h>


using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageBarCodes {

					RTTI_INFO_IMPL_HASH(4174851937u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::CreatePostalBarcodeWithHeight, ThisTypeBaseTypesInfo);

					void CreatePostalBarcodeWithHeight::Run()
					{
						//ExStart:ChecksumSupplementData

						// Create an instance of BarcodeGenerator class
						// Set barcode text
						// Set encoding type

						//using (Aspose.BarCode->get_Barcode()Generator generator = new Aspose.BarCode->get_Barcode()Generator("12345678", Aspose.BarCode.Generation.EncodeTypes.Postnet))
						{
							System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(Aspose::BarCode::Generation::EncodeTypes::AustraliaPost, u"12345678");
							// Clearing resources under 'using' statement
							System::Details::DisposeGuard<1> __dispose_guard_0({ generator });
							// ------------------------------------------

							try
							{
								// Set barcode Dimension and height
								generator->get_Parameters()->get_Barcode()->get_XDimension()->set_Pixels(1.0f);
								generator->get_Parameters()->get_Barcode()->get_BarHeight()->set_Millimeters(40);

								// Save the barcode image
								generator->Save(u"postnet.png");
							}
							catch (...)
							{
								__dispose_guard_0.SetCurrentException(std::current_exception());
							}
						}

						//ExEnd:ChecksumSupplementData
					}

				} // namespace ManageBarCodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
