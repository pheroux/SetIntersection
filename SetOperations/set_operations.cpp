#include "pch.h"
#include "set_operations.h"
#include <algorithm>
#include <iterator>
#include <sstream>

std::set<int> read_set_from_stream(std::istream& input_stream) {
    std::set<int> result;
    int number;

    while (input_stream >> number) {
        result.insert(number);
    }

    return result;
}

std::set<int> intersection_of_sets(const std::set<int>& set1, const std::set<int>& set2) {
    std::set<int> intersection;
    std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(),
        std::inserter(intersection, intersection.begin()));

    return intersection;
}
