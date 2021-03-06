/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "GeneratingGS1_128AI8012Barcode.h"

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

					RTTI_INFO_IMPL_HASH(563970425u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::GeneratingGS1_128AI8012Barcode, ThisTypeBaseTypesInfo);

					void GeneratingGS1_128AI8012Barcode::Run()
					{
						//ExStart:GeneratingGS1_128AI8012Barcode
						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();

						// Create instance of BarcodeGenerator class.
						System::SharedPtr<BarcodeGenerator> b = System::MakeObject<BarcodeGenerator>(EncodeTypes::GS1Code128);

						// Specify code text and set encode type.
						b->set_CodeText(u"(8012)ABC123");

						// Save the image to disk in PNG format
						b->Save(dataDir + u"AI8012_out.png", BarCodeImageFormat::Png);
						System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir);
						//ExEnd:GeneratingGS1_128AI8012Barcode
					}

				} // namespace ManageBarCodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
