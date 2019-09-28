/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "DetectUnicodeEncoding.h"

#include <system/text/encoding.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/memory_stream.h>
#include <system/exceptions.h>
#include <system/details/dispose_guard.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeImageFormat.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/DecodeTypes/SingleDecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/DecodeTypes/DecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/BarCodeReader.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::BarCodeRecognition;
using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace CreateAndManageTwoDBarcodes {

					RTTI_INFO_IMPL_HASH(2091013871u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::DetectUnicodeEncoding, ThisTypeBaseTypesInfo);

					void DetectUnicodeEncoding::Run()
					{
						//ExStart:DetectUnicodeEncoding
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();
                        System::String fileName = dataDir + u"DetectUnicodeEncoding_out.png";

                        System::String text = u"Слово";

						try
						{							
							// Instantiate barcode object, Set CodeText, Barcode Symbology and Text Encoding						
                            System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::QR, text);							
							generator->get_Parameters()->get_Barcode()->get_QR()->set_CodeTextEncoding(System::Text::Encoding::get_UTF8());

							generator->Save(fileName, BarCodeImageFormat::Png);							
							
							System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(fileName, DecodeType::QR);

							reader->SetDetectEncoding(false);
							if (reader->Read() && reader->GetCodeText(System::Text::Encoding::get_UTF8()) == text)
							{
								System::Console::WriteLine(u"Decoded successfully");
							}							
						}
						catch (System::Exception& ex) 
                        {
                            System::Console::WriteLine(ex->get_Message());
                        }

                        //ExEnd:DetectUnicodeEncoding
					}

				} // namespace CreateAndManageTwoDBarcodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
