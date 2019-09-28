/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "SetBarcodeOrientation.h"

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

					RTTI_INFO_IMPL_HASH(3690706297u, ::Aspose::BarCode::Examples::CSharp::ManageAndOptimizeBarCodeRecognition::SetBarcodeOrientation, ThisTypeBaseTypesInfo);

					void SetBarcodeOrientation::Run()
					{
						try
						{
							//ExStart:SetBarcodeOrientation
							// The path to the documents directory.
							System::String dataDir = RunExamples::GetDataDir_ManageAndOptimizeBarcodeRecognition();

							// Create an instance of BarCodeReader and set image and symbology type to recognize
							System::SharedPtr<BarCodeReader> barCodeReader = System::MakeObject<BarCodeReader>(dataDir + u"BarcodeOrientation.png", DecodeType::Code39Standard);
                            
							// Try to recognize all possible barcodes in the image and Display the codetext
							while (barCodeReader->Read())
							{
								System::Console::WriteLine(System::String(u"Codetext: ") + barCodeReader->GetCodeText());
							}

							// Close the reader
							barCodeReader->Close();
						}
						catch (System::Exception& ex)
						{
							System::Console::WriteLine(ex->get_Message() + u"\nThis example will only work if you apply a valid Aspose BarCode License. You can purchase full license or get 30 day temporary license from http://wwww.aspose.com/purchase/default.aspx.");
						}

                        //ExEnd:SetBarcodeOrientation
					}

				} // namespace ManageAndOptimizeBarCodeRecognition
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
