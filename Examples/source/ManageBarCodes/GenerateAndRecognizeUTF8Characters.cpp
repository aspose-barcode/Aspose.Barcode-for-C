/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "GenerateAndRecognizeUTF8Characters.h"

#include <system/text/encoding.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/console.h>
#include <system/array.h>
#include <system/environment.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeImageFormat.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>
#include <cstdint>
#include <BarCodeRecognition/Recognition/RecognitionSession/BarCodeReader.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::BarCodeRecognition;
using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageBarCodes {

					RTTI_INFO_IMPL_HASH(237041388u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::GenerateAndRecognizeUTF8Characters, ThisTypeBaseTypesInfo);

					void GenerateAndRecognizeUTF8Characters::Run()
					{
						try
						{
							//ExStart:GenerateAndRecognizeUTF8Characters
							// The path to the documents directory.
							System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();

							// Generate the barcode
							System::SharedPtr<System::Drawing::Bitmap> imgBarcode;
							System::SharedPtr<BarcodeGenerator> objBarcodeGenerator = System::MakeObject<BarcodeGenerator>(EncodeTypes::MacroPdf417);

							// Set the codetext by converting it into unicode byte array
							objBarcodeGenerator->set_CodeText(u"منحة");
							objBarcodeGenerator->get_Parameters()->get_Barcode()->get_Pdf417()->set_CodeTextEncoding(System::Text::Encoding::get_Unicode());

							imgBarcode = objBarcodeGenerator->GenerateBarCodeImage();
							imgBarcode->Save(dataDir + u"GenerateAndRecognizeUTF8Characters_out.png");

							// Recognize the above barcode
							System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(dataDir + u"GenerateAndRecognizeUTF8Characters_out.png");
							while (reader->Read())
							{
								System::SharedPtr<System::Text::Encoding> unicode = System::Text::Encoding::get_Unicode();

								// Get the characters array from the bytes
								System::ArrayPtr<char16_t> unicodeChars = System::MakeArray<char16_t>(unicode->GetCharCount(reader->GetCodeBytes(), 0, reader->GetCodeBytes()->get_Length()), 0);
								unicode->GetChars(reader->GetCodeBytes(), 0, reader->GetCodeBytes()->get_Length(), unicodeChars, 0);

								// Build unicode string
								System::String strCodeText(unicodeChars);
								System::Console::WriteLine(strCodeText);
							}
							reader->Close();
							//ExEnd:GenerateAndRecognizeUTF8Characters
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
