/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "GetBarCodeRecognitionQualityInPercent.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/console.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/DecodeTypes/SingleDecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/DecodeTypes/MultyDecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/DecodeTypes/DecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/BarCodeReader.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::BarCodeRecognition;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageAndOptimizeBarCodeRecognition {

					RTTI_INFO_IMPL_HASH(3901663125u, ::Aspose::BarCode::Examples::CSharp::ManageAndOptimizeBarCodeRecognition::GetBarCodeRecognitionQualityInPercent, ThisTypeBaseTypesInfo);

					void GetBarCodeRecognitionQualityInPercent::Run()
					{
						try
						{
							System::Console::WriteLine(u"ExStart:GetBarCodeRegionInformationfromImage");
							// The path to the documents directory.
							System::String dataDir = RunExamples::GetDataDir_ManageAndOptimizeBarcodeRecognition();

							// Initialize the BarCodeReader object and Call read method
							System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(dataDir + u"Barcode2.png", DecodeType::AllSupportedTypes);
							while (reader->Read())
							{
								System::Console::WriteLine(reader->GetCodeText() + u" Type: " + reader->GetCodeType());
								float percent = reader->GetRecognitionQuality();
							}
							reader->Close();
						}
						catch (System::Exception& ex)
						{
							System::Console::WriteLine(ex->get_Message() + u"\nThis example will only work if you apply a valid Aspose BarCode License. You can purchase full license or get 30 day temporary license from http://wwww.aspose.com/purchase/default.aspx.");
						}

                        System::Console::WriteLine(u"ExEnd:GetBarCodeRegionInformationfromImage\r\n");
					}

				} // namespace ManageAndOptimizeBarCodeRecognition
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
