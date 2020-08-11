---
title: Aspose.BarCode for Cpp 19.1 Release Notes
type: docs
weight: 70
url: /cpp/aspose-barcode-for-cpp-19-1-release-notes/
---

{{% alert color="primary" %}} 

This page contains release notes information for Aspose.BarCode for C++ 19.1.

{{% /alert %}} 
## **All Changes**

|**Key**|**Summary**|**Category**|
| :- | :- | :- |
|BARCODENET-37045|Pdf417 throws Out Of Memory Exception when CodeText has a closing parenthesis ")"|Bug|
## **Usage Examples**
**BARCODENET-37045 - Pdf417 throws Out Of Memory Exception when CodeText has a closing parenthesis ")"**

System::SharedPtr<System::Drawing::Font> f = System::MakeObject<System::Drawing::Font>(u"Lucida Console", 12.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel);

System::SharedPtr<Aspose::BarCode::Generation::BarCodeGenerator> b = System::MakeObject<Aspose::BarCode::Generation::BarCodeGenerator>(Aspose::BarCode::Generation::EncodeTypes::Pdf417);
b->get_Pdf417()->set_CompactionMode(Aspose::BarCode::Pdf417CompactionMode::Text);
b->get_Pdf417()->set_ErrorLevel(Aspose::BarCode::Pdf417ErrorLevel::Level2);
b->get_D2()->set_Columns(4);
b->get_D2()->set_Rows(12);
b->get_XDimension()->set_Pixels(3);
b->get_D2()->set_AspectRatio(1.33F);
b->get_CodeTextStyle()->get_Font()->set_FamilyName(f->get_FontFamily()->get_Name());
b->get_CodeTextStyle()->set_Alignment(System::Drawing::StringAlignment::Center);
b->get_CodeTextStyle()->get_Space()->set_Pixels(5.F);
b->get_CodeTextStyle()->get_Font()->get_Size()->set_Pixels(12.F);
b->get_CodeTextStyle()->get_Font()->set_Style(System::Drawing::FontStyle::Regular);
b->set_CodeText(u"Sample.Code.Text(Example).20181203_150435");

System::SharedPtr<System::IO::MemoryStream> barcodeStream = System::MakeObject<System::IO::MemoryStream>();
b->Save(barcodeStream, Aspose::BarCode::BarCodeImageFormat::Svg);

Result:
Correct SVG image.
## **Public API and Backward Incompatible Changes**
No Changes
