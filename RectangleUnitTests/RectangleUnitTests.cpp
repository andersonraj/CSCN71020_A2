#include "pch.h"
#include "CppUnitTest.h"
#include "../BCSRec/main.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangleUnitTests
{
	TEST_CLASS(RectangleUnitTests)
	{
	public:
		
		//Test for getPerimeter()
		TEST_METHOD(TestGetPerimeter)
		{
			int length = 10;
			int width = 5;
			int perimeter = getPerimeter(&length, &width);
			Assert::AreEqual(30, perimeter);
		}

		//Test for getArea()
		TEST_METHOD(TestGetArea)
		{
			int length = 10;
			int width = 5;
			int area = getArea(&length, &width);
			Assert::AreEqual(50, area);
		}

        // Test for setting a valid length within the valid range
        TEST_METHOD(TestSetLength_ValidInput)
        {
            int length = 0; 
            setLength(50, &length); 
            Assert::AreEqual(50, length); 
        }

        // Test for setting the length to the minimum valid value (edge case)
        TEST_METHOD(TestSetLength_MinimumValue)
        {
            int length = 0;
            setLength(1, &length); 
            Assert::AreEqual(1, length);
        }

        // Test for invalid input (below minimum value)
        TEST_METHOD(TestSetLength_BelowMinimum)
        {
            int length = 10; 
            setLength(0, &length); 
            Assert::AreEqual(10, length);
        }

        // Test for setting a valid width within the valid range
        TEST_METHOD(TestSetWidth_ValidInput)
        {
            int width = 0; 
            setWidth(30, &width);
            Assert::AreEqual(30, width);
        }

        // Test for setting the width to the maximum valid value (edge case)
        TEST_METHOD(TestSetWidth_MaximumValue)
        {
            int width = 0;
            setWidth(99, &width);
            Assert::AreEqual(99, width);
        }

        // Test for invalid width input (above maximum value)
        TEST_METHOD(TestSetWidth_AboveMaximum)
        {
            int width = 10;
            setWidth(100, &width);
            Assert::AreEqual(10, width);
        }
	};
}
