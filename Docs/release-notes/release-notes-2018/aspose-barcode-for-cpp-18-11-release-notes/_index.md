---
title: Aspose.Barcode for Cpp 18.11 Release Notes
type: docs
weight: 20
url: /cpp/aspose-barcode-for-cpp-18-11-release-notes/
---

{{% alert color="primary" %}} 

This page contains release notes information for Aspose.Barcode for C++ 18.11 version.

{{% /alert %}} 
## **New Features**
- List or chart of prerequisites required to generate successful barcode image of any barcode type 
- Implemented UpcaGs1DatabarCoupon for new barcode generation API 
- Implemented Interpolation AutoSize mode 
- Create User Control for new generation API 
- Implemented MaxiCode and DotCode for new barcode generation API 
- GS1 DataBar Expanded Stacked barcode did not pass GS1 Canda barcode verification
- Added new barcode subsets to DecodeType 
## **All Changes**

|**Key**|**Summary**|**Category**|
| :- | :- | :- |
|BARCODENET-36791|Prepare preview version of new barcode generation API|New Feature|
|BARCODENET-36872|List or chart of prerequisites required to generate successful barcode image of any barcode type |New Feature|
|BARCODENET-36941|Implement UpcaGs1DatabarCoupon for new barcode generation API |New Feature|
|BARCODENET-36930|Implement Interpolation AutoSize mode |New Feature|
|BARCODENET-36953|Create User Control for new generation API |New Feature|
|BARCODENET-36923|Implement MaxiCode for new barcode generation API |New Feature|
|BARCODENET-36922|Implement DotCode for new barcode generation API |New Feature|
|BARCODENET-36713|Investigate new architecture of barcodes recognition filters. |New Feature|
|BARCODENET-36940|Implement UpcaGs1Code128Coupon for new barcode generation API |New Feature|
|BARCODENET-36973|Not able to read all barcodes from TIFF images |New Feature|
|BARCODENET-36962|Not able to read the barcode |New Feature|
|BARCODENET-37013|Deprecate BarCodeBuilder |New Feature|
|BARCODENET-37019|Add new barcode subsets to DecodeType |New Feature|
|BARCODENET-36945|Not able to detect barcode |New Feature|
|BARCODENET-34367|Improve the recognition of a 3D-distorted and rotated 2D-barcodes |New Feature|
|BARCODENET-36389|Improve the recognition of a 3D-distorted QR code |New Feature|
|BARCODENET-37020|Add minor fixes to BarCodeReader |New Feature|
|BARCODENET-36648|Improve WPF control appearance |New Feature|
|BARCODENET-37026|GS1 DataBar Expanded Stacked barcode did not pass GS1 Canda barcode verification (.NET)|New Feature|
|BARCODENET-36215|Unable to Read the DatabarExpandedStacked barcode from a PNG image|Bug|
|BARCODENET-36942|Incorrect draw Code16K barcode, without above and below borders |Bug|
|BARCODENET-36952|GS1 Datamatrix barcode is not wrapping the text in case of CodeLocation.Right |Bug|
|BARCODENET-36946|License is not working as embedded resource |Bug|
|BARCODENET-36795|DPI settings works incorrectly with rotation |Bug|
|BARCODENET-36956|Databars are generated incorrectly from GS1 string |Bug|
|BARCODENET-37008|ITF14 barcode fails GS1 Verification Process |Bug|
|BARCODENET-34141|Can't recognize DataMatrix codes from the JPG image |Bug|
|BARCODENET-36957|Text part isn't correct in ENA13 when change resolution |Bug|
|BARCODENET-36786|Aspose.BarCode is detecting only 1 out of 3 barcodes from PDF |Bug|
|BARCODENET-37001|Using same instance of BarcodeReader throws exceptions |Bug|
|BARCODENET-37010|Barcode CODE39 reading problem (.NET) |Bug|
|BARCODENET-37000|Barcode Detection does not constrain to the defined region. |Bug|
|BARCODENET-37028|MicrE13B for safe bitmap access|Bug|
# **Usage Examples**
**BARCODENET-36791 Prepare preview version of new barcode generation API** 
We would like to introduce the preview version of new barcode generation API. It has been developed to cover real use cases, like document printing and UI design, as well as we try to make it more simple then previous one. New class Aspose.BarCode.Generation.BarCodeGenerator has been added and it has following main features:
\1. Two different modes of generation depending on your requirements.
If you have restricted requirements of barcode size, then you can set AutoSizeMode = Nearest and required barcode size. Barcode generator will calculate the all other parameters like xDimension, AspectRatio, etc to fit barcode into desired size:

