#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" int setLength(int input, int* length);
extern "C" int setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(RectanglePerimeter)
		{
			// this is testing the functionality of calculating the 
			// perimeter of a rectangle

			int length = 0;
			length = 1;
			int width = 0;
			width = 0.5;
			int Result = 0;

			int getPerimeter(int* length, int* width);
			Result = 2 * (width + length);
			Assert::AreNotEqual(3, Result);

		}
		TEST_METHOD(RectangleArea)
		{
			// this is testing the functionality of calculating the 
			// perimeter of a rectangle

			
			int length = 1;
			int width = 1;
			int Result = 0;

			int getArea(int* length, int* width);
			Result = length * width;

			Assert::AreEqual(1, Result);
		}
		TEST_METHOD(InputLengthFunctionality1)
		{
			// this is testing the functionality of using an input
			// to set the length of a rectangle from integers between 1 to 99
			//Test 1: Setting reasonable length

			int length = 0;
			int Result = 0;
			int input = 42;

			void setLength(int input, int* length);

			if (input >= 1 && input <= 99)
			{
				length = input;
			}

			Assert::AreEqual(input, length);
		}

		TEST_METHOD(InputLengthFunctionality2)
		{
			// this is testing the functionality of using an input
			// to set the length of a rectangle from integers between 1 to 99

			//Test 2: lower boundary 
			int length = 0;
			int Result = 0;
			int input = 1;
			void setLength(int input, int* length);

			Assert::AreNotEqual(input, length);
		}

		TEST_METHOD(InputLengthFunctionality3)
		{
			// this is testing the functionality of using an input
			// to set the length of a rectangle from integers between 1 to 99
		
			//Test 3: upper boundary
			int length = 0;
			int Result = 0;
			int input = 99;

			void setLength(int input, int* length);

			Assert::AreNotEqual(input, length);
		}

		TEST_METHOD(InputWidthFunctionality1)
		{
			// this is testing the functionality of using an input
			// to set the width of a rectangle from integers between 1 to 99

			//Test 1: Setting reasonable length
			int width = 0;
			int Result = 0;
			int input = 35;

			void setWidth(int input, int* width);

			if (input >= 1 && input <= 99)
			{
				width = input;
			}

			Assert::AreEqual(input, width);
		}

		TEST_METHOD(InputWidthFunctionality2)
		{
			// this is testing the functionality of using an input
			// to set the width of a rectangle from integers between 1 to 99

			//Test 2: testing negative integer
			int width = 0;
			int input = -7;

			void setWidth(int input, int* width);

			Assert::AreNotEqual(input, width);
		}

		TEST_METHOD(InputWidthFunctionality3)
		{
			// this is testing the functionality of using an input
			// to set the width of a rectangle from integers between 1 to 99

			// Test 3: testing decimals
			int width = 0;
			int Result = 0;
			int input = 55.3;

			void setWidth(int input, int* width);

			Assert::AreNotEqual(input, width);

		}
		
     };
}
