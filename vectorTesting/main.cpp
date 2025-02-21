#include <string>
#include <iostream>
#include <vector>

int main() {
    int userInput;
    std::vector <int> test;
    while (true) {
        std::cin >> userInput;
        test.push_back(userInput);
        std::cout << "The list is " << test.size() << " character long";
    }

    return 0;
}