{{< highlight java >}}

 System::SharedPtr<BarCodeGenerator> generator = System::MakeObject<BarCodeGenerator>(EncodeTypes::QR, u"Aspose.BarCode sample");

generator->set_AutoSizeMode(Aspose::BarCode::Generation::AutoSizeMode::Nearest);

generator->get_BarCodeWidth()->set_Pixels(200);

generator->get_BarCodeHeight()->set_Pixels(200);

generator->Save(u"out.png");

{{< /highlight >}}



In opposite if doesn't have required size, you can use AutoSizeMode = None and set all generator parameters by yourself.

{{< highlight java >}}

 System::SharedPtr<BarCodeGenerator> generator = System::MakeObject<BarCodeGenerator>(EncodeTypes::QR, u"Aspose.BarCode sample");

generator->get_XDimension()->set_Pixels(3);

generator->get_Margins()->get_Left()->set_Pixels(20);

generator->get_Margins()->get_Right()->set_Pixels(20);

generator->Save(u"out.png");

{{< /highlight >}}



In addition, if you just want to know the barcode size without saving image you can call method RecalculateValues() and get barcode size.

{{< highlight java >}}

 System::SharedPtr<BarCodeGenerator> generator = System::MakeObject<BarCodeGenerator>(EncodeTypes::QR, u"Aspose.BarCode sample");

generator->get_XDimension()->set_Pixels(3);

generator->get_D2()->set_AspectRatio(1.5f);

generator->RecalculateValues();

float width = generator->get_BarCodeWidth()->get_Pixels();

float height = generator->get_BarCodeWidth()->get_Pixels();

{{< /highlight >}}



Needless to say, that in the complex scenarios AutoSizeMode can be changed from None to Nearest and vice versa to cover all the requirements.

\2. Unit-based system of values. All measurement values can be get and set in pixels, millimeters, inches in the same time. You can easily change the resolution of image and prepare the same barcode for printing, LCD screens or retina-displays.

{{< highlight java >}}

 System::SharedPtr<BarCodeGenerator> generator = System::MakeObject<BarCodeGenerator>(EncodeTypes::QR, u"Aspose.BarCode sample");

generator->set_AutoSizeMode(Aspose::BarCode::Generation::AutoSizeMode::Nearest);

generator->get_BarCodeWidth()->set_Millimeters(20);

generator->get_BarCodeHeight()->set_Millimeters(20);

generator->Save(u"for_display.png");

generator->set_Resolution(300);

generator->Save(u"for_printer.png");

{{< /highlight >}}



\3. Properties for specific barcode types are grouped. Such specific properties like QR_EncodeType of DataMatrix_Ecc are grouped by type to simplify all the API for new users.

{{< highlight java >}}

 System::SharedPtr<BarCodeGenerator> generator = System::MakeObject<BarCodeGenerator>(EncodeTypes::QR);

generator->get_QR()->set_Version(Aspose::BarCode::QRVersion::Version18);

generator->get_QR()->set_ErrorLevel(Aspose::BarCode::QRErrorLevel::LevelM);

generator->Save(u"qr.png");

{{< /highlight >}}



\4. BarCodeGenearator has predefined default codetext, so you can just explore the default codetext format for the specific type.

{{< highlight java >}}

 System::SharedPtr<BarCodeGenerator> generator = System::MakeObject<BarCodeGenerator>(EncodeTypes::AustralianPosteParcel);

System::String codetext = generator->get_CodeText();//99712345678901234567890103456

{{< /highlight >}}

{{< highlight java >}}

 System::SharedPtr<BarCodeGenerator> generator = System::MakeObject<BarCodeGenerator>(EncodeTypes::EAN13);

