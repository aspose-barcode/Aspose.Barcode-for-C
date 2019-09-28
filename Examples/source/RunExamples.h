#ifndef _CSharp_RunExamples_h_
#define _CSharp_RunExamples_h_

#include <system/string.h>
#include <system/object.h>
#include <system/array.h>

namespace Aspose {

	namespace BarCode {

		namespace Examples {

			namespace CSharp {

				class RunExamples : public System::Object
				{
					typedef RunExamples ThisType;
					typedef System::Object BaseType;

					typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
					RTTI_INFO_DECL();

				public:

					static void Main(System::ArrayPtr<System::String> args);
					static System::String GetDataDir_ManageBarCodes();
					static System::String GetDataDir_ManageBarCodesImages();
					static System::String GetDataDir_CreateAndManage2DBarCodes();
					static System::String GetDataDir_ManageAndOptimizeBarcodeRecognition();

				private:

					static System::String GetDataDir_Data();

				};

			} // namespace CSharp
		} // namespace Examples
	} // namespace BarCode
} // namespace Aspose

#endif // _CSharp_RunExamples_h_

