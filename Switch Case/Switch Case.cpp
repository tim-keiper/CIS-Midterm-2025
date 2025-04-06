#include <iostream>
using namespace std;

void switchCaseCalculator() {
    // Declare variables
    double num1, num2;
    char operation;

    // Ask the user for two numbers and the operation they want to perform
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    
    cout << "Enter second number: ";
    cin >> num2;

    // Switch statement to perform the operation
    switch (operation) {
    case '+':
        cout << num1 << " plus " << num2 << " equals " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " minus " << num2 << " equals " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " multiplied by " << num2 << " equals " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << num1 << " divided by " << num2 << " equals " << num1 / num2 << endl;
        }
        else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;
    default:
        cout << "Invalid operation!" << endl;
        break;
    }
}

int main() {
    // Call the calculator function
    switchCaseCalculator();

    return 0;
}
