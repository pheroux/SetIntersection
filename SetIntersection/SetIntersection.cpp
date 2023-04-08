#include "../SetOperations/set_operations.h"
#include <iostream>
#include <sstream>

int main() {
    std::string input_line;
    std::cout << "Enter the first set of integers separated by spaces: ";
    std::getline(std::cin, input_line);
    std::istringstream input_stream1(input_line);
    std::set<int> set1 = read_set_from_stream(input_stream1);

    std::cout << "Enter the second set of integers separated by spaces: ";
    std::getline(std::cin, input_line);
    std::istringstream input_stream2(input_line);
    std::set<int> set2 = read_set_from_stream(input_stream2);

    std::set<int> intersection = intersection_of_sets(set1, set2);

    std::cout << "Intersection of the two sets: ";
    for (const auto& num : intersection) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}