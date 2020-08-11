---
title: Aspose.BarCode for Cpp 19.7 Release Notes
type: docs
weight: 30
url: /cpp/aspose-barcode-for-cpp-19-7-release-notes/
---

{{% alert color="primary" %}} 

This page contains release notes information for [Aspose.BarCode for C++ 19.7](https://downloads.aspose.com/barcode/cpp/new-releases/aspose.barcode-for-c---19.7/).

{{% /alert %}} 
## **All Changes**

|**Key**|**Summary**|**Category**|
| :- | :- | :- |
|BARCODENET-37226|Add reverse target scanning for Code39 processor|New Feature|
|BARCODENET-37206|Release new BarcodeGenerator, new WinForms and WPF components, remove old BarCodeGenerator and BarCodeBuilder|New Feature|
|BARCODENET-36958|Right margin calculated incorrectly for UPCA|Bug|
|BARCODENET-37217|Problem with recognition Code128 barcodes in the newer version of Aspose.BarCode for .NET|Bug|
|BARCODENET-37222|Unable to read code39standard barcode from a PNG image|Bug|
|BARCODENET-37225|Unable to read barcode when PDF/image has a seal in it|Bug|
|BARCODENET-37223|Aspose.BarCode could not recognize the barcode correctly in the attached scan|Bug|
|BARCODENET-37221|Barcode recognition hangs on Reads|Bug|
|BARCODENET-37213|BarCodeReader never exits when scanning the following Aztec code|Bug|
## **Public API and Backward Incompatible Changes**
###### **New recognition quality setting:**
- added Property getter bool Aspose::BarCode::BarCodeRecognition::QualitySettings::get_AllowOneDWipedBarsRestoration()
- added Property setter Aspose::BarCode::BarCodeRecognition::QualitySettings::set_AllowOneDWipedBarsRestoration(bool)
###### **New BarcodeGenerator has been moved to Aspose::BarCode::Generation namespace:**
- namespace **Aspose::BarCode::Generation::V3** has been removed, **new BarcodeGenerator** is placed in **Aspose::BarCode::Generation** namespace now
- removed Class Aspose::BarCode::Generation::BarcodePadding
- removed Class Aspose::BarCode::Generation::CaptionPadding
- removed Class Aspose::BarCode::Generation::StringAlignment
- added Class Aspose::BarCode::Generation::Padding
- added Property getter System::SharedPtr<Unit>Aspose::BarCode::Generation::Padding::get_Top()
- added Property setter Aspose::BarCode::Generation::Padding::set_Top(System::SharedPtr<Unit>)
- added Property getter System::SharedPtr<Unit> Aspose::BarCode::Generation::Padding::get_Bottom()
- added Property setter Aspose::BarCode::Generation::Padding::set_Bottom(System::SharedPtr<Unit>)
- added Property getter System::SharedPtr<Unit> Aspose::BarCode::Generation::Padding::get_Right()
- added Property setter Aspose::BarCode::Generation::Padding::set_Right(System::SharedPtr<Unit>)
- added Property getter System::SharedPtr<Unit> Aspose::BarCode::Generation::Padding::get_Left()
- added Property setter Aspose::BarCode::Generation::Padding::set_Left(System::SharedPtr<Unit>)
###### **Old BarCodeGenerator and all it's members and related properties classes have been removed.**
###### **Old BarCodeBuilder and all its members have been removed.**
###### **IsLicensed property has been removed:**
- removed Property getter bool Aspose::BarCode::Generation::BarcodeGenerator.get_IsLicensed()
- removed Property getter bool Aspose::BarCode::BarCodeRecognition::BarCodeReader.get_IsLicensed()
- removed Property getter bool Aspose::BarCode::License::get_IsLicensed()
- removed Class Aspose::BarCode::BarCodeRecognition::RecognitionMode
- removed Class Aspose::BarCode::BarCodeRecognition::ManualHint
- removed Property getter RecognitionMode Aspose::BarCode::BarCodeRecognition::BarCodeReader::get_RecognitionMode()
- removed Property setter Aspose::BarCode::BarCodeRecognition::BarCodeReader::set_RecognitionMode(RecognitionMode)
- removed Property getter ManualHint Aspose::BarCode::BarCodeRecognition::BarCodeReader::get_ManualHints()
- removed Property setter Aspose::BarCode::BarCodeRecognition::BarCodeReader::set_ManualHints(ManualHint)