System::String codetext = generator->get_CodeText();//590123412345

{{< /highlight >}}



\5. Stay tuned, more features are coming soon! It is a preview version and your feedback are welcome. In the further releases we will add one more generation mode and new UI controls based on new API.

**BARCODENET-36215 Unable to Read the DatabarExpandedStacked barcode from a PNG image** 
Sample

{{< highlight java >}}

 System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(u"DatabarExpandedStacked_Sample.png", DecodeType::DatabarExpandedStacked);

while (reader->Read())

{

    System::Console::WriteLine(u"Type: {0} Text: {1}", reader->GetCodeType(), System::ObjectExt::Box<System::String>(reader->GetCodeText()));

}

{{< /highlight >}}



Result:

Type: DatabarExpandedStacked Text: (8110)106141411234562891101201212085010048000214025610048000310123191000



**BARCODENET-36941 - Implement UpcaGs1DatabarCoupon for new barcode generation API** 
Code sample:

{{< highlight java >}}

 System::SharedPtr<BarCodeGenerator> generator = System::MakeObject<BarCodeGenerator>(EncodeTypes::UpcaGs1DatabarCoupon);

generator->Save(u"UpcaGs1DatabarCoupon.png");

{{< /highlight >}}


Result:

Png image



**BARCODENET-36930 - Implement Interpolation AutoSize mode** 
Code sample:

{{< highlight java >}}

 System::SharedPtr<BarCodeGenerator> generator = System::MakeObject<BarCodeGenerator>(EncodeTypes::DataMatrix);

generator->set_AutoSizeMode(Aspose::BarCode::Generation::AutoSizeMode::Interpolation);

generator->get_BarCodeWidth()->set_Millimeters(50);

generator->get_BarCodeHeight()->set_Inches(1.3f);

System::SharedPtr<System::Drawing::Bitmap> barcode = generator->GenerateBarCodeImage();

barcode->Save(u"DataMatrix.png");

{{< /highlight >}}



Result:

Png image

**BARCODENET-36942 - Incorrect draw Code16K barcode, without above and below borders** 
Code sample:

{{< highlight java >}}

 System::SharedPtr<BarCodeGenerator> generator = System::MakeObject<BarCodeGenerator>(EncodeTypes::Code16K);

generator->set_AutoSizeMode(Aspose::BarCode::Generation::AutoSizeMode::Nearest);

generator->get_BarCodeWidth()->set_Pixels(100);

generator->get_CodeTextStyle()->set_Location(Aspose::BarCode::CodeLocation::None);

generator->Save(u"Code16K_Nearest.png");

{{< /highlight >}}


Result:

Png image

**BARCODENET-36952 - GS1 Datamatrix barcode is not wrapping the text in case of CodeLocation.Right** 
We can use Display2DText property for only displayed text and we can insert '\n' symbols in this case.
Code sample:

{{< highlight java >}}

 System::String CODICE = u"(90)0843110730<<<<452287005001T8";

System::String displayedText = System::String(u"(90)0843") + System::Environment::get_NewLine() +

                                u"110730<<<<" + System::Environment::get_NewLine() +

                                u"452287" + System::Environment::get_NewLine() +

                                u"005001T8" + System::Environment::get_NewLine();

System::SharedPtr<BarCodeBuilder> builder = System::MakeObject<BarCodeBuilder>(CODICE, EncodeTypes::GS1DataMatrix);

builder->set_CodeLocation(Aspose::BarCode::CodeLocation::Right);

builder->set_Display2DText(displayedText);

System::SharedPtr<System::Drawing::Bitmap> barcode = builder->GenerateBarCodeImage();

barcode->Save(u"Display2DText.png");

{{< /highlight >}}



Result:

Png image

**BARCODENET-36923 - Implement MaxiCode for new barcode generation API** 
Code sample:

{{< highlight java >}}

 System::SharedPtr<BarCodeGenerator> generator = System::MakeObject<BarCodeGenerator>(EncodeTypes::MaxiCode);

generator->set_MaxiCodeEncodeMode(5);

System::SharedPtr<System::Drawing::Bitmap> barcode = generator->GenerateBarCodeImage();

