/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "DetectUnreadableBarcode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/details/dispose_guard.h>
#include <system/console.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/RecognitionSettings/QualitySettings.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/DecodeTypes/SingleDecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/DecodeTypes/DecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/BarCodeReader.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::BarCodeRecognition;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageAndOptimizeBarCodeRecognition {

					RTTI_INFO_IMPL_HASH(3974118459u, ::Aspose::BarCode::Examples::CSharp::ManageAndOptimizeBarCodeRecognition::DetectUnreadableBarcode, ThisTypeBaseTypesInfo);

					void DetectUnreadableBarcode::Run()
					{
						//ExStart:DetectUnreadableBarcode
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageAndOptimizeBarcodeRecognition();

						// Initialize the BarCodeReader object and Set RecognitionMode
						{
							System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(dataDir + u"code39.png", DecodeType::Code39Standard);
							// Clearing resources under 'using' statement
							System::Details::DisposeGuard<1> __dispose_guard_0({ reader });
							// ------------------------------------------

							try
							{
								reader->set_QualitySettings(QualitySettings::get_MaxBarCodes());
								while (reader->Read())
								{
									System::Console::WriteLine(reader->GetCodeTypeName() + u": " + reader->GetCodeText());
									System::Console::WriteLine(System::String(u"IsDeniable: ") + reader->GetIsDeniable());
								}
							}
							catch (...)
							{
								__dispose_guard_0.SetCurrentException(std::current_exception());
							}
						}
						//ExEnd:DetectUnreadableBarcode
					}

				} // namespace ManageAndOptimizeBarCodeRecognition
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
