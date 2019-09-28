/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "GetAllPossible1DBarcodesfromImage.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/console.h>
#include <system/array.h>
#include <drawing/point.h>
#include <cstdint>
#include <BarCodeRecognition/Recognition/Region/BarCodeRegion.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/RecognitionSettings/QualitySettings.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/DecodeTypes/SingleDecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/DecodeTypes/MultyDecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/DecodeTypes/DecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/DecodeTypes/BaseDecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/BarCodeReader.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::BarCodeRecognition;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageAndOptimizeBarCodeRecognition {

					RTTI_INFO_IMPL_HASH(2919516118u, ::Aspose::BarCode::Examples::CSharp::ManageAndOptimizeBarCodeRecognition::GetAllPossible1DBarcodesfromImage, ThisTypeBaseTypesInfo);

					void GetAllPossible1DBarcodesfromImage::Run()
					{
						try
						{
							//ExStart:GetAllPossible1DBarcodesfromImage
							// The path to the documents directory.
							System::String dataDir = RunExamples::GetDataDir_ManageAndOptimizeBarcodeRecognition();

							// Initialize the BarCodeReader object and Call read method
							System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(dataDir + u"Barcode2.png", DecodeType::AllSupportedTypes);

							// To get all possible barcodes
							reader->set_QualitySettings(QualitySettings::get_MaxBarCodes());

							while (reader->Read())
							{
								// Display code text, symbology, detected angle of the barcode
								System::Console::WriteLine(System::String(u"Code Text: ") + reader->GetCodeText() + u" Symbology: " + reader->GetCodeType() + u" Angle: " + reader->GetAngle());

								// Display x and y coordinates of barcode detected
								System::ArrayPtr<System::Drawing::Point> point = reader->GetRegion()->get_Points();
								System::Console::WriteLine(System::String(u"Top left coordinates: X = ") + point[0].get_X() + u", Y = " + point[0].get_Y());
								System::Console::WriteLine(System::String(u"Bottom left coordinates: X = ") + point[1].get_X() + u", Y = " + point[1].get_Y());
								System::Console::WriteLine(System::String(u"Bottom right coordinates: X = ") + point[2].get_X() + u", Y = " + point[2].get_Y());
								System::Console::WriteLine(System::String(u"Top right coordinates: X = ") + point[3].get_X() + u", Y = " + point[3].get_Y());
							}

							//ExEnd:GetAllPossible1DBarcodesfromImage
						}
						catch (System::Exception& ex)
						{
							System::Console::WriteLine(ex->get_Message() + u"\nThis example will only work if you apply a valid Aspose BarCode License. You can purchase full license or get 30 day temporary license from http://wwww.aspose.com/purchase/default.aspx.");
						}

					}

				} // namespace ManageAndOptimizeBarCodeRecognition
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
