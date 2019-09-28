/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ExportPropertiesToXML.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/enum_helpers.h>
#include <system/environment.h>
#include <system/console.h>
#include <Generation/EncodeTypes/SymbologyEncodeType.h>
#include <Generation/EncodeTypes/EncodeTypes.h>
#include <Generation/Caption.h>
#include <BarCode.Generation/BarcodeGenerator.h>
#include <BarCode.Generation/GenerationParameters/BaseGenerationParameters.h>
#include <BarCode.Generation/GenerationParameters/BarcodeParameters.h>
#include <BarCode.Generation/GenerationParameters/CaptionParameters.h>
#include <BarCode.Generation/GenerationParameters/BorderParameters.h>
#include <BarCode.Generation/GenerationParameters/CodetextParameters.h>
#include <BarCode.Generation/Helpers/FontUnit.h>
#include <BarCode.Generation/Helpers/Unit.h>
#include <BarCode.Generation/GenerationParameters/TextAlignment.h>
#include <drawing/string_alignment.h>
#include <Generation/BarCodeImageFormat.h>
#include <drawing/font.h>
#include <drawing/color.h>
#include <cstdint>

#include "RunExamples.h"


using namespace Aspose::BarCode::Generation;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageBarCodes {

					RTTI_INFO_IMPL_HASH(213939568u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::ExportPropertiesToXML, ThisTypeBaseTypesInfo);

					void ExportPropertiesToXML::Run()
					{
						//ExStart:ExportPropertiesToXML
                        try
                        {
                            // The path to the documents directory.
                            System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();

                            // Initialize the BarcodeGenerator class by passing barcode text and barcode symbology as parameters.
                            System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::DataMatrix, u"abcdefghijklmnopqrstuvwxyzabcdef");

                            generator->get_Parameters()->get_Border()->set_Visible(true);
                            generator->get_Parameters()->get_Barcode()->get_CodeTextParameters()->set_Location(CodeLocation::Above);

                            // Set CaptionAbove text and text alignment & also make it visible
                            generator->get_Parameters()->get_CaptionAbove()->set_Visible(true);
                            generator->get_Parameters()->get_CaptionAbove()->set_Text(u"Aspose");
                            generator->get_Parameters()->get_CaptionAbove()->set_Alignment(TextAlignment::Center);
                            generator->get_Parameters()->get_CaptionAbove()->get_Font()->set_FamilyName(u"Pristina");
                            generator->get_Parameters()->get_CaptionAbove()->get_Font()->get_Size()->set_Point(6);
                            generator->get_Parameters()->get_CaptionAbove()->set_TextColor(System::Drawing::Color::get_Red());

                            // Set CaptionBelow text and text alignment & also make it visible						
                            generator->get_Parameters()->get_CaptionBelow()->set_Text(u"Below");
                            generator->get_Parameters()->get_CaptionBelow()->set_Alignment(TextAlignment::Center);
                            generator->get_Parameters()->get_CaptionBelow()->set_Visible(true);
                            generator->get_Parameters()->get_CaptionBelow()->get_Font()->set_FamilyName(u"Pristina");
                            generator->get_Parameters()->get_CaptionBelow()->get_Font()->get_Size()->set_Point(6);
                            generator->get_Parameters()->get_CaptionBelow()->set_TextColor(System::Drawing::Color::get_OrangeRed());

                            // Specify text font settings.
                            generator->get_Parameters()->get_Barcode()->get_CodeTextParameters()->get_Font()->set_FamilyName(u"Courier New");
                            generator->get_Parameters()->get_Barcode()->get_CodeTextParameters()->get_Font()->get_Size()->set_Point(6);
                            generator->get_Parameters()->get_Barcode()->get_CodeTextParameters()->get_Font()->set_Style(System::Drawing::FontStyle::Bold);

                            // Call the export to XML method to export the properties to XML file.
                            generator->Save(dataDir + u"ExportPropertiesToXML_out.png"); // actual export TBD
                        }
                        catch (System::Exception &ex)
                        {
                            System::Console::WriteLine(ex->get_Message());
                        }
						//ExEnd:ExportPropertiesToXML
					}

				} // namespace ManageBarCodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
