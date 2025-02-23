#include <string>
#include <iostream>
using namespace std;


int main() {
    int solution = 0;
    int firstNumber = 0;
    int secondNumber = 0;
    while (true) {
        string operation = "0";
        cout << "First Number or -0 to stop: ";
        cin >> firstNumber;
        if (firstNumber == -0) {
            break;
        }
        cout << "Second Number: ";
        cin >> secondNumber;

        cout << "Put +,-,* or / in: ";
        cin >> operation;

        if (operation == "+") {
            solution = firstNumber + secondNumber;
        }
        if (operation == "-") {
            solution = firstNumber - secondNumber;
        }
        if (operation == "*") {
            solution = firstNumber * secondNumber;
        }
        if (operation == "/") {
            solution = firstNumber / secondNumber;
        }

        cout << "The sum is: " << solution;
    }

    return 0;
}