---
title: Read Barcodes with Aspose.BarCode APIs
type: docs
weight: 10
url: /cpp/read-barcodes-with-aspose-barcode-apis/
---

## **Barcode Recognition Basics**
Aspose.BarCode provides two powerful classes, BarcodeGenerator and BarCodeReader providing Barcode images generation and recognition respectively. BarCodeReader reads most commonly used 1D and 2D barcodes, detecting them anywhere.
### **How to scan a barcode from a picture**
The following example demonstrates how to scan a picture of a barcode image using Aspose.BarCode
#### **C#**
{{< gist "aspose-com-gists" "f801733f5eb53b0777dd38da9db8366a" "Examples-CSharp-ManageAndOptimizeBarcodeRecognition-ScanBarCodePicture-ScanBarCodePicture.cs" >}}

|**A barcode image**|**Scan results**|
| :- | :- |
|![todo:image_alt_text](read-barcodes-with-aspose-barcode-apis_1.jpg)|![todo:image_alt_text](read-barcodes-with-aspose-barcode-apis_2.png)|
## **Recognizing Barcode Symbology**
This section shows the basic settings of BarCodeReader. We will specify the Symbology type in the constructor of BarCodeReader class and use the Read() method to recognize the barcodes from the image. This should be the case if we already know the Symbology Type.
### **SymbologyType of a barcode**
If we specify the Symbology Type in the constructor, the program will know beforehand about the symbology type to be recognized and it will be faster than not passing symbology type in the constructor. If we know the types of barcode ahead, recognition will speed up a lot. The following code snippet shows you how to specify the symbology Type.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageAndOptimizeBarcodeRecognition-RecognizeSpecificBarcodeSymbology-RecognizeSpecificBarcodeSymbology.cpp" >}}



For unknown types of barcodes, either set call Read() method with no arguments or programmatically loop through every Symbology.
### **BarCodeReadType**
GetReadType() method of BarCodeReader class returns the symbology type of the recognized barcode. Continuing the sample above, the first recognized barcode's SymbologyType is: For those variation barcode Symbologies, its original SymbologyType or superset SymbologyType will be returned. For example, both Code39Standard and Code39Extended barcode will be recognized as Code39Extended barcode.
### **CodeText**
GetCodeText() method of a BarCodeReader class returns the string which is the decoded data from the barcode.
### **Recognizing Multiple Symbologies in Single Image**
There might be such situations in which there are multiple barcodes in a single image. Aspose.BarCode can easily recognize all the barcodes of the supported symbology types. This can be done by specifying multiple symbology types separated by bitwise OR operator “|” in the barcode constructorSee the image below. It contains 2 barcodes of type Code39Standard and Pdf417. Since BarCodeReader.Read() method returns a Boolean value, you can call it in a while loop to recognize all the barcodes in the image. The Read() method will return true for the first barcode, again return true for the second barcode and then it will return false in the third iteration.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageAndOptimizeBarcodeRecognition-RecognizeMultipleSymbologies-RecognizeMultipleSymbologies.cpp" >}}


## **Marking Barcode Regions in Image**
In this section, we will read the image and mark all the barcode regions, for all the recognized barcodes in the image. The barcode region is the part of the image that only contains the barcode itself. In a large image, it is possible that there are other texts or images along with the barcode. Getting the barcode region will separate the barcodes from other text/objects in the image by marking their edges or by filling with some color. First, we will read the BarCodes in the image using the BarCodeReader.Read() method. Then, we will get the region of the barcode using BarCodeReader.GetRegion() method, which will return an instance of type BarCodeRegion. We can then draw edges around the barcode using BarCodeRegion.DrawBarCodeEdges() method.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageAndOptimizeBarcodeRecognition-MarkingBarCodeRegionsInImage-MarkingBarCodeRegionsInImage.cpp" >}}
## **Datamatrix Barcode**
### **Detect Decorated Datamatrix Barcode**
Aspose.BarCode for C++ API allows developers to detect decorated DataMatrix barcode on the image. To detect the decorated DataMatrix barcode, developers have to configure QualitySettings by using BarCodeReader.QualitySettings property which is an instance of QualitySettings class. QualitySettings allows to configure recognition quality and speed manually. You can quickly set up QualitySettings by embedded presets: HighPerformance, NormalQuality, HighQuality, MaxBarCodes or you can manually configure separate options. The default value of QualitySettings is NormalQuality. The following code snippet shows you how to detect decorated DataMatrix barcode.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageAndOptimizeBarcodeRecognition-DetectDecoratedDatamatrix-DetectDecoratedDatamatrix.cpp" >}}



**Result:** DataMatrix: StarDatamatrix
### **Detect Dot Peen Datamatrix Barcode**
Aspose.BarCode allows developers to detect dot peen DataMatrix barcode on the image. To detect the dot peen DataMatrix barcode, developers have to set the BarCodeReader.AllowDatamatrixIndustrialBarcodes property to true. The AllowDatamatrixIndustrialBarcodes property allows engine for Datamatrix to recognize dashed industrial Datamatrix barcodes. Following is the code illustration.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageAndOptimizeBarcodeRecognition-DetectDotPeenDatamatrix-DetectDotPeenDatamatrix.cpp" >}}



**Result:** 
DataMatrix: BERMA Macchine Budrio (BO)
DataMatrix: BERMA Macchine Budrio (BO)
DataMatrix: BERMA Macchine Budrio (BO)
DataMatrix: BERMA Macchine Budrio (BO)
DataMatrix: BERMA Macchine Budrio (BO)
DataMatrix: BERMA Macchine Budrio (BO)
## **Macropdf417 Barcode**
### **Reading Multiple Macropdf417 Barcode Images**
In Generating Multiple MacroPdf417 Barcodes for Large or Multiple Code text Values articles, we generated multiple Macropdf417 barcodes for multiple CodeText values. Now, we will create a program for recognizing the barcodes, which were generated in the above-mentioned article. We recognize all the barcode images placed in the folder using the BarCodeReader class. The BarCodeReader class returns the Segment ID, File ID and Last Segment flag (true/false) for each for the MacroPdf417 barcodes.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageAndOptimizeBarcodeRecognition-ReadMultipleMacropdf417BarcodeImages-ReadMultipleMacropdf417BarcodeImages.cpp" >}}
### **Reading Multiple MacroPdf417 Barcodes**
Multiple Macro Pdf417 barcodes can be recognized. It is supported. We can recognize the segments of Macro PDF417 one by one. Each recognized bar code includes the File ID, Segment ID, and Segment Count and it is must have the same File ID assigned to it. In the below code sample, we recognize 2 Macro Pdf417 barcodes for 2 different code text values.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageAndOptimizeBarcodeRecognition-ReadMultipleMacroPdf417Barcodes-ReadMultipleMacroPdf417Barcodes.cpp" >}}
