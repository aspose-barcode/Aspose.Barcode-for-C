---
title: Image Formatting and Display Settings
type: docs
weight: 10
url: /cpp/image-formatting-and-display-settings/
---

## **Working with Image Borders**
Aspose.BarCode allows its users to handle everything about barcode image borders, which include setting border style, margins and its width. Let's experience these features one by one.
### **Border Style**
Developers can customize the border style of the barcode image using BorderDashStyle property that is included in all barcode generating classes in Aspose.BarCode. Aspose.BarCode offers some built-in border styles which are contained in an enumeration also named as BorderDashStyle. Developers can select the desired border style from this enumeration and then assign that selected border style to the BorderDashStyle property of the barcode class. The pre-defined border styles in BorderDashStyle enumeration are as follows:

|**Border Styles**|**Description**|
| :- | :- |
|Dash|Specifies a line consisting of dashes|
|DashDot|Specifies a line consisting of a repeating pattern of dash-dot|
|DashDotDot|Specifies a line consisting of a repeating pattern of dash-dot-dot|
|Dot|Specifies a line consisting of dots|
|Solid|Specifies a solid line|
The above described border styles are demonstrated graphically in the figure below:

|**Pre-defined border styles**|
| :- |
|![todo:image_alt_text](image-formatting-and-display-settings_1.jpg)|
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageBarCodes-SetBorderStyle-SetBorderStyle.cpp" >}}

{{% alert color="primary" %}} 

Aspose.BarCode for Java does not support Border features.

{{% /alert %}} 
### **Border Width**
A very simple but handy feature is to set the border width of the barcode image. The border can be made thick or thin by setting BorderWidth property of the barcode class.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageBarCodes-SetBorderStyle-BorderWidth.cpp" >}}


### **Enable Image Border**
Developers may also decide whether to show or hide an image border by setting the BorderVisible property of the barcode class to true or false.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageBarCodes-EnableImageBorder-EnableImageBorder.cpp" >}}



A complete example to handle borders of the barcode image is given below.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageBarcodeImages-BarcodeImageBorders-BarcodeImageBorders.cpp" >}}


## **Colorize portion of Barcode Image**
Normally, barcodes are generated and printed in black and white colors. But, what if it is required to generate a colored barcode?. Keeping this possible requirement in mind, Aspose.BarCode gives free hand to developers to change the colors of:

- Barcode
- Code text
- Barcode Background
- Barcode Border
- Caption

All barcode classes ( BarCodeBuilder, BarCodeControl and BarCodeWebControl ) provided by Aspose.BarCode have some common properties that are used to colorize different parts of a barcode as follows:

- ForeColor property to assign any color to the Barcode
- CodeTextColor property to assign any color to the Code text of the barcode
- BackColor property to set the background color of the barcode
- BorderColor property to set the Border color of the barcode

Developers can select any desired color and then assign that selected color to any of the properties (ForeColor, CodeTextColor, BackColor or BorderColor) according to their custom requirements. The following code snippet shows you how to 
colorize portion of barcode Image.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageBarcodeImages-ColorizeAnyPartoftheBarcodeImage-ColorizeAnyPartoftheBarcodeImage.cpp" >}}


## **Control Bars Filling of 1D Barcodes**
Aspose.BarCode supports the new property FilledBars for BarCodeBuilder for generating filled or not filled bars. This property works only with 1D barcodes. The default value is true (filled).
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageBarcodeImages-ControlBarsFillingofOneDBarcodes-ControlBarsFillingofOneDBarcodes.cpp" >}}


## **Set Barcode Image Padding**
Developers can set the border paddings of the barcode image by setting the padding property found in any BarcodeGenerator class provided by Aspose.BarCode. The Padding property takes an instance of Aspose.BarCode.Generation.Padding class that specifies Left, Right, Top and Bottom padding settings. To understand clearly, please have a look at the figure below:

|**Understanding Barcode Image Padding**|
| :- |
|![todo:image_alt_text](image-formatting-and-display-settings_2.png)|
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageBarcodeImages-BarcodeImageMargins-BarcodeImageMargins.cpp" >}}


## **Rotate Barcode Image**
Aspose.BarCode allows developers to rotate the barcode image by setting the RotationAngleF property of the barcode class.

|**Demonstration of common rotation angles**|
| :- |
|![todo:image_alt_text](image-formatting-and-display-settings_3.jpg)|
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageBarcodeImages-RotateBarcode-RotateBarcode.cpp" >}}

You might set BarCodeBuilders's ImageQuality to AntiAlias to achieve better image quality.
## **Customize Barcode Image Resolution**
What if developers need to set the resolution of their barcode images according to their custom settings? Well, Aspose.BarCode also addresses this issue and provides Resolution class that serves developers to customize the resolution of their barcode images in any way they want. Resolution property gets or sets the resolution of the BarCode image. One value for both dimensions.



{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageBarcodeImages-BarcodeImageResolution-BarcodeImageResolution.cpp" >}}




## **Set Size Unit for the Barcode Image**
To change the measuring unit of the barcode image, developers can make use of Unit class properties of any barcode class (BarcodeGenerator, BarCodeControl or BarCodeWebControl) provided by Aspose.BarCode. The unit specifies the size value in different units as follows:

|**Measuring Units**|**Description**|
| :- | :- |
|Document|Specifies the document unit (1/300 inch) as the unit of measure|
|Inch|Specifies the inch as the unit of measure|
|Millimeter|Specifies the millimeter as the unit of measure|
|Pixel|Specifies a device pixel as the unit of measure|
|Point|Specifies a printer's point (1/72 inch) as the unit of measure|
The default size measurement unit for the barcode image is Millimeter. An example is given below that changes the bar height of the barcode but the measuring unit being used for the bar height is Point.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageBarcodeImages-SetSizeUnitForBarcodeImage-SetSizeUnitForBarcodeImage.cpp" >}}
## **Generate Barcode by Specifying Custom Image Size**
Aspose.BarCode automatically adjusts the image size (width and height) according to the generated barcode’s size. But, you can also control the image size by specifying the height and width of the image using BarcodeGenerator.BarCodeHeight and BarCodeWidth properties. BarcodeGenerator.AutoSizeMode should be set to none in order to customize the image size. In the below example, we will generate a Code39Standard barcode with customized height and width.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageBarcodeImages-BarcodeCustomSize-BarcodeCustomSize.cpp" >}}
