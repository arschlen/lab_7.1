#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_7.1/7.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Arrange
			const int rowCount = 4;
			const int colCount = 5;
			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];

			// Створення тестової матриці
			a[0][0] = 20; a[0][1] = 5; a[0][2] = 30; a[0][3] = 10; a[0][4] = 2;
			a[1][0] = 10; a[1][1] = 3; a[1][2] = 40; a[1][3] = 25; a[1][4] = 6;
			a[2][0] = 10; a[2][1] = 5; a[2][2] = 25; a[2][3] = 15; a[2][4] = 3;
			a[3][0] = 30; a[3][1] = 2; a[3][2] = 35; a[3][3] = 20; a[3][4] = 4;

			// Act
			Sort(a, rowCount, colCount);

			// Assert
			Assert::AreEqual(a[0][0], 10);
			Assert::AreEqual(a[0][1], 3);
			Assert::AreEqual(a[1][0], 10);
			Assert::AreEqual(a[1][1], 5);
			Assert::AreEqual(a[2][0], 20);
			Assert::AreEqual(a[3][0], 30);

			// Clean up
			for (int i = 0; i < rowCount; i++)
				delete[] a[i];
			delete[] a;
		}
	};
}
