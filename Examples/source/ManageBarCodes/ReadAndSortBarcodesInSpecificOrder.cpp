/*
This project uses Automatic Package Restore feature of NuGet to resolve Aspose.BarCode for .NET API reference
when the project is build. Please check https://docs.nuget.org/consume/nuget-faq for more information.
If you do not wish to use NuGet, you can manually download Aspose.BarCode for .NET API from http://www.aspose.com/downloads,
install it and then add its reference to this project. For any issues, questions or suggestions
please feel free to contact us using http://www.aspose.com/community/forums/default.aspx
*/
#include "ReadAndSortBarcodesInSpecificOrder.h"

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/primitive_types.h>
#include <system/object.h>
#include <system/details/dispose_guard.h>
#include <system/console.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/array.h>
#include <drawing/point.h>
#include <cstdint>
#include <BarCodeRecognition/Recognition/Region/BarCodeRegion.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/DecodeTypes/SingleDecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/DecodeTypes/DecodeType.h>
#include <BarCodeRecognition/Recognition/RecognitionSession/BarCodeReader.h>

#include "RunExamples.h"


using namespace Aspose::BarCode::BarCodeRecognition;
namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				namespace ManageBarCodes {

					RTTI_INFO_IMPL_HASH(30539438u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::ReadAndSortBarcodesInSpecificOrder::FoundComparator, ThisTypeBaseTypesInfo);

					int32_t ReadAndSortBarcodesInSpecificOrder::FoundComparator::Compare(ReadAndSortBarcodesInSpecificOrder::FoundBarCodes found1, ReadAndSortBarcodesInSpecificOrder::FoundBarCodes found2) const
					{
						System::ArrayPtr<System::Drawing::Point> found1Points = found1.region->get_Points();
						System::ArrayPtr<System::Drawing::Point> found2Points = found2.region->get_Points();
						System::Drawing::Point found1XyMin(std::numeric_limits<int32_t>::max(), std::numeric_limits<int32_t>::max());
						System::Drawing::Point found2XyMin(std::numeric_limits<int32_t>::max(), std::numeric_limits<int32_t>::max());

						{
							for (int i_ = 0; i_ < found1Points->Count(); ++i_)
							{
								System::Drawing::Point p = found1Points[i_];
								{
									if (p.get_X() < found1XyMin.get_X() && p.get_Y() < found1XyMin.get_Y())
									{
										found1XyMin.set_X(p.get_X());
										found1XyMin.set_Y(p.get_Y());
									}
								}
							}
						}

						{
							for (int i_ = 0; i_ < found2Points->Count(); ++i_)
							{
								System::Drawing::Point p = found2Points[i_];
								{
									if (p.get_X() < found2XyMin.get_X() && p.get_Y() < found2XyMin.get_Y())
									{
										found2XyMin.set_X(p.get_X());
										found2XyMin.set_Y(p.get_Y());
									}
								}
							}
						}
						if (found1XyMin.get_X() < found2XyMin.get_X() && found1XyMin.get_Y() < found2XyMin.get_Y())
						{
							return -1;
						}
						if (found1XyMin.get_X() > found2XyMin.get_X() && found1XyMin.get_Y() > found2XyMin.get_Y())
						{
							return 1;
						}
						if (found1XyMin.get_Y() < found2XyMin.get_Y())
						{
							return -1;
						}
						if (found1XyMin.get_Y() > found2XyMin.get_Y())
						{
							return 1;
						}
						return 0;
					}

					RTTI_INFO_IMPL_HASH(2462806283u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::ReadAndSortBarcodesInSpecificOrder::FoundBarCodes, ThisTypeBaseTypesInfo);

					ReadAndSortBarcodesInSpecificOrder::FoundBarCodes::FoundBarCodes(System::String text, System::SharedPtr<Aspose::BarCode::BarCodeRecognition::BarCodeRegion> reg)
					{
						CodeText = text;
						region = reg;
					}

					ReadAndSortBarcodesInSpecificOrder::FoundBarCodes::FoundBarCodes() { }

					RTTI_INFO_IMPL_HASH(3389374570u, ::Aspose::BarCode::Examples::CSharp::ManageBarCodes::ReadAndSortBarcodesInSpecificOrder, ThisTypeBaseTypesInfo);

					void ReadAndSortBarcodesInSpecificOrder::Run()
					{

						// The path to the documents directory.
						System::String dataDir = RunExamples::GetDataDir_ManageBarCodes();
						System::SharedPtr<System::Collections::Generic::List<ReadAndSortBarcodesInSpecificOrder::FoundBarCodes>> found = System::MakeObject<System::Collections::Generic::List<ReadAndSortBarcodesInSpecificOrder::FoundBarCodes>>();
						{
							System::SharedPtr<BarCodeReader> reader = System::MakeObject<BarCodeReader>(dataDir + u"tiffImage.tif", DecodeType::Code128);
							// Clearing resources under 'using' statement
							System::Details::DisposeGuard<1> __dispose_guard_0({ reader });
							// ------------------------------------------

							try
							{
								while (reader->Read())
								{
									found->Add(ReadAndSortBarcodesInSpecificOrder::FoundBarCodes(reader->GetCodeText(), reader->GetRegion()));
								}
							}
							catch (System::Exception & e)
							{
								System::Console::WriteLine(e->get_Message());
							}
							catch (...)
							{
								__dispose_guard_0.SetCurrentException(std::current_exception());
							}
						}
						found->Sort(System::MakeObject<ReadAndSortBarcodesInSpecificOrder::FoundComparator>());
						int32_t i = 1;

						{
							auto barcode_enumerator = (found)->GetEnumerator();
							decltype(barcode_enumerator->get_Current()) barcode;
							while (barcode_enumerator->MoveNext() && (barcode = barcode_enumerator->get_Current(), true))
							{
								System::Console::WriteLine(System::String(u"Codetext ( ") + i + u" ): " + barcode.CodeText);
								System::Console::WriteLine(System::String(u"Top left coordinates: X = ") + barcode.region->get_Points()[0].get_X() + u", Y = " + barcode.region->get_Points()[0].get_Y());
								System::Console::WriteLine(System::String(u"Bottom left coordinates: X = ") + barcode.region->get_Points()[1].get_X() + u", Y = " + barcode.region->get_Points()[1].get_Y());
								System::Console::WriteLine(System::String(u"Bottom right coordinates: X = ") + barcode.region->get_Points()[2].get_X() + u", Y = " + barcode.region->get_Points()[2].get_Y());
								System::Console::WriteLine(System::String(u"Top right coordinates: X = ") + barcode.region->get_Points()[3].get_X() + u", Y = " + barcode.region->get_Points()[3].get_Y());
								System::Console::WriteLine();
								i++;
							}
						}


					}

				} // namespace ManageBarCodes
			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose
