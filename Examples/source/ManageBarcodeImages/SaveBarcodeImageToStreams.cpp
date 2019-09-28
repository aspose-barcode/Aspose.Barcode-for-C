/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "SaveBarcodeImageToStreams.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/environment.h>
#include <system/console.h>
#include <system/io/memory_stream.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/DecodeTypes/SingleDecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/DecodeTypes/DecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/BarCodeReader.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <Generation/BarCodeImageFormat.h>
#include <drawing/imaging/image_format.h>
#include <drawing/bitmap.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
using namespace Aspose::BarCode::BarCodeRecognition;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageBarCodeImages {

					RTTI_INFO_IMPL_HASH(2389916122u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodeImages::SaveBarcodeImageToStreams, ThisTypeBaseTypesInfo);

					void SaveBarcodeImageToStreams::Run()
					{
						//ExStart:SaveBarcodeImageToStreams
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageBarCodesImages();

						// Instantiate barcode object and set CodeText & Barcode Symbology
						System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::Code128, u"1234567");

						// Create a memory stream object that would store barcode image in binary form
                        System::SharedPtr<System::IO::MemoryStream> ms = System::MakeObject<System::IO::MemoryStream>();

						// Call save method of BarCodeImage to store Png barcode image to memory stream
                        generator->Save(ms, BarCodeImageFormat::Png);

                        ms->set_Position(0);
                        System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(ms, DecodeType::Code128);

                        if(reader->Read())
                            System::Console::WriteLine(u"Barcode from stream recognized as " + reader->GetCodeText());
                        else
                            System::Console::WriteLine(u"Barcode from stream failed to recognize");

						//ExEnd:SaveBarcodeImageToStreams
					}

				} // namespace ManageBarCodeImages
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
