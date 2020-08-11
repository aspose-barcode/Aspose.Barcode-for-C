---
title: Use Checksum and Supplement Data
type: docs
weight: 70
url: /cpp/use-checksum-and-supplement-data/
---

## **Use Checksum and Supplement Data**
### **What is Checksum**
A Checksum is an error detection scheme in which some additional characters are added to a barcode to protect the integrity of barcode data. Checksums are not necessary for all kinds of barcodes. For example, Code128 and Code39 are self-checking and checksums for such symbologies are not necessary. But on the other hand, another symbology like Interleaved2Of5, which can only represent numeric data, has very little spaces between its bars and is prone to substitution errors. So, for such symbologies, checksums are necessary. There are also some symbologies such as UPC (Universal Product Code) that require a checksum.
### **What is Supplemental Barcode**
UPCA, UPCE, EAN13 and EAN8 symbologies may all include an additional barcode to the right of the main barcode. This second barcode that is usually not as tall as the main barcode, is called Supplemental Barcode and is used to encode additional information for newspapers, books and other periodicals. The above BarCodes are generated using EAN13 symbology. The supplemental barcode may either encode 2 or 5 digits of information.

- 2 Digit Supplemental Barcodes are mostly used with magazines, newspapers and other such periodicals. The 2 Digit Supplement represents the issue number of the magazine that can be used to track which issue of the magazine is being sold, perhaps for sales analysis or restocking purposes.
- 5 Digit Supplemental Barcodes are used on books to indicate a suggested retail price. The first digit of the supplement indicates the currency in which the price is expressed. A "0" represents a price expressed in British Pounds whereas a "5" represents a price expressed in US Dollars. The remaining 4 digits of the supplement indicate the price.
### **Aspose.BarCode and Checksum**
Using Aspose.BarCode, developers can enable Checksum for the barcode by setting the EnableChecksum property of the barcode class to true. Checksum can also be made visible or hidden in the barcode image by setting the EnableChecksum property to true or false.
#### **C#**
{{< gist "aspose-barcode" "ba5a7a8ee427f3d8c211062a11bd7ec9" "Examples-CPP-ManageBarCodes-ChecksumSupplementData-ChecksumSupplementData.cpp" >}}



Once the EnableChecksum property is set to true, the Checksum is shown on the barcode image.

Applicable symbology:

- Code11
- Code39Extended
- Code39Standard
- Code93Extended
- Code93Standard
- Interleaved2of5
- Standard2of5

The following Symbology always include checksum:

- EAN13
- EAN8
- BooklandEAN
### **Aspose.BarCode and Supplement Data**
It is possible to encode 2 or 5 Digit Supplement Data in the barcode using SupplementData property of any barcode generating class in Aspose.BarCode. Moreover, the space between the main barcode and supplemental barcode can also be customized by using the SupplementData property of all barcode generating classes.

{{< gist "aspose-barcode" "ba5a7a8ee427f3d8c211062a11bd7ec9" "Examples-CPP-ManageBarcodeImages-SetSupplementData-SetSupplementData.cpp" >}}


The barcode symbologies, which support supplemental barcodes are as follows:

- UPCA
- UPCE
- EAN13
- EAN8
- BooklandEAN
- Interleaved2of5
- Standard2of5

SupplementSpace is the space between main barcode and the supplementdata, this setting generally will not affect the scan result.
### **Always Display Checksum character on Code128 and EAN128 Barcodes**
Code128 and EAN128 barcode symbologies also support checksum characters. To display the checksum character on the barcode image in human readable form, BarCodeBuilder.AlwaysShowChecksum property needs to be set.The below code example generates a Code128 barcode. The checksum character is also displayed on the barcode image.
#### **C#**
{{< gist "aspose-barcode" "2224aabcdb4d2a25ba5a7a8ee427f3d8c211062a11bd7ec9b10" "Examples-CPP-ManageBarCodes-ChecksumSupplementData-ChecksumSupplementData.cpp" >}}


## **Applying Checksum Validation On OneCode And AustraliaPost Barcodes**
Aspose.BarCode API allows developers to apply checksum validation on OneCode and AustraliaPost barcodes.
### **Applying Checksum Validation**
A new Property **ChecksumValidation** has been introduced to perform validation on **OneCode** and **AustraliaPost** barcodes. Following is the sample code demonstrating how **ChecksumValidation** can be set to off and on to perform validation.
#### **C#**
{{< gist "aspose-barcode" "ba5a7a8ee427f3d8c211062a11bd7ec9" "Examples-CPP-ManageBarCodes-ApplyingChecksumValidation-ApplyingChecksumValidation.cpp" >}}
## **Applying Checksum Validation On Codabar**
Aspose.BarCode for C++ allows developers to apply checksum validation on Codabar. CodabarChecksumMode enumeration has been added. It specifies the checksum algorithm for Codabar barcodes. Following is the sample code demonstrating how CodabarChecksumMode can be used.

{{< gist "aspose-barcode" "ba5a7a8ee427f3d8c211062a11bd7ec9" "Examples-CPP-ManageBarCodes-CodabarChecksumMode-CodabarChecksumMode.cpp" >}}
## **Get Barcode With Checksum Value**
Aspose.BarCode allows developers to get barcode text along with checksum value. Following is the simple lines of code showing how to get barcode text with checksum.

{{< gist "aspose-barcode" "ba5a7a8ee427f3d8c211062a11bd7ec9" "Examples-CPP-ManageBarCodes-BarcodeWithChecksumValue-BarcodeWithChecksumValue.cpp" >}}
## **Identify The Type of Code128 Coded Barcode**
Aspose.BarCode allows developers to identify the type of Code128 coded barcode. Following is the sample code demonstrating how to identify the type of Code128.

{{< gist "aspose-barcode" "ba5a7a8ee427f3d8c211062a11bd7ec9" "Examples-CPP-ManageBarCodes-IdentifyTypeOfCode128-IdentifyTypeOfCode128.cpp" >}}