barcode->Save(u"MaxiCode.png");

{{< /highlight >}}



**BARCODENET-36922 - Implement DotCode for new barcode generation API**



{{< highlight java >}}

 System::SharedPtr<BarCodeGenerator> generator = System::MakeObject<BarCodeGenerator>(EncodeTypes::DotCode);

generator->set_DotCodeMask(2);

System::SharedPtr<System::Drawing::Bitmap> barcode = generator->GenerateBarCodeImage();

barcode->Save(u"DotCode.png");

{{< /highlight >}}



**BARCODENET-36713 - Investigate new architecture of barcodes recognition filters.**



**Usage of QualitySettings presets**

{{< highlight java >}}

 System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(u"c:\\test.jpg");

//set high performance mode

reader->set_QualitySettings(QualitySettings::get_HighPerformance());

while (reader->Read())

{

    System::Console::WriteLine(System::String(u"BarCode CodeText: ") + reader->GetCodeText());

}

{{< /highlight >}}

**Usage of QualitySettings Presets with Manual Options Set Up**

{{< highlight java >}}

 System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(u"c:\\test.jpg");

//set high performance mode

reader->set_QualitySettings(QualitySettings::get_HighPerformance());

//set separate options

reader->get_QualitySettings()->set_AllowMedianSmoothing(true);

reader->get_QualitySettings()->set_MedianSmoothingWindowSize(5);

while (reader->Read())

{

    System::Console::WriteLine(System::String(u"BarCode CodeText: ") + reader->GetCodeText());

}

{{< /highlight >}}

**Usage of QualitySettings Manual Options Set Up**

{{< highlight java >}}

 System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(u"c:\\test.jpg");

//default mode is NormalQuality

//set separate options

reader->get_QualitySettings()->set_AllowMedianSmoothing(true);

reader->get_QualitySettings()->set_MedianSmoothingWindowSize(5);

while (reader->Read())

{

    System::Console::WriteLine(System::String(u"BarCode CodeText: ") + reader->GetCodeText());

}

{{< /highlight >}}

**Bitmap with Proceed Recangle Set Up Sample**

{{< highlight java >}}

 System::SharedPtr<System::IO::FileStream> lStream = System::MakeObject<System::IO::FileStream>(u"c:\\test.jpg", System::IO::FileMode::Open, System::IO::FileAccess::Read, System::IO::FileShare::Read);

System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>();

reader->SetBarCodeImage(lStream);

while (reader->Read())

{

    System::Console::WriteLine(System::String(u"BarCode CodeText: ") + reader->GetCodeText());

}

{{< /highlight >}}

**Bitmap With Proceed Rectangles List Set Up Sample** 

{{< highlight java >}}

 System::SharedPtr<System::Drawing::Bitmap> lBitmap = System::MakeObject<System::Drawing::Bitmap>(u"c:\\test.jpg");

System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>();

reader->SetBarCodeImage(lBitmap, System::MakeArray<System::Drawing::Rectangle>({System::Drawing::Rectangle(0, 0, lBitmap->get_Width(), lBitmap->get_Height())}));

while (reader->Read())

{

    System::Console::WriteLine(System::String(u"BarCode CodeText: ") + reader->GetCodeText());

}

{{< /highlight >}}




**BARCODENET-36940 - Implement UpcaGs1Code128Coupon for new barcode generation API** 
Sample:

{{< highlight java >}}

 System::SharedPtr<BarCodeGenerator> generator = System::MakeObject<BarCodeGenerator>(EncodeTypes::UpcaGs1Code128Coupon);

generator->set_CodeText(u"514141100906(01)88898765432109");

generator->set_AutoSizeMode(Aspose::BarCode::Generation::AutoSizeMode::Interpolation);

generator->get_BarCodeWidth()->set_Pixels(500);

generator->get_BarCodeHeight()->set_Pixels(200);

generator->Save(u"UpcaGs1Code128Coupon_Interpolation_500x200.png");

{{< /highlight >}}


**BARCODENET-36962 - Not able to read the barcode** 
QualitySettings.AllowInvertImage can help with such images:

{{< highlight java >}}

 System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(fileName, DecodeType::DataMatrix);

