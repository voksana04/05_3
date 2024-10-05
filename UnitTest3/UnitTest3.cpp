#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\admin\source\repos\Project_5.3\Project_5.3\lab_5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 1.0;
			double result = z(x);
			double expected = z(cos(x) + 1) / (sin(x) * sin(x) + exp(x));

			Assert::AreEqual(expected, result, 0.0001);  
		}
	};
}
