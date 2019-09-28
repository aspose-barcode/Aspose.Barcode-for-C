/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ReadBarcodeFromTIFFImages.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/console.h>
#include <drawing/imaging/frame_dimension.h>
#include <drawing/image.h>
#include <drawing/bitmap.h>
#include <cstdint>
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

				namespace ManageBarCodes {

					RTTI_INFO_IMPL_HASH(262320956u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::ReadBarcodeFromTIFFImages, ThisTypeBaseTypesInfo);

					void ReadBarcodeFromTIFFImages::Run()
					{
						try
						{
							// ExStart:ReadBarcodeFromTIFFImages
							// The path to the documents directory.
							System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
							auto img = System::Drawing::Image::FromFile(dataDir + u"tiffImage.tif");
							int32_t totalFrame = img->GetFrameCount(System::Drawing::Imaging::FrameDimension::get_Page());

							// Feed the pages to BarCodeReader one by one
							for (int32_t i = 0; i < totalFrame; i++)
							{
								// Set the active page and feed it to the BarCodeReader
								int32_t w = img->SelectActiveFrame(System::Drawing::Imaging::FrameDimension::get_Page(), i);
								auto bitmap = System::MakeObject<System::Drawing::Bitmap>(img);
								System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(bitmap, DecodeType::AllSupportedTypes);
								while (reader->Read())
								{
									System::Console::WriteLine(reader->GetCodeText() + u" " + reader->GetCodeType());
								}
							}
							// ExEnd:ReadBarcodeFromTIFFImages
						}
						catch (System::Exception& ex)
						{
							System::Console::WriteLine(ex->get_Message() + u"\nThis example will only work if you apply a valid Aspose License. You can purchase full license or get 30 day temporary license from http://www.aspose.com/purchase/default.aspx.");
						}

					}

				} // namespace ManageBarCodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
