/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "CreateTextDatamatrixBarCode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/DataMatrixEncodeMode.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace CreateAndManageTwoDBarcodes {

					RTTI_INFO_IMPL_HASH(1749682574u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::CreateTextDatamatrixBarCode, ThisTypeBaseTypesInfo);

					void CreateTextDatamatrixBarCode::Run()
					{
						//ExStart:CreateTextDatamatrixBarCode
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();

						// Create an instance of BarcodeGenerator class
						// Set codetext value and EncodeType
						System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(Aspose::BarCode::Generation::EncodeTypes::DataMatrix, u"abcdef123456");

						// Set the DataMatrix encoding mode to Text encodation scheme 
						generator->get_Parameters()->get_Barcode()->get_DataMatrix()->set_DataMatrixEncodeMode(Aspose::BarCode::DataMatrixEncodeMode::Text);

						// Save the barcode image
						generator->Save(dataDir + u"dataMatrixText.png");

						System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir + u"dataMatrixText.png");
						//ExEnd:CreateTextDatamatrixBarCode					
					}

				} // namespace CreateAndManageTwoDBarcodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
