/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "CreateDatamatrixBarcode.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/BarCodeImageFormat.h>
#include <BarCode.Generation/BarcodeGenerator.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageBarCodes {

					RTTI_INFO_IMPL_HASH(4204120276u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::CreateDatamatrixBarcode, ThisTypeBaseTypesInfo);

					void CreateDatamatrixBarcode::Run()
					{
						//ExStart:CreateDatamatrixBarcode
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();

						// Instantiate barcode object and set CodeText & Barcode Symbology
						System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::DataMatrix, u"1234567890");
						generator->Save(dataDir + u"datamatrix-barcode_out.jpg", Aspose::BarCode::BarCodeImageFormat::Jpeg);
						System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir);
						//ExEnd:CreateDatamatrixBarcode
					}

				} // namespace ManageBarCodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
