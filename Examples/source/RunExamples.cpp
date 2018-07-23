#include "RunExamples.h"

#include <system/string.h>
#include <system/io/path.h>
#include <system/io/directory_info.h>
#include <system/io/directory.h>
#include <system/environment.h>
#include <system/console.h>
#include <system/array.h>

#include <Licensing/License.h>

#include "ManageBarCodes/WideNarrowRatio.h"
#include "ManageBarCodes/SwissPostParcelSymbology.h"
#include "ManageBarCodes/SwissPostParcelBarcodeWithInternationalMailType.h"
#include "ManageBarCodes/SwissPostParcelBarcodeWithAdditionalServiceType.h"
#include "ManageBarCodes/SpecifySymbology.h"
#include "ManageBarCodes/SpecifySymbologies.h"
#include "ManageBarCodes/SetWideNarrowRatio.h"
#include "ManageBarCodes/SetSupplementData.h"
#include "ManageBarCodes/SetQRErrorCorrection.h"
#include "ManageBarCodes/SetQREncodeMode.h"
#include "ManageBarCodes/SetHeightOfBarsInDataBarStackedOmniDirectional.h"
#include "ManageBarCodes/SetHeightBarcodeBars.h"
#include "ManageBarCodes/SetCodeText.h"
#include "ManageBarCodes/RecognizeBarcodeWithTurkishCharacters.h"
#include "ManageBarCodes/RecognizeBarcodeWithChineseCharacters.h"
#include "ManageBarCodes/ReadBarcodeFromTIFFImages.h"
#include "ManageBarCodes/ReadAndSortBarcodesInSpecificOrder.h"
#include "ManageBarCodes/OptionalExceptionMessageWith1DBarCode.h"
#include "ManageBarCodes/ManageXYDimension.h"
#include "ManageBarCodes/ManageCaption.h"
#include "ManageBarCodes/GetDLLVersionInformation.h"
#include "ManageBarCodes/GeneratingGS1ForCodablock.h"
#include "ManageBarCodes/GeneratingGS1_128AI8012Barcode.h"
#include "ManageBarCodes/GeneratingCodablockF.h"
#include "ManageBarCodes/GenerateAustraliaPostBarcode.h"
#include "ManageBarCodes/GenerateAndRecognizeUTF8Characters.h"
#include "ManageBarCodes/ExportPropertiesToXML.h"
#include "ManageBarCodes/DisplayChecksumCharacter.h"
#include "ManageBarCodes/CreateUpcaGs1DatabarCoupon.h"
#include "ManageBarCodes/CreateQRbarcode.h"
#include "ManageBarCodes/CreatePdf417BarcodeWithTurkishCharacters.h"
#include "ManageBarCodes/CreatePdf417BarcodeWithChineseCharacters.h"
#include "ManageBarCodes/CreatePDF417Barcode.h"
#include "ManageBarCodes/CreateImageWithExactBarcodeOnly.h"
#include "ManageBarCodes/CreateDatamatrixBarcode.h"
#include "ManageBarCodes/CreateCouponExtendedBarcode.h"
#include "ManageBarCodes/CreateCode128Barcode.h"
#include "ManageBarCodes/CreateAndSetSizeForImageWithBarcode.h"
#include "ManageBarCodes/CodetextAppearance.h"
#include "ManageBarCodes/CodabarStartStopSymbols.h"
#include "ManageBarCodes/ChecksumSupplementData.h"
#include "ManageBarCodes/BarcodeCaption.h"
#include "ManageBarcodeImages/SetSizeUnitForBarcodeImage.h"
#include "ManageBarcodeImages/SetITF14SpecifyBorderType.h"
#include "ManageBarcodeImages/SetFrameOut.h"
#include "ManageBarcodeImages/SetForeColorText.h"
#include "ManageBarcodeImages/SetFontandColorSetting.h"
#include "ManageBarcodeImages/SetCodetextLocation.h"
#include "ManageBarcodeImages/SetCodeTextFontFamilyNameAndSize.h"
#include "ManageBarcodeImages/SetCodeAlignment.h"
#include "ManageBarcodeImages/SaveBarcodeImageToStreams.h"
#include "ManageBarcodeImages/SaveBarcodeImagesToDifferentFormats.h"
#include "ManageBarcodeImages/RotateBarcodeImage.h"
#include "ManageBarcodeImages/RotateBarcode.h"
#include "ManageBarcodeImages/PrintBarcodeImage.h"
#include "ManageBarcodeImages/ControlBarsFillingofOneDBarcodes.h"
#include "ManageBarcodeImages/ColorizeAnyPartoftheBarcodeImage.h"
#include "ManageBarcodeImages/BarcodeImageResolution.h"
#include "ManageBarcodeImages/BarcodeImageQuality.h"
#include "ManageBarcodeImages/BarcodeImageMargins.h"
#include "ManageBarcodeImages/BarcodeImageBorders.h"
#include "ManageBarcodeImages/BarcodeCustomSize.h"
#include "ManageBarcodeImages/AddSpaceInBarCodeAndText.h"
#include "ManageAndOptimizeBarcodeRecognition/SwitchBarcodeRecognitionModes.h"
#include "ManageAndOptimizeBarcodeRecognition/SupportImageFormat.h"
#include "ManageAndOptimizeBarcodeRecognition/SetBarcodeOrientation.h"
#include "ManageAndOptimizeBarcodeRecognition/ScanBarCodePicture.h"
#include "ManageAndOptimizeBarcodeRecognition/RecognizeSpecificBarcodeSymbology.h"
#include "ManageAndOptimizeBarcodeRecognition/RecognizeMultipleSymbologies.h"
#include "ManageAndOptimizeBarcodeRecognition/ReadMultipleMacroPdf417Barcodes.h"
#include "ManageAndOptimizeBarcodeRecognition/ReadMultipleMacropdf417BarcodeImages.h"
#include "ManageAndOptimizeBarcodeRecognition/ReadMultipleBarcodeRegions.h"
#include "ManageAndOptimizeBarcodeRecognition/ReadBarcodeSpecificRegionOfImage.h"
#include "ManageAndOptimizeBarcodeRecognition/OptimizingBarCodeRecognitionProcess.h"
#include "ManageAndOptimizeBarcodeRecognition/MarkingBarCodeRegionsInImage.h"
#include "ManageAndOptimizeBarcodeRecognition/ManualHints.h"
#include "ManageAndOptimizeBarcodeRecognition/ImageProcessingBarcodeRecognition.h"
#include "ManageAndOptimizeBarcodeRecognition/GetBarCodeRegionInformationfromImage.h"
#include "ManageAndOptimizeBarcodeRecognition/GetBarCodeRecognitionQualityInPercent.h"
#include "ManageAndOptimizeBarcodeRecognition/GetAllPossible1DBarcodesfromImage.h"
#include "ManageAndOptimizeBarcodeRecognition/ECCTypeToEnCodeBarcode.h"
#include "ManageAndOptimizeBarcodeRecognition/DetectUnreadableBarcode.h"
#include "ManageAndOptimizeBarcodeRecognition/DetectOrientationOfBarCode.h"
#include "ManageAndOptimizeBarcodeRecognition/DetectDotPeenDatamatrix.h"
#include "ManageAndOptimizeBarcodeRecognition/DetectDecoratedDatamatrix.h"
#include "CreateAndManageTwoDBarcodes/UseEncodeModeDatamatrixbarcode.h"
#include "CreateAndManageTwoDBarcodes/UseAztecErrorCorrection.h"
#include "CreateAndManageTwoDBarcodes/SetAspectRatio.h"
#include "CreateAndManageTwoDBarcodes/ReduceCodeTextFontSize.h"
#include "CreateAndManageTwoDBarcodes/MultiECIModeInExtendedMode.h"
#include "CreateAndManageTwoDBarcodes/ManagePDF417Barcode.h"
#include "CreateAndManageTwoDBarcodes/HideBarcodeCodeText.h"
#include "CreateAndManageTwoDBarcodes/FNC1SecondPositionInExtendedMode.h"
#include "CreateAndManageTwoDBarcodes/FNC1FirstPositionInExtendedMode.h"
#include "CreateAndManageTwoDBarcodes/EncodeQRCodEInECIMode.h"
#include "CreateAndManageTwoDBarcodes/EncodeQRCode.h"
#include "CreateAndManageTwoDBarcodes/EncodeMicroQRCode.h"
#include "CreateAndManageTwoDBarcodes/DetectUnicodeEncoding.h"
#include "CreateAndManageTwoDBarcodes/CustomEncodingModeInDataMatrix.h"
#include "CreateAndManageTwoDBarcodes/CreateSimpleDatamatrixBarCode.h"
#include "CreateAndManageTwoDBarcodes/CreateMultipleMacroPdf417.h"
#include "CreateAndManageTwoDBarcodes/CreateEnCodeDatamatrixBarCode.h"
#include "CreateAndManageTwoDBarcodes/CreateAztecbarcode.h"
#include "CreateAndManageTwoDBarcodes/Create2DBarcodes.h"


