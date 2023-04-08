// This program demonstrates the use of the set_operations library to compute
// the intersection of two sets of integers entered by the user.

// The set_operations library contains the read_set_from_stream and intersection_of_sets
// functions that are used in this program.

#include "../SetOperations/set_operations.h" // include the set_operations library
#include <iostream>
#include <sstream>

int main() {
    std::string input_line;

    // prompt the user to enter the first set of integers
    std::cout << "Enter the first set of integers separated by spaces: ";

    // read the input line and convert it to a set of integers
    std::getline(std::cin, input_line);
    std::istringstream input_stream1(input_line);
    std::set<int> set1 = read_set_from_stream(input_stream1);

    // prompt the user to enter the second set of integers
    std::cout << "Enter the second set of integers separated by spaces: ";

    // read the input line and convert it to a set of integers
    std::getline(std::cin, input_line);
    std::istringstream input_stream2(input_line);
    std::set<int> set2 = read_set_from_stream(input_stream2);

    // compute the intersection of the two sets
    std::set<int> intersection = intersection_of_sets(set1, set2);

    // print the intersection to the console
    std::cout << "Intersection of the two sets: ";
    for (const auto& num : intersection) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
