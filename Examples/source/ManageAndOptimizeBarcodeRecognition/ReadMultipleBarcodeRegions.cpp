/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ReadMultipleBarcodeRegions.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/details/dispose_guard.h>
#include <system/console.h>
#include <system/array.h>
#include <drawing/rectangle.h>
#include <drawing/bitmap.h>
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

					RTTI_INFO_IMPL_HASH(255003326u, ::Aspose::BarCode::Examples::CSharp::ManageAndOptimizeBarCodeRecognition::ReadMultipleBarcodeRegions, ThisTypeBaseTypesInfo);

					void ReadMultipleBarcodeRegions::Run()
					{
						System::Console::WriteLine(u"ExStart:ReadMultipleBarcodeRegions");
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageAndOptimizeBarcodeRecognition();

						// Initialize the Bitmap object            
						System::SharedPtr<System::Drawing::Bitmap> bitmap = System::MakeObject<System::Drawing::Bitmap>(dataDir + u"Region.png");
						System::ArrayPtr<System::Drawing::Rectangle> areas = System::MakeArray<System::Drawing::Rectangle>(3);
						areas[0] = System::Drawing::Rectangle(50, 50, 300, 300);
						areas[1] = System::Drawing::Rectangle(400, 40, 350, 350);
						areas[2] = System::Drawing::Rectangle(40, 500, 700, 150);

						// Initialize the BarCodeReader object and load bitmap object       
						{
							System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(bitmap, areas, DecodeType::Code39Standard);
							// Clearing resources under 'using' statement
							System::Details::DisposeGuard<1> __dispose_guard_0({ reader });
							// ------------------------------------------

							try
							{
								while (reader->Read())
								{
									System::Console::WriteLine(reader->GetCodeTypeName() + u": " + reader->GetCodeText());
								}
							}
							catch (...)
							{
								__dispose_guard_0.SetCurrentException(std::current_exception());
							}
						}
						System::Console::WriteLine(u"ExEnd:ReadMultipleBarcodeRegions\r\n");
					}

				} // namespace ManageAndOptimizeBarCodeRecognition
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
