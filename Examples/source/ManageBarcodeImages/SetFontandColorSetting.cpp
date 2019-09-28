/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "SetFontandColorSetting.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <Generation/Caption.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>
#include <BarCode.Generation/GenerationParameters/CaptionParameters.h>
#include <BarCode.Generation/Helpers/FontUnit.h>
#include <BarCode.Generation/Helpers/Unit.h>
#include <BarCode.Generation/GenerationParameters/TextAlignment.h>
#include <drawing/string_alignment.h>
#include <Generation/BarCodeImageFormat.h>
#include <drawing/font.h>
#include <drawing/color.h>

#include "RunExamples.h"

using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageBarCodeImages {

					RTTI_INFO_IMPL_HASH(3783819353u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodeImages::SetFontandColorSetting, ThisTypeBaseTypesInfo);

					void SetFontandColorSetting::Run()
					{
                        try
                        {
                            //ExStart:SetFontandColorSetting
                            // The path to the documents directory.
                            System::String dataDir = RunExamples::GetDataDir_ManageBarCodesImages();

                            // Instantiate barcode object
                            System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::Code128);

                            generator->get_Parameters()->get_CaptionAbove()->set_Text(u"Aspose");
                            generator->get_Parameters()->get_CaptionAbove()->set_Alignment(TextAlignment::Center);
                            generator->get_Parameters()->get_CaptionAbove()->set_Visible(true);
                            generator->get_Parameters()->get_CaptionAbove()->get_Font()->set_FamilyName(u"Pristina");
                            generator->get_Parameters()->get_CaptionAbove()->get_Font()->get_Size()->set_Point(7);
                            generator->get_Parameters()->get_CaptionAbove()->set_TextColor(System::Drawing::Color::get_Red());

                            // Set CaptionBelow text and text alignment & also make it visible
                            generator->get_Parameters()->get_CaptionBelow()->set_Text(u"Below");
                            generator->get_Parameters()->get_CaptionBelow()->set_Alignment(TextAlignment::Center);
                            generator->get_Parameters()->get_CaptionBelow()->set_Visible(true);
                            generator->get_Parameters()->get_CaptionBelow()->get_Font()->set_FamilyName(u"Pristina");
                            generator->get_Parameters()->get_CaptionBelow()->get_Font()->get_Size()->set_Point(7);
                            generator->get_Parameters()->get_CaptionBelow()->set_TextColor(System::Drawing::Color::get_OrangeRed());

                            // Save the image to your system and set its image format to Jpeg
                            generator->Save(dataDir + u"SetFontandColorSetting_out.jpg", BarCodeImageFormat::Jpeg);
                            System::Console::WriteLine(System::Environment::get_NewLine() + u"Barcode saved at " + dataDir);
                        }
                        catch (System::Exception &ex)
                        {
                            System::Console::WriteLine(ex->get_Message());
                        }
						//ExEnd:SetFontandColorSetting
					}

				} // namespace ManageBarCodeImages
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
