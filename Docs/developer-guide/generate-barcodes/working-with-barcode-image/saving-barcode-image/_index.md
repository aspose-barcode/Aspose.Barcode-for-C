---
title: Saving Barcode Image
type: docs
weight: 20
url: /cpp/saving-barcode-image/
---

## **Save Barcode Images to different Formats**
Aspose.BarCode facilitates its developers to save the barcode images to most of the popular image formats. All barcode generating classes (BarcodeGenerator, BarCodeControl or BarCodeWebControl) provided by Aspose.BarCode, have a public method, [Save](https://apireference.aspose.com/net/barcode/aspose.barcode.windows.forms.barcodecontrol/save/methods/1). The BarcodeGenerator.Save method takes an instance of BarCodeImageFormat class. Following image formats can be passed to Save method of the barcode class as an argument:

- BarCodeImageFormat.Bmp - Specifies the bitmap (BMP) image format.
- BarCodeImageFormat.Gif - Specifies the Graphics Interchange Format (GIF) image format.
- BarCodeImageFormat.Jpeg - Specifies the Joint Photographic Experts Group (JPEG) image format.
- BarCodeImageFormat.Png - Specifies the W3C Portable Network Graphics (PNG) image format.
- BarCodeImageFormat.Tiff - Specifies the Tagged Image File Format (TIFF) image format.
- BarCodeImageFormat.TiffInCmyk - Specifies the Tagged Image File Format (TIFF) image format in CMYK color model.
- BarCodeImageFormat.Emf - Specifies the Enhanced Metafile (EMF) image format.
- BarCodeImageFormat.Svg - Specifies the Scalable Vector Graphics (SVG) image format.

Developers can use any of the image formats from the above list to create a barcode image in the desired image format. An example is given below about its usage. Aspose.BarCode for Java only supports Jpg, Gif, Png and Bmp.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageBarcodeImages-SetSizeUnitForBarcodeImage-SetSizeUnitForBarcodeImage.cpp" >}}
## **Save Barcode Image to Streams**
In our previous topics, we have studied that a barcode image can be saved to different image formats like Jpeg, Metafile, Tiff and Bitmap etc. But sometimes, developers may need to save the barcode image in the form of a Stream (as binary format). To fulfil this need, Aspose.BarCode offers its users to save a barcode image to a Stream by calling the Save method of BarCodeImage object, which is encapsulated in all barcode classes of Aspose.BarCode as a property.

An example is given below as a demonstration for the conversion of the barcode image into System.IO.MemoryStream (a kind of Stream to hold binary data) object->save method of BarCodeImage takes an object of MemoryStream (which will store barcode image) and an instance of System.Drawing.Imaging.ImageFormat (that allows developers to specify barcode image format like Jpeg, Png, Gif, Metafile etc.).
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageBarcodeImages-SaveBarcodeImageToStreams-SaveBarcodeImageToStreams.cpp" >}}
## **Specify Border Types for ITF14 Barcode**
BarCodeGenerator class allows us to specify the Border type of the barcode ITF14 Symbology using BarcodeGenerator.ITF property. Let's experience this feature and know how it works.
### **Specifying Border Type for ITF14 Barcode**
Developers can customize the border type of the ITF14 barcode image using BorderType property of the BarCodeGenerator.ITF class. Aspose.BarCode offers some built-in ITF14 barcode border types that are contained in an enumeration named as ITF14BorderType. Developers can select the desired border type from this enumeration and assign it to the ITF14BorderType property of the BarCodeGenerator.ITF class. The pre-defined border types in ITF14BorderType enumeration are as follows:

|**ITF14 Border Type**|**Value**|**Description**|
| :- | :- | :- |
|Bar|2|Two horizontal bars enclosing the barcode|
|BarOut|4|Two horizontal bars enclosing the barcode. It drew outside of the barcode and does not affect the height|
|Frame|1|Frame enclosing the barcode|
|FrameOut|3|Frame enclosing the barcode. It drew outside of the barcode and does not affect the height|
|None|0|No border enclosing the barcode|
### **Border Type: BarOut**
Two horizontal bars enclosing the barcode, It drew outside of the barcode and does not affect the height.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageBarcodeImages-SetITF14SpecifyBordeType-SetITF14SpecifyBordeType.cpp" >}}
### **Border Type: FrameOut**
Frame enclosing the barcode, It drew outside of the barcode, and does not affect the height.

{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageBarcodeImages-SetFrameOut-SetFrameOut.cpp" >}}


## **Specify Border Thickness for ITF14 Barcode**
BarcodeGenerator class allows you to specify the Border Thickness of the barcode ITF14 Symbology. Let's experience this feature and know how it works. Developers can customize the border thickness of the ITF14 barcode image using the BorderThickness property of the BarcodeGenerator.ITF class.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageBarcodeImages-SetFrameOut-SetFrameOut.cpp" >}}
