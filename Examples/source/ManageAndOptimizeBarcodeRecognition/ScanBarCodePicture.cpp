/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ScanBarCodePicture.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/console.h>
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

					RTTI_INFO_IMPL_HASH(2289803220u, ::Aspose::BarCode::Examples::CSharp::ManageAndOptimizeBarCodeRecognition::ScanBarCodePicture, ThisTypeBaseTypesInfo);

					void ScanBarCodePicture::Run()
					{
						//ExStart:ScanBarCodePicture
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageAndOptimizeBarcodeRecognition();

						try
						{
							// Read file from directory with DecodeType.EAN13
							System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(dataDir + u"Scan.jpg", DecodeType::EAN13);
							while (reader->Read())
							{
								// Read symbology type and code text
								System::Console::WriteLine(System::String(u"Symbology Type: ") + reader->GetCodeType());
								System::Console::WriteLine(System::String(u"CodeText: ") + reader->GetCodeText());
							}
							reader->Close();
						}
						catch (System::Exception& ex)
						{
							System::Console::WriteLine(ex->get_Message() + u"\nThis example will only work if you apply a valid Aspose BarCode License. You can purchase full license or get 30 day temporary license from https://www.aspose.com/purchase/default.aspx.");
						}

						//ExEnd:ScanBarCodePicture

					}

				} // namespace ManageAndOptimizeBarCodeRecognition
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
