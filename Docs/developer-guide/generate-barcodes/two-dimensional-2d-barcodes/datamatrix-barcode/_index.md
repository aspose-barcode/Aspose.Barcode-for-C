---
title: Datamatrix Barcode
type: docs
weight: 20
url: /cpp/datamatrix-barcode/
---

## **Create a Datamatrix Barcode**
DataMatrix is being used to encode product and serial number information on electrical rating plates; to mark of surgical instruments in Japan; to identify lenses, circuit boards, and other items during manufacturing. DataMatrix barcodes can store up to 2000 characters. Aspose.BarCode provides the most convenient way of producing a DataMatrix type of two-dimensional barcode.
### **How to produce a Datamatrix barcode**
Instantiate a BarcodeGenerator and set its EncodeType to be DataMatrix, and set its CodeText property for the data you want to encode

{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-CreateAndManageTwoDBarcodes-UseEncodeModeDatamatrixbarcode-UseEncodeModeDatamatrixbarcode.cpp" >}}
### **Encode mode**
Aspose.BarCode supports several types of an encoding mode for DataMatrix, and the default value is set to Auto, indicating the encoder to choose a best encode mode.
What is the best encode mode? The best encoding mode will likely produce the smallest picture under the same settings. What the encoder does is trying to encode two characters into one single byte. The following code example demonstrates you how to use encode mode.

{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-CreateAndManageTwoDBarcodes-CreateEnCodeDatamatrixBarCode-CreateEnCodeDatamatrixBarCode.cpp" >}}
### **Custom Encoding Mode**
Aspose.BarCode now supports the Custom encode mode for DataMatrix in order to support Encoding standard like **UTF8**. The following code snippet shows you how to use custom encoding mode.

{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-CreateAndManageTwoDBarcodes-CustomEncodingModeInDataMatrix-CustomEncodingModeInDataMatrix.cpp" >}}


## **Create C40 Encoded Datamatrix Barcode**
Aspose.BarCode supports creating Datamatix barcode with the C40 encoding scheme. The following code example demonstrates how simple it is to create C40 encoded barcode.

{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-CreateAndManageTwoDBarcodes-CreateC40DatamatrixBarCode-CreateC40DatamatrixBarCode.cpp" >}}
## **Create Text Encoded Datamatrix Barcode**
Aspose.BarCode supports creating Datamatix barcode with the Text encoding scheme. The following code example demonstrates how simple it is to create Text encoded barcode.

{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-CreateAndManageTwoDBarcodes-CreateTextDatamatrixBarCode-CreateTextDatamatrixBarCode.cpp" >}}