reader->get_QualitySettings()->set_AllowInvertImage(true);

System::SharedPtr<System::Collections::Generic::List<System::String>> lCodetexts = System::MakeObject<System::Collections::Generic::List<System::String>>();

while (reader->Read())

{

    lCodetexts->Add(reader->GetCodeText());

}

ASPOSE_ASSERT_EQ(1, lCodetexts->get_Count());

ASSERT_TRUE(lCodetexts->Contains(u"65359403095957"));

{{< /highlight >}}


**BARCODENET-36795 - DPI settings works incorrectly with rotation** 
Sample:

{{< highlight java >}}

 System::SharedPtr<BarCodeGenerator> generator = System::MakeObject<BarCodeGenerator>(EncodeTypes::Code128);

generator->set_Resolution(144);

generator->set_RotationAngle(90);

generator->Save(u"rotated_dpi144.png");

{{< /highlight >}}



**BARCODENET-37019 - Add new barcode subsets to DecodeType**

Usage of the new DecodeType fields:

{{< highlight java >}}

 System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(u"test.png", DecodeType::Types1D);

while (reader->Read())

{

    System::Console::WriteLine(System::ObjectExt::ToString(reader->GetCodeType()) + u" " + reader->GetCodeText());

}

System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(u"test.png", DecodeType::PostalTypes);

while (reader->Read())

{

    System::Console::WriteLine(System::ObjectExt::ToString(reader->GetCodeType()) + u" " + reader->GetCodeText());

}

System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(u"test.png", DecodeType::MostCommonTypes);

while (reader->Read())

{

    System::Console::WriteLine(System::ObjectExt::ToString(reader->GetCodeType()) + u" " + reader->GetCodeText());

}

{{< /highlight >}}


## **Public API and Backward Incompatible Changes**
**Following members have been added:**

