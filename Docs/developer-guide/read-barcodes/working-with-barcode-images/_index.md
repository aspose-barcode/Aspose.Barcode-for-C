---
title: Working with BarCode Images
type: docs
weight: 30
url: /cpp/working-with-barcode-images/
---

## **Getting BarCode Region Information from Image**
In this section, we will read the image and get all the barcode regions, for all the recognized barcodes in the image. The barcode region is the part of the image that only contains the barcode itself. In a large image, it is possible that there are other texts or images along with the barcode. Getting the barcode region will separate the barcodes from other text/objects in the image by detecting their edges. First, we will read the BarCodes in the image using the BarCodeReader.Read() method. Then, we will get the region of the barcode using BarCodeReader.GetRegion() method, which will return an instance of type BarCodeRegion. We can then get the X and Y coordinates of the barcode using BarCodeRegion.Points property.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageAndOptimizeBarcodeRecognition-GetBarCodeRegionInformationfromImage-GetBarCodeRegionInformationfromImage.cpp" >}}
## **Getting all Possible 1D Barcodes from an Image**
The BarCodeReader.GetAllPossibleBarCodes method is only for 1D barcodes. It returns an array of all possible barcodes found. This array holds all information about the barcodes like code text, symbology, recognition percentage and region details. The following code snippet shows you how to get all possible 1D barcodes from an image.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageAndOptimizeBarcodeRecognition-GetAllPossible1DBarcodesfromImage-GetAllPossible1DBarcodesfromImage.cpp" >}}
## **Reading Barcode from Specific Region of Image**
In this section, we will scan only a part of the image that contains barcode. Suppose that we have an image of large size e.g. 800 x 600 pixels and our barcode is placed on the top left corner of the image e.g. 100 x 50 pixels, we can optimize the barcode scanning by specifying the area, instead of scanning the whole image. But, in this case, we need to know in advance about the location of the barcode. The barcode reader will not scan other parts of the image, if we specify the area. The following image is of 333 x 127 pixels and the size of barcode is only 94 x 18 pixels and it is located on the top right corner of the image. The rest of the image contains some text in this example. But in your case, it might contain any other text and image.

|**Reading Barcode from Specific Region of Image**|
| :- |
|![todo:image_alt_text](working-with-barcode-images_1.png)|
If we specify an area of (0, 0, 100, 50), the barcode reader will scan only this area and will be able to recognize the barcode. It will greatly increase the speed of recognition because the barcode reader will not look for other parts of the image.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageAndOptimizeBarcodeRecognition-ReadBarcodeSpecificRegionOfImage-ReadBarcodeSpecificRegionOfImage.cpp" >}}
## **Read Barcodes from Multiple Regions**
In this section, we will scan multiple parts of the image to read barcodes from those specific regions. Suppose that we have an image of large size e.g. 800 x 600 pixels and our barcodes are placed on the top left and bottom right corners of the image, we can optimize the barcode scanning by specifying the areas, instead of scanning the whole image. But, in this case, we need to know in advance about the locations of the barcodes. The barcode reader will not scan other parts of the image if we specify the areas.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageAndOptimizeBarcodeRecognition-ReadMultipleBarcodeRegions-ReadMultipleBarcodeRegions.cpp" >}}
## **Reading Multiple MacroPdf417 Barcodes**
Multiple Macro Pdf417 bar codes can be recognized. It is supported. We can recognize the segments of Macro PDF417 one by one. Each recognized bar code includes the File ID, Segment ID and Segment Count and it is must have the same File ID assigned to it. In the below code sample, we recognize 2 Macro Pdf417 bar codes for 2 different code text values.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageAndOptimizeBarcodeRecognition-ReadMultipleMacroPdf417Barcodes-ReadMultipleMacroPdf417Barcodes.cpp" >}}


## **Detect an Unreadable Barcode on the Image**
Aspose.BarCode allows developers to detect an unreadable barcode on the image.  It is currently supported by QR and Code128 recognition engines and enabled by the modes: RecognitionMode.MaxBarCodes. All recognition modes are defined in this help topic: [Switch Barcode Recognition Modes According to the Requirement](/barcode/cpp/improve-barcode-recognition/#improvebarcoderecognition-betterandfasterimageprocessingforbarcoderecognition). The new GetIsDeniable method has been added to the Aspose.BarCode class in order to indicate whether the image contains any unreadable barcodes. The following code snippet shows you how to get barcode recognition quality in percentage.

{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageAndOptimizeBarcodeRecognition-DetectUnreadableBarcode-DetectUnreadableBarcode.cpp" >}}
