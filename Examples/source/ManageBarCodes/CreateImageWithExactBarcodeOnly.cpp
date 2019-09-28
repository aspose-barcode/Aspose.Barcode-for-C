/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "CreateImageWithExactBarcodeOnly.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <drawing/imaging/image_format.h>
#include <drawing/bitmap.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageBarCodes {

					RTTI_INFO_IMPL_HASH(1572475853u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::CreateImageWithExactBarcodeOnly, ThisTypeBaseTypesInfo);

					void CreateImageWithExactBarcodeOnly::Run()
					{
						try
						{
							//ExStart:CreateImageWithExactBarcodeOnly
							// The path to the documents directory.
							System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();

							// Generate the barcode and set code text, symbology type
							System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::Code128, u"123456");

							// Get bitmap with exact barcode only and Save image on local disk
							System::SharedPtr<System::Drawing::Bitmap> bmp = generator->GenerateBarCodeImage();
							bmp->Save(dataDir + u"CreateImageWithExactBarcodeOnly_out.png", System::Drawing::Imaging::ImageFormat::get_Png());
							System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir);
							//ExEnd:CreateImageWithExactBarcodeOnly
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
