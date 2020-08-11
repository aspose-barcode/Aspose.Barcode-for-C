---
title: Improve Barcode Recognition
type: docs
weight: 20
url: /cpp/improve-barcode-recognition/
---

## **Optimized Scan for Barcode Recognition**
There are two approaches addressing recognition optimization, the first is towards accuracy, the second is towards speed:
### **Pinpointing barcode**
- SymbologyType setting. If the barcode type is unknown, try not to pass the symbology type (BarCodeReadType) in the constructor. Instead, try to recognize separately.
- BarCodeReader's internal optimization schema will sacrifice accuracy for speed if symbology type is not specified in the BarCodeReader’s constructor.
### **Speed up**
- Reduce image size. Larger images will lead to longer processing time.
## **Optimize Barcode Recognition Process Through Multi-Threading**
ProcessorSettings class of namespace Aspose.BarCodeRecognition allows us to speed up the recognition process by defining the settings to involve multi-threading calculations and setting the number of processor cores to use. Let's experience this feature and see how it works.

Aspose.BarCodeRecognition namespace introduced a class ProcessorSettings to define the settings for involving multi-threading & number of processor cores to be used. ProcessorSettings can be found as a static member of class BarCodeReader. Developers can set the UseAllCores property to TRUE or FALSE to specify whether to use all cores of the processor or not. In case it is set to FALSE then set how many cores to be used by setting the UseOnlyThisCoresCount propery that takes in an integer value.

The following code snippet demonstrates you how to optimize Barcode Recognition Process
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageAndOptimizeBarcodeRecognition-OptimizingBarCodeRecognitionProcess-OptimizingBarCodeRecognitionProcess.cpp" >}}
## **Better and Faster Image Processing for Barcode Recognition**
Aspose.BarCode provides better and faster barcode recognition with the [QualitySettings](https://apireference.aspose.com/cpp/barcode/class/aspose.bar_code.bar_code_recognition.quality_settings/) class which allows to configure recognition quality and speed manually:

The following code example demonstrates how to use QualitySettings.
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageAndOptimizeBarcodeRecognition-SwitchBarcodeRecognitionModes-SwitchBarcodeRecognitionModes.cpp" >}}
## **Barcode Recognition Modes**
Aspose.BarCode provides some recognition modes, those help developers to quickly set up and tune the processing speed and quality in a way which is the most appropriate for their need.

- **Hight Performance** 
  QualitySettings->HighPerformance
  HighPerformance recognition quality preset. High-quality barcodes are recognized well in this mode.
- **High Quality** 
  QualitySettings->HighQuality
  HighQuality recognition quality preset. This preset is developed for low-quality barcodes.
- **Max Barcodes** 
  QualitySettings->MaxBarCodes
  MaxBarCodes recognition quality preset. This preset is developed to recognize all possible barcodes, even incorrect barcodes.
- **Normal Quality** 
  QualitySettings->NormalQuality
  Normal quality recognition quality preset. Suitable for most of the barcodes.

The following code snippet shows how to switch the barcode recognition modes:
#### **C#**
{{< gist "aspose-com-gists" "19ae78b7730b34bc9f7a146a61e496ea" "Examples-CPP-ManageAndOptimizeBarcodeRecognition-ImageProcessingBarcodeRecognition-ImageProcessingBarcodeRecognition.cpp" >}}
