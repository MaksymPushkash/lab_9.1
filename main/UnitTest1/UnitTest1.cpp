#include "CppUnitTest.h"
#include <cmath>
#include "../main/dod.h"
#include "../main/sum.h"
#include "../main/var.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsVar;
using namespace nsDod;
using namespace nsSum;

namespace UnitTestProject
{
    TEST_CLASS(UnitTestProject)
    {
    public:

        TEST_METHOD(TestDod)
        {
            // ����������� ������ ��� �����
            x = 2.0;
            n = 1;
            a = 1 / x; // ��������� �������� �������

            // ��������� �������� ���� ������� ������� dod()
            double expected = a * (2 * n - 1) / ((2 * n + 1) * x * x);

            // ������ �������
            dod();

            // ��������
            Assert::AreEqual(expected, a, 1e-5, L"Function dod() returned an incorrect value");
        }

        TEST_METHOD(TestSum)
        {
            // ����������� ������ ��� �����
            x = 2.0;
            eps = 1e-5;

            // ������ ������� sum(), ��� ������� �������� s �� n
            sum();

            // ��������� �������� ��� ���������
            double expectedSum = atanh(1 / x);

            // �������� �������� s �� ������� �������� n
            Assert::AreEqual(expectedSum, s, 1e-5, L"Function sum() returned an incorrect sum value");
            Assert::IsTrue(n > 0, L"Number of iterations n should be greater than 0");
        }
    };
}
