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

	};
}
