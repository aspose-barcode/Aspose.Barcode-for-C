## Aspose.BarCode for C++

[Aspose.BarCode for C++](https://products.aspose.com/barcode/cpp) library allows the developers to add barcode generation & recognition capabilities to their own C++ applciations.

Aspose.BarCode for C++ not only creates barcodes but also can export the generated barcodes to a verity of image formats in high quality. Moreover, the developers can easily manipulate the appearance of the generated barcodes such as background color, bar color, image quality, rotation angle, x-dimension, captions, size, resolution and much more.

<p align="center">
<a title="Download complete Aspose.BarCode for C++ source code" href="https://github.com/aspose-barcode/Aspose.Barcode-for-C/archive/master.zip">
	<img src="https://raw.github.com/AsposeExamples/java-examples-dashboard/master/images/downloadZip-Button-Large.png" />
  </a>
</p>

This repository contains [Examples](Examples) for Aspose.BarCode for C++ to help you learn and write your own applications.

Directory | Description
--------- | -----------
[Examples](Examples)  | A collection of C++ examples that help you learn the product features


# Barcode Generation & Scanning API for C++

[Aspose.BarCode for C++](https://products.aspose.com/barcode/cpp) enables the developers to generate, scan and manipulate barcodes from within their own C++ applications. C++ Barcode Library allows to modify and customize barcode properties including font, foreground & background colors, alignment, barcode label location and barcode caption.

## Barcode Generation Features

- [Generate barcode](https://docs.aspose.com/display/barcodecpp/Generate+Barcodes+with+Aspose.BarCode+APIs) images programmatically.
- [Create a PDF417 Barcode](https://docs.aspose.com/display/barcodecpp/PDF417+and+MacroPDF417+Barcode), set error correction level, and compaction mode.
- [Generate multiple MacroPdf417](https://docs.aspose.com/display/barcodecpp/PDF417+and+MacroPDF417+Barcode#PDF417andMacroPDF417Barcode-GenerateMultipleMacroPdf417BarcodesforLargeorMultipleCodetextValues) barcodes.
- Create C40 or Text encoded [Datamatrix barcodes](https://docs.aspose.com/display/barcodecpp/Datamatrix+Barcode) with default or custom encoding mode.
- Create QR and MicroQR barcodes and perform encoding.
- Supports error correction for various types of barcodes.
- Generate barcodes with logo or other images inside instead of CodeText.
- [Hide CodeText that is too long](https://docs.aspose.com/display/barcodecpp/Managing+2D+Barcodes#Managing2DBarcodes-HideBarCodeCodeText) or [reduce the font size](https://docs.aspose.com/display/barcodecpp/Managing+2D+Barcodes#Managing2DBarcodes-ReducethefontsizeofCodeText) of CodeText.
- [Adjust image size](https://docs.aspose.com/display/barcodecpp/Managing+2D+Barcodes#Managing2DBarcodes-Adjusting2Dimagessize) of 2D barcodes and [set aspect ratio](https://docs.aspose.com/display/barcodecpp/Managing+2D+Barcodes#Managing2DBarcodes-SettingAspectRatioofBarcodes).
- [Detect Unicode encoding](https://docs.aspose.com/display/barcodecpp/Managing+2D+Barcodes#Managing2DBarcodes-DetectUnicodeEncodingofBarcode) of barcodes.
- CodeText can be [set as per the associated symbology type](https://docs.aspose.com/display/barcodecpp/Symbologies+for+Barcodes#SymbologiesforBarcodes-CodetextversusSymbology) and the outbound part is truncated.
- Enable image border, [modify barcode image border](https://docs.aspose.com/display/barcodecpp/Image+Formatting+and+Display+Settings#ImageFormattingandDisplaySettings-WorkingwithImageBorders) width and style.
- Option to [colorize barcode](https://docs.aspose.com/display/barcodecpp/Image+Formatting+and+Display+Settings#ImageFormattingandDisplaySettings-ColorizeportionofBarcodeImage), code text, barcode background, barcode border, and caption.
- Specify [size unit for the barcode image](https://docs.aspose.com/display/barcodecpp/Image+Formatting+and+Display+Settings#ImageFormattingandDisplaySettings-SetSizeUnitfortheBarcodeImage) in document, inch, millimeter, pixel, and point.
- [Enable checksum for the barcodes](https://docs.aspose.com/display/barcodecpp/Use+Checksum+and+Supplement+Data#UseChecksumandSupplementData-Aspose.BarCodeandChecksum) of applicable symbologies.
- Lots of other [barcode processing features](https://docs.aspose.com/display/barcodecpp/Developer+Guide).

## Supported Barcode Symbologies

**Generation & Recognition:** Code128, Code39 Standard, Code39 Extended, Code93 Standard, Code93 Extended, Code11, Codabar, BooklandEAN, EAN13, EAN8, EAN128, Interleaved2of5, Standard2of5, MSI, Postnet, Planet, UPCA, UPCE, EAN14(SCC14), SSCC18, ITF14, BarCode supplement, Pdf417, QR, Datamatrix, Matrix 2 of 5, PZN (Pharma Zentral Nummer, Pharmazentralnummer barcode), Deutsche Post Identcode\
**Generation Only:** Aztec, Australia Post

## Read & Write Barcode Labels

**Images:** JPEG, TIFF, PNG, BMP, GIF, EXIF

## Save Barcode Labels As

**Images:** EMF, SVG

## Generate Code128 Barcode in PNG Format

You can execute below code snippet to see how Aspose.BarCode API works in your development environment. You may also check the [GitHub Repository](https://github.com/aspose-barcode/Aspose.Barcode-for-C) for other common usage scenarios.

```c++
// instantiate barcode object and set CodeText & Barcode Symbology
System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::Code128, u"1234");
generator->Save(dir + u"output.png");
```

## Hide Barcode Label Text using C++

Aspose.BarCode for C++ allows you to customize various properties of barcodes, such as, borders, color, type, bar height as well as barcode text. Following example shows, how simple it is to hide the barcode text using C++:

```c++
System::String codeText = System::String(u"The quick brown fox jumps over the lazy dog\n") + u"The quick brown fox jumps over the lazy dog\n";

// instantiate barcode object and set CodeText, Symbology , and  CodeLocation
System::SharedPtr<BarcodeGenerator> generator = [&] { auto tmp_0 = System::MakeObject<BarcodeGenerator>(EncodeTypes::DataMatrix, codeText); 

tmp_0->get_Parameters()->get_Barcode()->get_CodeTextParameters()->set_Location(CodeLocation::None); return tmp_0; }();
generator->Save(dir + u"output.png", BarCodeImageFormat::Png);
```

[Product Page](https://products.aspose.com/barcode/cpp) | [Docs](https://docs.aspose.com/display/barcodecpp/Home) | [Demos](https://products.aspose.app/barcode/family) | [API Reference](https://apireference.aspose.com/barcode/cpp) | [Examples](https://github.com/aspose-barcode/Aspose.Barcode-for-C) | [Blog](https://blog.aspose.com/category/barcode/) | [Free Support](https://forum.aspose.com/c/barcode) | [Temporary License](https://purchase.aspose.com/temporary-license)

