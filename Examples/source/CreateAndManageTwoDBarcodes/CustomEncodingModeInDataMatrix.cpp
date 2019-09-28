/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "CustomEncodingModeInDataMatrix.h"

#include <system/text/encoding.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/DataMatrixEncodeMode.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <Generation/BarCodeImageFormat.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace CreateAndManageTwoDBarcodes {

					RTTI_INFO_IMPL_HASH(3542331733u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::CustomEncodingModeInDataMatrix, ThisTypeBaseTypesInfo);

					void CustomEncodingModeInDataMatrix::Run()
					{
						//ExStart:CustomEncodingModeInDataMatrix
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();

						// Instantiate barcode object and set CodeText & Barcode Symbology
						System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::DataMatrix, u"Г¶Г¤ГјГ©Г ГЁ");

						// Set Data Matrix EncodeMode to Custom and CodeText Encoding Property 
						generator->get_Parameters()->get_Barcode()->get_DataMatrix()->set_DataMatrixEncodeMode(Aspose::BarCode::DataMatrixEncodeMode::Custom);
						generator->get_Parameters()->get_Barcode()->get_DataMatrix()->set_CodeTextEncoding(System::Text::Encoding::get_UTF8());
						generator->Save(dataDir + u"CustomEncodingModeInDataMatrix_out.bmp", BarCodeImageFormat::Bmp);

						System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir + u"CustomEncodingModeInDataMatrix_out.bmp");
                        //ExEnd:CustomEncodingModeInDataMatrix
					}

				} // namespace CreateAndManageTwoDBarcodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
