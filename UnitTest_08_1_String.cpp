#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08_1_String/Lab_08_1_String.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab081String
{
    TEST_CLASS(UnitTestLab081String)
    {
    public:
        TEST_METHOD(TestMethodStringMethods)
        {
            string testStr1 = "xxxxhelloyyyy";
            Assert::IsTrue(Include(testStr1));

            string testStr2 = "abcde";
            Assert::IsFalse(Include(testStr2));

            string testStr3 = "a1111b2222c";
            string res = Change(testStr3);
            Assert::AreEqual(string("a**b**c"), res);
        }
    };
}