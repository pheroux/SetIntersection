#pragma once

#include <set>
#include <string>
#include <istream>

std::set<int> read_set_from_stream(std::istream& input_stream);
std::set<int> intersection_of_sets(const std::set<int>& set1, const std::set<int>& set2);

