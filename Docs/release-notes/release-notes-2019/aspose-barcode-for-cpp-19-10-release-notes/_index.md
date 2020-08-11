---
title: Aspose.BarCode for Cpp 19.10 Release Notes
type: docs
weight: 10
url: /cpp/aspose-barcode-for-cpp-19-10-release-notes/
---

{{% alert color="primary" %}} 

This page contains release notes information for [Aspose.BarCode for C++ 19.10](https://downloads.aspose.com/barcode/cpp/new-releases/aspose.barcode-for-c---19.10/).

{{% /alert %}} 
## **All Changes**

|**Key**|**Summary**|**Category**|
| :- | :- | :- |
|BARCODENET-37310|Implement SwissQR support|New Feature|
|BARCODENET-36825|Ability to recognize ID card and driving license from Colombia|Bug|
|BARCODENET-37235|Whole Barcode Length is not read.|Bug|
## **Public API and Backward Incompatible Changes**
Following members have been added:

- Class Aspose::BarCode::ComplexBarcode::ComplexBarcodeGenerator
- Constructor Aspose::BarCode::ComplexBarcode::ComplexBarcodeGenerator::ComplexBarcodeGenerator(Aspose::BarCode::ComplexBarcode::IComplexCodetext)
- Property getter Aspose::BarCode::ComplexBarcode::ComplexBarcodeGenerator::get_Parameters
- Property setter Aspose::BarCode::ComplexBarcode::ComplexBarcodeGenerator::set_Parameters
- Method Aspose::BarCode::ComplexBarcode::ComplexBarcodeGenerator::GenerateBarCodeImage
- Method Aspose::BarCode::ComplexBarcode::ComplexBarcodeGenerator::Save(System::IO::Stream,Aspose::BarCode::BarCodeImageFormat)
- Method Aspose::BarCode::ComplexBarcode::ComplexBarcodeGenerator::Save(System::String,Aspose::BarCode::BarCodeImageFormat)
- Method Aspose::BarCode::ComplexBarcode::ComplexBarcodeGenerator::Save(System::String)
- Method Aspose::BarCode::ComplexBarcode::ComplexBarcodeGenerator::Dispose
- Class Aspose::BarCode::ComplexBarcode::ComplexCodetextReader
- Method Aspose::BarCode::ComplexBarcode::ComplexCodetextReader::TryDecodeSwissQR(System::String)
- Class Aspose::BarCode::ComplexBarcode::IComplexCodetext
- Method Aspose::BarCode::ComplexBarcode::IComplexCodetext::GetConstructedCodetext
- Method Aspose::BarCode::ComplexBarcode::IComplexCodetext::InitFromString(System::String)
- Method Aspose::BarCode::ComplexBarcode::IComplexCodetext::GetBarcodeType
- Class Aspose::BarCode::ComplexBarcode::SwissQRCodetext
- Constructor Aspose::BarCode::ComplexBarcode::SwissQRCodetext::SwissQRCodetext
- Constructor Aspose::BarCode::ComplexBarcode::SwissQRCodetext::SwissQRCodetext(Aspose::BarCode::ComplexBarcode::SwissQRBill)
- Property getter Aspose::BarCode::ComplexBarcode::SwissQRCodetext::get_Bill
- Property setter Aspose::BarCode::ComplexBarcode::SwissQRCodetext::set_Bill
- Method Aspose::BarCode::ComplexBarcode::SwissQRCodetext::GetConstructedCodetext
- Method Aspose::BarCode::ComplexBarcode::SwissQRCodetext::InitFromString(System::String)
- Method Aspose::BarCode::ComplexBarcode::SwissQRCodetext::GetBarcodeType
- Class Aspose::BarCode::ComplexBarcode::SwissQRBill
- Property getter Aspose::BarCode::ComplexBarcode::SwissQRBill::get_Version
- Property setter Aspose::BarCode::ComplexBarcode::SwissQRBill::set_Version
- Property getter Aspose::BarCode::ComplexBarcode::SwissQRBill::get_Amount
- Property setter Aspose::BarCode::ComplexBarcode::SwissQRBill::set_Amount
- Property getter Aspose::BarCode::ComplexBarcode::SwissQRBill::get_Currency
- Property setter Aspose::BarCode::ComplexBarcode::SwissQRBill::set_Currency
- Property getter Aspose::BarCode::ComplexBarcode::SwissQRBill::get_Account
- Property setter Aspose::BarCode::ComplexBarcode::SwissQRBill::set_Account
- Property getter Aspose::BarCode::ComplexBarcode::SwissQRBill::get_Creditor
- Property setter Aspose::BarCode::ComplexBarcode::SwissQRBill::set_Creditor
- Property getter Aspose::BarCode::ComplexBarcode::SwissQRBill::get_Reference
- Property setter Aspose::BarCode::ComplexBarcode::SwissQRBill::set_Reference
- Property getter Aspose::BarCode::ComplexBarcode::SwissQRBill::get_Debtor
- Property setter Aspose::BarCode::ComplexBarcode::SwissQRBill::set_Debtor
- Property getter Aspose::BarCode::ComplexBarcode::SwissQRBill::get_UnstructuredMessage
- Property setter Aspose::BarCode::ComplexBarcode::SwissQRBill::set_UnstructuredMessage
- Property getter Aspose::BarCode::ComplexBarcode::SwissQRBill::get_BillInformation
- Property setter Aspose::BarCode::ComplexBarcode::SwissQRBill::set_BillInformation
- Property getter Aspose::BarCode::ComplexBarcode::SwissQRBill::get_AlternativeSchemes
- Property setter Aspose::BarCode::ComplexBarcode::SwissQRBill::set_AlternativeSchemes
- Method Aspose::BarCode::ComplexBarcode::SwissQRBill::CreateAndSetCreditorReference(System::String)
- Method Aspose::BarCode::ComplexBarcode::SwissQRBill::Equals(System::Object)
- Method Aspose::BarCode::ComplexBarcode::SwissQRBill::Equals(Aspose::BarCode::ComplexBarcode::SwissQRBill)
- Method Aspose::BarCode::ComplexBarcode::SwissQRBill::GetHashCode
- Class Aspose::BarCode::ComplexBarcode::AlternativeScheme
- Constructor Aspose::BarCode::ComplexBarcode::AlternativeScheme::AlternativeScheme
- Property getter Aspose::BarCode::ComplexBarcode::AlternativeScheme::get_Instruction
- Property setter Aspose::BarCode::ComplexBarcode::AlternativeScheme::set_Instruction
- Method Aspose::BarCode::ComplexBarcode::AlternativeScheme::Equals(System::Object)
- Method Aspose::BarCode::ComplexBarcode::AlternativeScheme::Equals(Aspose::BarCode::ComplexBarcode::AlternativeScheme)
- Method Aspose::BarCode::ComplexBarcode::AlternativeScheme::GetHashCode
- Enum Aspose::BarCode::ComplexBarcode::AddressType
- Field Aspose::BarCode::ComplexBarcode::AddressType::Undetermined
- Field Aspose::BarCode::ComplexBarcode::AddressType::Structured
- Field Aspose::BarCode::ComplexBarcode::AddressType::CombinedElements
- Field Aspose::BarCode::ComplexBarcode::AddressType::Conflicting
- Class Aspose::BarCode::ComplexBarcode::Address
- Constructor Aspose::BarCode::ComplexBarcode::Address::Address
- Property getter Aspose::BarCode::ComplexBarcode::Address::get_Type
- Property setter Aspose::BarCode::ComplexBarcode::Address::set_Type
- Property getter Aspose::BarCode::ComplexBarcode::Address::get_Name
- Property setter Aspose::BarCode::ComplexBarcode::Address::set_Name
- Property getter Aspose::BarCode::ComplexBarcode::Address::get_AddressLine1
- Property setter Aspose::BarCode::ComplexBarcode::Address::set_AddressLine1
- Property getter Aspose::BarCode::ComplexBarcode::Address::get_AddressLine2
- Property setter Aspose::BarCode::ComplexBarcode::Address::set_AddressLine2
- Property getter Aspose::BarCode::ComplexBarcode::Address::get_Street
- Property setter Aspose::BarCode::ComplexBarcode::Address::set_Street
- Property getter Aspose::BarCode::ComplexBarcode::Address::get_HouseNo
- Property setter Aspose::BarCode::ComplexBarcode::Address::set_HouseNo
- Property getter Aspose::BarCode::ComplexBarcode::Address::get_PostalCode
- Property setter Aspose::BarCode::ComplexBarcode::Address::set_PostalCode
- Property getter Aspose::BarCode::ComplexBarcode::Address::get_Town
- Property setter Aspose::BarCode::ComplexBarcode::Address::set_Town
- Property getter Aspose::BarCode::ComplexBarcode::Address::get_CountryCode
- Property setter Aspose::BarCode::ComplexBarcode::Address::set_CountryCode
- Method Aspose::BarCode::ComplexBarcode::Address::Clear
- Method Aspose::BarCode::ComplexBarcode::Address::Equals(System::Object)
- Method Aspose::BarCode::ComplexBarcode::Address::Equals(Aspose::BarCode::ComplexBarcode::Address)
- Method Aspose::BarCode::ComplexBarcode::Address::GetHashCode
- Enum Aspose::BarCode::ComplexBarcode::SwissQRBill::QrBillStandardVersion
- Field Aspose::BarCode::ComplexBarcode::SwissQRBill::QrBillStandardVersion::V2_0
