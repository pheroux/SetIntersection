#include "pch.h"
#include "CppUnitTest.h"
#include "../SetOperations/set_operations.h"
#include <sstream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MyProjectTests
{
    TEST_CLASS(SetOperationsTests)
    {
    public:
        TEST_METHOD(ReadSetFromStream)
        {
            std::istringstream input_stream("1 2 3 4 5");
            std::set<int> expected = { 1, 2, 3, 4, 5 };
            std::set<int> actual = read_set_from_stream(input_stream);
            Assert::IsTrue(expected == actual);
        }

        TEST_METHOD(IntersectionOfSets)
        {
            std::set<int> set1 = { 1, 2, 3, 4, 5 };
            std::set<int> set2 = { 3, 4, 5, 6, 7 };
            std::set<int> expected = { 3, 4, 5 };
            std::set<int> actual = intersection_of_sets(set1, set2);
            Assert::IsTrue(expected == actual);
        }
    };
}