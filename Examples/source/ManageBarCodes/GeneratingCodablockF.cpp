/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "GeneratingCodablockF.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/BarCodeImageFormat.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/EncodeTypes/BaseEncodeType.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <drawing/bitmap.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageBarCodes {

					RTTI_INFO_IMPL_HASH(3228156377u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::GeneratingCodablockF, ThisTypeBaseTypesInfo);

					void GeneratingCodablockF::Run()
					{
						//ExStart:GeneratingCodablockF
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();

						// Create instance of BarcodeGenerator class.
						System::SharedPtr<BarcodeGenerator> b = System::MakeObject<BarcodeGenerator>(EncodeTypes::CodablockF);

						// Specify code text and set encode type.
						b->set_CodeText(u"CODABLOCKF 01234567890123456789012digits");

						// Save the image to disk in PNG format
						b->Save(dataDir + u"CodablockF_out.png", BarCodeImageFormat::Png);
						System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir);
						//ExEnd:GeneratingCodablockF
					}

				} // namespace ManageBarCodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