using namespace Aspose::BarCode::Examples::CSharp::CreateAndManageTwoDBarcodes;
using namespace Aspose::BarCode::Examples::CSharp::ManageAndOptimizeBarCodeRecognition;
using namespace Aspose::BarCode::Examples::CSharp::ManageBarCodeImages;
using namespace Aspose::BarCode::Examples::CSharp::ManageBarCodes;
namespace Aspose {

namespace BarCode {

namespace Examples {

namespace CSharp {

RTTI_INFO_IMPL_HASH(3101490663u, ::Aspose::BarCode::Examples::CSharp::RunExamples, ThisTypeBaseTypesInfo);

void RunExamples::Main(System::ArrayPtr<System::String> args)
{
    System::Console::WriteLine(u"Open RunExamples.cs. \nIn Main() method uncomment the example that you want to run.");
    System::Console::WriteLine(u"=====================================================");

	System::SharedPtr<Aspose::BarCode::License> license = System::MakeObject<Aspose::BarCode::License>();
	license->SetLicense(GetDataDir_Data() + u"Aspose.BarCode.CPP.lic");
    
    // Uncomment the example that you want to run.
    
    /// / =====================================================
    /// / =====================================================
    /// /  ManageBarCode 
    /// / =====================================================
    /// / =====================================================
    
    ManageBarCodes::CreatePDF417Barcode::Run();
    ManageBarCodes::CreateQRbarcode::Run();
    ManageBarCodes::CreateDatamatrixBarcode::Run();
    ManageBarCodes::CodetextAppearance::Run();
    ManageBarCodes::BarcodeCaption::Run();
    ManageBarCodes::CreateCode128Barcode::Run();
    ManageBarCodes::SpecifySymbologies::Run();
    ManageBarCodes::SetCodeText::Run();
    ManageBarCodes::ManageCaption::Run();
    ManageBarCodes::SetHeightBarcodeBars::Run();
    ManageBarCodes::ManageXYDimension::Run();
    ManageBarCodes::ChecksumSupplementData::Run();
    ManageBarCodes::WideNarrowRatio::Run();
    ManageBarCodes::GenerateAustraliaPostBarcode::Run();
    ManageBarCodes::CodabarStartStopSymbols::Run();
    ManageBarCodes::SetHeightOfBarsInDataBarStackedOmniDirectional::Run();
    ManageBarCodes::ExportPropertiesToXML::Run();
    ManageBarCodes::DisplayChecksumCharacter::Run();
    ManageBarCodes::SetQREncodeMode::Run();
    ManageBarCodes::SetQRErrorCorrection::Run();
    ManageBarCodes::SetSupplementData::Run();
    ManageBarCodes::SpecifySymbology::Run();
    ManageBarCodes::CreateCouponExtendedBarcode::Run();
    ManageBarCodes::CreateUpcaGs1DatabarCoupon::Run();
    ManageBarCodes::SetWideNarrowRatio::Run();
    ManageBarCodes::GeneratingCodablockF::Run();
    ManageBarCodes::GeneratingGS1ForCodablock::Run();
    ManageBarCodes::GeneratingGS1_128AI8012Barcode::Run();
    
    /// / =====================================================
    /// / =====================================================
    /// /  Manage BarCode Images
    /// / =====================================================
    /// / =====================================================
    
    ManageBarCodeImages::RotateBarcode::Run();
    ManageBarCodeImages::BarcodeImageBorders::Run();
    ManageBarCodeImages::ColorizeAnyPartoftheBarcodeImage::Run();
    ManageBarCodeImages::RotateBarcodeImage::Run();
    ManageBarCodeImages::BarcodeImageQuality::Run();
    ManageBarCodeImages::BarcodeImageMargins::Run();
    ManageBarCodeImages::ControlBarsFillingofOneDBarcodes::Run();
    ManageBarCodeImages::BarcodeImageResolution::Run();
    ManageBarCodeImages::SetSizeUnitForBarcodeImage::Run();
    ManageBarCodeImages::SaveBarcodeImagesToDifferentFormats::Run();
    ManageBarCodeImages::SaveBarcodeImageToStreams::Run();
    ManageBarCodeImages::PrintBarcodeImage::Run();
    ManageBarCodeImages::BarcodeCustomSize::Run();
    ManageBarCodeImages::SetITF14SpecifyBorderType::Run();
    ManageBarCodeImages::SetFrameOut::Run();
    ManageBarCodeImages::SetCodetextLocation::Run();
    ManageBarCodeImages::SetCodeAlignment::Run();
    ManageBarCodes::SetForeColorText::Run();
    ManageBarCodeImages::SetCodeTextFontFamilyNameAndSize::Run();
    ManageBarCodeImages::AddSpaceInBarCodeAndText::Run();
    ManageBarCodeImages::SetFontandColorSetting::Run();
    //ManageBarCodes::ReadBarcodeFromTIFFImages::Run(); // Multi-page images are not supported in C++ version
    ManageBarCodes::GenerateAndRecognizeUTF8Characters::Run();
    ManageBarCodes::GetDLLVersionInformation::Run();
    ManageBarCodes::CreatePdf417BarcodeWithTurkishCharacters::Run();
    ManageBarCodes::CreatePdf417BarcodeWithChineseCharacters::Run();
    ManageBarCodes::SwissPostParcelSymbology::Run();
    ManageBarCodes::CreateImageWithExactBarcodeOnly::Run();
    ManageBarCodes::CreateAndSetSizeForImageWithBarcode::Run();
    ManageBarCodes::SwissPostParcelBarcodeWithAdditionalServiceType::Run();
    ManageBarCodes::SwissPostParcelBarcodeWithInternationalMailType::Run();
    ManageBarCodes::OptionalExceptionMessageWith1DBarCode::Run();
    ManageBarCodes::RecognizeBarcodeWithTurkishCharacters::Run();
    ManageBarCodes::RecognizeBarcodeWithChineseCharacters::Run();
    //ManageBarCodes::ReadAndSortBarcodesInSpecificOrder::Run();
    
    /// / =====================================================
    /// / =====================================================
    /// /  Create-And-Managing-2D-Barcodes
    /// / =====================================================
    /// / =====================================================
    
    CreateAndManageTwoDBarcodes::Create2DBarcodes::Run();
    CreateAndManageTwoDBarcodes::ManagePDF417Barcode::Run();
    CreateAndManageTwoDBarcodes::CreateSimpleDatamatrixBarCode::Run();
    CreateAndManageTwoDBarcodes::CreateEnCodeDatamatrixBarCode::Run();
    CreateAndManageTwoDBarcodes::CustomEncodingModeInDataMatrix::Run();
    CreateAndManageTwoDBarcodes::UseEncodeModeDatamatrixbarcode::Run();
    ManageAndOptimizeBarCodeRecognition::DetectDotPeenDatamatrix::Run();
    CreateAndManageTwoDBarcodes::CreateAztecbarcode::Run();
    CreateAndManageTwoDBarcodes::UseAztecErrorCorrection::Run();
    CreateAndManageTwoDBarcodes::DetectUnicodeEncoding::Run();
    CreateAndManageTwoDBarcodes::EncodeQRCode::Run();
    CreateAndManageTwoDBarcodes::EncodeMicroQRCode::Run();
    CreateAndManageTwoDBarcodes::EncodeQRCodEInECIMode::Run();
    CreateAndManageTwoDBarcodes::FNC1FirstPositionInExtendedMode::Run();
    CreateAndManageTwoDBarcodes::FNC1SecondPositionInExtendedMode::Run();
    CreateAndManageTwoDBarcodes::MultiECIModeInExtendedMode::Run();
    CreateAndManageTwoDBarcodes::HideBarcodeCodeText::Run();
    CreateAndManageTwoDBarcodes::ReduceCodeTextFontSize::Run();
    CreateAndManageTwoDBarcodes::SetAspectRatio::Run();
    CreateAndManageTwoDBarcodes::CreateMultipleMacroPdf417::Run();
    
    /// / =====================================================
    /// / =====================================================
    /// /  ManageAndOptimizeBarcodeRecognition
    /// / =====================================================
    /// / =====================================================
    
    ManageAndOptimizeBarCodeRecognition::ScanBarCodePicture::Run();
    ManageAndOptimizeBarCodeRecognition::SupportImageFormat::Run();
    ManageAndOptimizeBarCodeRecognition::RecognizeSpecificBarcodeSymbology::Run();
    ManageAndOptimizeBarCodeRecognition::RecognizeMultipleSymbologies::Run();
    ManageAndOptimizeBarCodeRecognition::DetectOrientationOfBarCode::Run();
    ManageAndOptimizeBarCodeRecognition::DetectUnreadableBarcode::Run();
    ManageAndOptimizeBarCodeRecognition::SetBarcodeOrientation::Run();
    ManageAndOptimizeBarCodeRecognition::ImageProcessingBarcodeRecognition::Run();
    //ManageAndOptimizeBarCodeRecognition::MarkingBarCodeRegionsInImage::Run(); // investigate
    ManageAndOptimizeBarCodeRecognition::ReadBarcodeSpecificRegionOfImage::Run();
    ManageAndOptimizeBarCodeRecognition::ReadMultipleMacropdf417BarcodeImages::Run();
    ManageAndOptimizeBarCodeRecognition::ReadMultipleMacroPdf417Barcodes::Run();
    ManageAndOptimizeBarCodeRecognition::GetBarCodeRegionInformationfromImage::Run();
    ManageAndOptimizeBarCodeRecognition::GetAllPossible1DBarcodesfromImage::Run();
    ManageAndOptimizeBarCodeRecognition::GetBarCodeRecognitionQualityInPercent::Run();
    ManageAndOptimizeBarCodeRecognition::SwitchBarcodeRecognitionModes::Run();
    ManageAndOptimizeBarCodeRecognition::OptimizingBarCodeRecognitionProcess::Run();
    ManageAndOptimizeBarCodeRecognition::ManualHints::Run();
    ManageAndOptimizeBarCodeRecognition::ReadMultipleBarcodeRegions::Run();
    ManageAndOptimizeBarCodeRecognition::ECCTypeToEnCodeBarcode::Run();
    ManageAndOptimizeBarCodeRecognition::DetectDecoratedDatamatrix::Run();
    
    // Stop before exiting
    System::Console::WriteLine(System::Environment::get_NewLine() + u"Program Finished. Press any key to exit....");
    System::Console::ReadKey();
}

System::String RunExamples::GetDataDir_ManageBarCodes()
{
    return System::IO::Path::GetFullPath(GetDataDir_Data() + u"ManageBarCodes/");
}

System::String RunExamples::GetDataDir_ManageBarCodesImages()
{
    return System::IO::Path::GetFullPath(GetDataDir_Data() + u"ManageBarcodeImages/");
}

System::String RunExamples::GetDataDir_CreateAndManage2DBarCodes()
{
    return System::IO::Path::GetFullPath(GetDataDir_Data() + u"CreateAndManageTwoDBarcodes/");
}

System::String RunExamples::GetDataDir_ManageAndOptimizeBarcodeRecognition()
{
    return System::IO::Path::GetFullPath(GetDataDir_Data() + u"ManageAndOptimizeBarcodeRecognition/");
}

System::String RunExamples::GetDataDir_Data()
{
    auto parent = System::IO::Directory::GetParent(System::IO::Directory::GetCurrentDirectory())->get_Parent();
    System::String startDirectory;
    if (parent != nullptr)
    {
        auto directoryInfo = parent->get_Parent();
        if (directoryInfo != nullptr)
        {
            startDirectory = directoryInfo->get_FullName();
        }
    }
    else
    {
        startDirectory = parent->get_FullName();
    }
    return startDirectory != nullptr ? System::IO::Path::Combine(startDirectory, u"Data\\") : nullptr;
}

} // namespace CSharp
} // namespace Examples
} // namespace BarCode
} // namespace Aspose

int main(int argc, char** argv)
{
    System::ArrayPtr<System::String> args = System::MakeObject<System::Array<System::String>>(argc - 1);
    
    for (int i = 1, j = 0; i < argc; ++i, ++j)
    {
        args[j] = System::String::FromUtf8(argv[i]);
    }
    
    Aspose::BarCode::Examples::CSharp::RunExamples::Main(args);
    return 0;
}
