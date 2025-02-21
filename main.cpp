#include <string>
#include <iostream>
using namespace std;

int main() {
    int solution = 0;
    int firstNumber = 0;
    int secondNumber = 0;
    string operation = "0";
    cout << "Erste Zahl: ";
    cin >> firstNumber;

    cout << "Zweite Zahl: ";
    cin >> secondNumber;

    cout << "Gebe +,-,* oder / ein: ";
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

    cout << "Das ergebnis ist " << solution;
    return 0;
}