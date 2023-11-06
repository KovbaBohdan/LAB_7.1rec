#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_7.1.rec/lab_7.1.rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1LAB71rec
{
	TEST_CLASS(UnitTest1LAB71rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            int rowCount = 3;
            int colCount = 3;
            int** a = new int* [rowCount];
            for (int i = 0; i < rowCount; i++)
            {
                a[i] = new int[colCount];
                for (int j = 0; j < colCount; j++)
                {
                    a[i][j] = 1;
                }
            }

            int S = 0;
            int k = 0;

            Calc(a, rowCount, colCount, 0, 0, S, k);

            Assert::AreEqual(4, S);
            Assert::AreEqual(4, k);

            for (int i = 0; i < rowCount; i++)
            {
                delete[] a[i];
            }
            delete[] a;

		}
	};
}
