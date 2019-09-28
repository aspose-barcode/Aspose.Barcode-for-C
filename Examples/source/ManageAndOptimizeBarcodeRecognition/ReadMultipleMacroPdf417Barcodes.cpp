/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ReadMultipleMacroPdf417Barcodes.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/details/dispose_guard.h>
#include <system/console.h>
#include <system/array.h>
#include <cstdint>
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

					RTTI_INFO_IMPL_HASH(631373512u, ::Aspose::BarCode::Examples::CSharp::ManageAndOptimizeBarCodeRecognition::ReadMultipleMacroPdf417Barcodes, ThisTypeBaseTypesInfo);

					void ReadMultipleMacroPdf417Barcodes::Run()
					{
						//ExStart:ReadMultipleMacroPdf417Barcodes
						try
						{
							// The path to the documents directory.
							System::String dataDir = RunExamples::GetDataDir_ManageAndOptimizeBarcodeRecognition();

							// Create array for storing multiple bar codes file names
							System::ArrayPtr<System::String> files = System::MakeArray<System::String>({ u"Barcodefrom.png", u"Barcode2.png" });

							// Iiterate through the bar code image files
							for (int32_t i = 0; i < files->get_Length(); ++i)
							{
								// Create instance of BarCodeReader class and set symbology
								{
									System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(dataDir + files[i], DecodeType::MacroPdf417);
									// Clearing resources under 'using' statement
									System::Details::DisposeGuard<1> __dispose_guard_0({ reader });
									// ------------------------------------------

									try
									{
										if (reader->Read())
										{
											// Get code text, file id, segment id and segment count
											System::Console::WriteLine(System::String(u"File Name: ") + files[i] + u" Code Text: " + reader->GetCodeText());
											System::Console::WriteLine(System::String(u"FileID: ") + reader->GetMacroPdf417FileID());
											System::Console::WriteLine(System::String(u"SegmentID: ") + reader->GetMacroPdf417SegmentID());
											System::Console::WriteLine(System::String(u"Segment Count: ") + reader->GetMacroPdf417SegmentsCount());
										}
										System::Console::WriteLine();
									}
									catch (...)
									{
										__dispose_guard_0.SetCurrentException(std::current_exception());
									}
								}
							}
						}
						catch (System::Exception& ex)
						{
							System::Console::WriteLine(ex->get_Message() + u"\nThis example will only work if you apply a valid Aspose BarCode License. You can purchase full license or get 30 day temporary license from http://wwww.aspose.com/purchase/default.aspx.");
						}

						//ExEnd:ReadMultipleMacroPdf417Barcodes
					}

				} // namespace ManageAndOptimizeBarCodeRecognition
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
