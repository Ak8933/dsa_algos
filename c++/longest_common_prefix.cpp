#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> strings = {"hello", "helpy", "helicopter", "hello"};

    // Find the minimum size among all strings in the vector
    size_t minSize = strings.empty() ? 0 : strings[0].size();
    for (const auto& str : strings) {
        minSize = std::min(minSize, str.size());
    }

    size_t index = 0;

    // Compare characters at the same index in all strings until they differ
    for (size_t i = 0; i < minSize; i++) {
        char ch = strings[0][i];
        for (size_t j = 1; j < strings.size(); j++) {
            if (strings[j][i] != ch) {
                std::cout << "Strings are equal until index: " << index << std::endl;
                return 0;
            }
        }
        index++;
    }

    // All characters at the same index in all strings are equal
    // std::cout << "Strings are equal until index: " << index << std::endl;

    return 0;
}
