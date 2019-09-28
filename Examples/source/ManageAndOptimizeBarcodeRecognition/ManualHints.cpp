/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ManualHints.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/enum_helpers.h>
#include <system/diagnostics/stopwatch.h>
#include <system/details/dispose_guard.h>
#include <system/console.h>
#include <cstdint>
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

					RTTI_INFO_IMPL_HASH(1243632109u, ::Aspose::BarCode::Examples::CSharp::ManageAndOptimizeBarCodeRecognition::ManualHints, ThisTypeBaseTypesInfo);

					void ManualHints::Run()
					{
						try
						{
							//ExStart:ManualHints
							System::SharedPtr<System::Diagnostics::Stopwatch> watch = System::MakeObject<System::Diagnostics::Stopwatch>();
							// The path to the documents directory.
							System::String dataDir = RunExamples::GetDataDir_ManageAndOptimizeBarcodeRecognition();
							{
								System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(dataDir + u"Code128.png", DecodeType::Code128);
								// Clearing resources under 'using' statement
								System::Details::DisposeGuard<1> __dispose_guard_0({ reader });
								// ------------------------------------------

								try
								{
									// Start Stopwatch and Set AllowMedianSmoothing to ture and windows size
									watch->Start();
									reader->get_QualitySettings()->set_AllowMedianSmoothing(true);
									reader->get_QualitySettings()->set_MedianSmoothingWindowSize(5);
									
									while (reader->Read())
									{
										System::Console::WriteLine(reader->GetCodeTypeName() + u": " + reader->GetCodeText());
									}

									// End Stopwatch
									watch->Stop();
									System::Console::WriteLine(System::String(u"Time: ") + watch->get_ElapsedMilliseconds() + u"ms.");
								}
								catch (...)
								{
									__dispose_guard_0.SetCurrentException(std::current_exception());
								}
							}
						}
						catch (System::Exception& ex)
						{
							System::Console::WriteLine(ex->get_Message() + u"\nThis example will only work if you apply a valid Aspose BarCode License. You can purchase full license or get 30 day temporary license from http://wwww.aspose.com/purchase/default.aspx.");
						}
                        //ExEnd:ManualHints
					}

				} // namespace ManageAndOptimizeBarCodeRecognition
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