- Class Aspose::BarCode::Generation::BarCodeGenerator
- Enum Aspose::BarCode::Generation::AutoSizeMode
- Class Aspose::BarCode::Generation::AztecProperties
- Class Aspose::BarCode::Generation::BorderProperties
- Class Aspose::BarCode::Generation::Caption
- Class Aspose::BarCode::Generation::ChecksumProperties
- Class Aspose::BarCode::Generation::CodabarProperties
- Class Aspose::BarCode::Generation::CodeTextStyle
- Class Aspose::BarCode::Generation::D2Properties
- Class Aspose::BarCode::Generation::DataMatrixProperties
- Class Aspose::BarCode::Generation::FontUnit
- Class Aspose::BarCode::Generation::ITFProperties
- Class Aspose::BarCode::Generation::Margins
- Class Aspose::BarCode::Generation::Pdf417Properties
- Class Aspose::BarCode::Generation::QRProperties
- Class Aspose::BarCode::Generation::SupplementProperties
- Class Aspose::BarCode::Generation::Unit
- Enum member Aspose::BarCode::Generation::AutoSizeMode::Interpolation
- Property getter Aspose::BarCode::Generation::BarCodeGenerator::get_MaxiCodeEncodeMode
- Property setter Aspose::BarCode::Generation::BarCodeGenerator::set_MaxiCodeEncodeMode
- Property getter Aspose::BarCode::Generation::BarCodeGenerator::get_DotCodeMask
- Property setter Aspose::BarCode::Generation::BarCodeGenerator::set_DotCodeMask
- Property getter Aspose::BarCode::BarCodeRecognition::BarCodeReader::get_QualitySettings
- Property setter Aspose::BarCode::BarCodeRecognition::BarCodeReader::set_QualitySettings
- Class Aspose::BarCode::BarCodeRecognition::QualitySettings
- Property getter Aspose::BarCode::BarCodeRecognition::QualitySettings::get_HighPerformance
- Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_HighPerformance
- Property getter Aspose::BarCode::BarCodeRecognition::QualitySettings::get_NormalQuality
- Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_NormalQuality
- Property getter Aspose::BarCode::BarCodeRecognition::QualitySettings::get_HighQuality
- Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_HighQuality
- Property getter Aspose::BarCode::BarCodeRecognition::QualitySettings::get_MaxBarCodes
- Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_MaxBarCodes
- Property getter Aspose::BarCode::BarCodeRecognition::QualitySettings::get_AllowInvertImage
- Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_AllowInvertImage
- Property getter Aspose::BarCode::BarCodeRecognition::QualitySettings::get_AllowIncorrectBarcodes
- Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_AllowIncorrectBarcodes
- Property getter Aspose::BarCode::BarCodeRecognition::QualitySettings::get_AllowComplexBackground
- Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_AllowComplexBackground
- Property getter Aspose::BarCode::BarCodeRecognition::QualitySettings::get_AllowMedianSmoothing
- Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_AllowMedianSmoothing
- Property getter Aspose::BarCode::BarCodeRecognition::QualitySettings::get_MedianSmoothingWindowSize
- Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_MedianSmoothingWindowSize
- Property getter Aspose::BarCode::BarCodeRecognition::QualitySettings::get_AllowRegularImage
- Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_AllowRegularImage
- Property getter Aspose::BarCode::BarCodeRecognition::QualitySettings::get_AllowDecreasedImage
- Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_AllowDecreasedImage
- Property getter Aspose::BarCode::BarCodeRecognition::QualitySettings::get_AllowWhiteSpotsRemoving
- Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_AllowWhiteSpotsRemoving
- Property getter Aspose::BarCode::BarCodeRecognition::QualitySettings::get_AllowOneDAdditionalScan
- Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_AllowOneDAdditionalScan
- Property getter Aspose::BarCode::BarCodeRecognition::QualitySettings::get_AllowOneDFastBarcodesDetector
- Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_AllowOneDFastBarcodesDetector
- Property getter Aspose::BarCode::BarCodeRecognition::QualitySettings::get_AllowMicroWhiteSpotsRemoving
- Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_AllowMicroWhiteSpotsRemoving
- Property getter Aspose::BarCode::BarCodeRecognition::QualitySettings::get_AllowSaltAndPaperFiltering
- Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_AllowSaltAndPaperFiltering
- Property getter Aspose::BarCode::BarCodeRecognition::QualitySettings::get_AllowDetectScanGap
- Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_AllowDetectScanGap
- Property getter Aspose::BarCode::BarCodeRecognition::QualitySettings::get_AllowDatamatrixIndustrialBarcodes
- Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_AllowDatamatrixIndustrialBarcodes
- Property getter Aspose::BarCode::BarCodeRecognition::QualitySettings::get_AllowQRMicroQrRestoration
- Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_AllowQRMicroQrRestoration
- Method Aspose::BarCode::BarCodeRecognition::BarCodeReader::SetBarCodeImage(System::SharedPtr<System::Drawing::Bitmap>, System::ArrayPtr<System::Drawing::Rectangle>)
- Method Aspose::BarCode::BarCodeRecognition::BarCodeReader::SetBarCodeImage(System::SharedPtr<System::Drawing::Bitmap>, System::Drawing::Rectangle)
- Method Aspose::BarCode::BarCodeRecognition::BarCodeReader::SetBarCodeImage(System::SharedPtr<System::IO::Stream>)
- Field DecodeType::Types1D
- Field DecodeType::PostalTypes
- Field DecodeType::MostCommonTypes

**Following members have been marked as obsolete:**

- Property getter Aspose::BarCode::BarCodeRecognition::BarCodeReader::get_MedianSmoothingWindowSize
- Property setter Aspose::BarCode::BarCodeRecognition::BarCodeReader::set_MedianSmoothingWindowSize
- Property getter Aspose::BarCode::BarCodeRecognition::BarCodeReader::get_RecognitionMode
- Property setter Aspose::BarCode::BarCodeRecognition::BarCodeReader::set_RecognitionMode
- Property getter Aspose::BarCode::BarCodeRecognition::BarCodeReader::get_ManualHints
- Property setter Aspose::BarCode::BarCodeRecognition::BarCodeReader::set_ManualHints
- Enum Aspose::BarCode::BarCodeRecognition::RecognitionMode
- Enum Aspose::BarCode::BarCodeRecognition::ManualHint

Also class BarCodeBuilder has been deprecated. Please use BarCodeGenerator instead.
