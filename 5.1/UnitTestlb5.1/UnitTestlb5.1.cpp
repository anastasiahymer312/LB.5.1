#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1/lb_5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlb51
{
	TEST_CLASS(UnitTestlb51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result = k(1, 2 );
			Assert::AreEqual(result,-0.2, 0.01);
		}
	};
}
