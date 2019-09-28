/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ECCTypeToEnCodeBarcode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/DataMatrixEccType.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageAndOptimizeBarCodeRecognition {

					RTTI_INFO_IMPL_HASH(3438020489u, ::Aspose::BarCode::Examples::CSharp::ManageAndOptimizeBarCodeRecognition::ECCTypeToEnCodeBarcode, ThisTypeBaseTypesInfo);

					void ECCTypeToEnCodeBarcode::Run()
					{
						//ExStart:ECCTypeToEnCodeBarcode
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageAndOptimizeBarcodeRecognition();

						// Generate barcode (Sample 1) Initialize BarCode generator class object
						System::SharedPtr<BarcodeGenerator> generator1 = [&] { auto tmp_0 = System::MakeObject<BarcodeGenerator>(EncodeTypes::DataMatrix, u"BASE-41 ONLY ALPHA, DIGITS AND PUNCTUATION"); tmp_0->get_Parameters()->get_Barcode()->get_DataMatrix()->set_DataMatrixEcc(Aspose::BarCode::DataMatrixEccType::Ecc050); return tmp_0; }();

						generator1->Save(dataDir + u"SampleBarcode1_out.png");
						// Generate barcode (Sample 2) Initialize BarCode generator class object and Set ECC level.
						System::SharedPtr<BarcodeGenerator> generator2 = [&] { auto tmp_1 = System::MakeObject<BarcodeGenerator>(EncodeTypes::DataMatrix, u"BASE-41 ONLY ALPHA, DIGITS AND PUNCTUATION."); tmp_1->get_Parameters()->get_Barcode()->get_DataMatrix()->set_DataMatrixEcc(Aspose::BarCode::DataMatrixEccType::Ecc100); return tmp_1; }();
						generator2->Save(dataDir + u"SampleBarcode2_out.png");

						System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir);
						//ExEnd:ECCTypeToEnCodeBarcode
					}

				} // namespace ManageAndOptimizeBarCodeRecognition
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
