/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ReadBarcodeSpecificRegionOfImage.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/console.h>
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

					RTTI_INFO_IMPL_HASH(3641211053u, ::Aspose::BarCode::Examples::CSharp::ManageAndOptimizeBarCodeRecognition::ReadBarcodeSpecificRegionOfImage, ThisTypeBaseTypesInfo);

					void ReadBarcodeSpecificRegionOfImage::Run()
					{
						try
						{
							//ExStart:ReadBarcodeSpecificRegionOfImage
							// The path to the documents directory.
							System::String dataDir = RunExamples::GetDataDir_ManageAndOptimizeBarcodeRecognition();

							// Create an instance of BarCodeReader class and specify an area to look for the barcode
							System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(System::MakeObject<System::Drawing::Bitmap>(dataDir + u"ReadBarcodefromSpecificRegionofImage.png"), System::Drawing::Rectangle(0, 0, 100, 50), DecodeType::Pdf417);

							// Read all barcodes in the provided area
							while (reader->Read() == true)
							{
								// Display the codetext and symbology type of the barcode found
								System::Console::WriteLine(System::String(u"Codetext: ") + reader->GetCodeText() + u" Symbology: " + reader->GetCodeType());
							}

							// Close the reader
							reader->Close();

						}
						catch (System::Exception& ex)
						{
							System::Console::WriteLine(ex->get_Message() + u"\nThis example will only work if you apply a valid Aspose BarCode License. You can purchase full license or get 30 day temporary license from http://wwww.aspose.com/purchase/default.aspx.");
						}

                        //ExEnd:ReadBarcodeSpecificRegionOfImage
					}

				} // namespace ManageAndOptimizeBarCodeRecognition
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
