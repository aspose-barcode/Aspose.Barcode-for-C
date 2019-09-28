/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "CreateC40DatamatrixBarCode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/DataMatrixEncodeMode.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace CreateAndManageTwoDBarcodes {

					RTTI_INFO_IMPL_HASH(2578034960u, ::Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes::CreateC40DatamatrixBarCode, ThisTypeBaseTypesInfo);

					void CreateC40DatamatrixBarCode::Run()
					{
						//ExStart:CreateC40DatamatrixBarCode
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_CreateAndManage2DBarCodes();

						// Create an instance of BarcodeGenerator class
						// Set codetext value and EncodeType
						System::SharedPtr<Aspose::BarCode::Generation::BarcodeGenerator> generator = System::MakeObject<Aspose::BarCode::Generation::BarcodeGenerator>(Aspose::BarCode::Generation::EncodeTypes::DataMatrix, u"ABCDEF123456");

						// Set the DataMatrix encoding mode to C40
						generator->get_Parameters()->get_Barcode()->get_DataMatrix()->set_DataMatrixEncodeMode(Aspose::BarCode::DataMatrixEncodeMode::C40);

						// Save the barcode image
						generator->Save(dataDir + u"dataMatrixC40.png");

						System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir + u"dataMatrixC40.png");
						//ExEnd:CreateC40DatamatrixBarCode			
					}

				} // namespace CreateAndManageTwoDBarcodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
