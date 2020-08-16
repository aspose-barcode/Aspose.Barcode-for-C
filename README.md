## Barcode Library for C++ Applications

[Aspose.BarCode for C++](https://products.aspose.com/barcode/cpp) library allows the developers to add barcode generation & recognition capabilities to their own C++ applciations.

Aspose.BarCode for C++ not only creates barcodes but also can export the generated barcodes to a verity of image formats in high quality. Moreover, the developers can easily manipulate the appearance of the generated barcodes such as background color, bar color, image quality, rotation angle, x-dimension, captions, size, resolution and much more.

<p align="center">
<a title="Download complete Aspose.BarCode for C++ source code" href="https://github.com/aspose-barcode/Aspose.Barcode-for-C/archive/master.zip">
	<img src="https://raw.github.com/AsposeExamples/java-examples-dashboard/master/images/downloadZip-Button-Large.png" />
  </a>
</p>

Directory | Description
--------- | -----------
[Examples](Examples)  | A collection of C++ examples that help you learn the product features


## Barcode Generation Features

- [Generate barcode](https://docs.aspose.com/barcode/cpp/generate-barcodes-with-aspose-barcode-apis/) images programmatically.
- [Create PDF417 & MacroPDF417 barcodes](https://docs.aspose.com/barcode/cpp/pdf417-and-macropdf417-barcode/).
- Create C40 or Text encoded [Datamatrix barcodes](https://docs.aspose.com/barcode/cpp/datamatrix-barcode/) with default or custom encoding mode.
- Create QR and MicroQR barcodes and perform encoding.
- Supports error correction for various types of barcodes.
- Generate barcodes with logo or other images inside instead of CodeText.
- Hide CodeText that is too long or reduce the font size of CodeText.
- Adjust image size of 2D barcodes and set aspect ratio.
- Detect Unicode encoding of barcodes.
- CodeText can be [set as per the associated symbology type](https://docs.aspose.com/barcode/cpp/symbologies-for-barcodes/) and the outbound part is truncated.
- Enable image border, [modify barcode image border](https://docs.aspose.com/barcode/cpp/image-formatting-and-display-settings/) width and style.
- Colorize barcode, code text, barcode background, barcode border, and caption.
- Specify [size unit for the barcode image](https://docs.aspose.com/barcode/cpp/image-formatting-and-display-settings/) in document, inch, millimeter, pixel, or point.
- [Enable checksum for the barcodes](https://docs.aspose.com/barcode/cpp/use-checksum-and-supplement-data/) of applicable symbologies.

## Supported Barcode Symbologies

**Generation & Recognition:** Code128, Code39 Standard, Code39 Extended, Code93 Standard, Code93 Extended, Code11, Codabar, BooklandEAN, EAN13, EAN8, EAN128, Interleaved2of5, Standard2of5, MSI, Postnet, Planet, UPCA, UPCE, EAN14(SCC14), SSCC18, ITF14, BarCode supplement, Pdf417, QR, Datamatrix, Matrix 2 of 5, PZN (Pharma Zentral Nummer, Pharmazentralnummer barcode), Deutsche Post Identcode\
**Generation Only:** Aztec, Australia Post

## Read & Write Barcode Images

**Images:** JPEG, TIFF, PNG, BMP, GIF, EXIF

## Save Barcode Labels As

**Images:** EMF, SVG

## Generate Code128 Barcode in PNG Format

```c++
// instantiate barcode object and set CodeText & Barcode Symbology
System::SharedPtr<BarcodeGenerator> generator = System::MakeObject<BarcodeGenerator>(EncodeTypes::Code128, u"1234");

generator->Save(dir + u"output.png");
```

## Hide Barcode Label Text

```c++
System::String codeText = System::String(u"The quick brown fox jumps over the lazy dog\n") + u"The quick brown fox jumps over the lazy dog\n";

// instantiate barcode object and set CodeText, Symbology , and  CodeLocation
System::SharedPtr<BarcodeGenerator> generator = [&] { auto tmp_0 = System::MakeObject<BarcodeGenerator>(EncodeTypes::DataMatrix, codeText); 

tmp_0->get_Parameters()->get_Barcode()->get_CodeTextParameters()->set_Location(CodeLocation::None); return tmp_0; }();
generator->Save(dir + u"output.png", BarCodeImageFormat::Png);
```

[Home](https://www.aspose.com/) | [Product Page](https://products.aspose.com/barcode/cpp) | [Docs](https://docs.aspose.com/barcode/cpp/) | [Demos](https://products.aspose.app/barcode/family) | [API Reference](https://apireference.aspose.com/barcode/cpp) | [Examples](https://github.com/aspose-barcode/Aspose.Barcode-for-C) | [Blog](https://blog.aspose.com/category/barcode/) | [Free Support](https://forum.aspose.com/c/barcode) | [Temporary License](https://purchase.aspose.com/temporary-license)

