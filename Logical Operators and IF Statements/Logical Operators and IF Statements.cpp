#include <iostream>
using namespace std;

void findLargestNumber() {
    // Input three numbers
    int num1, num2, num3;
    cout << "Which number is the largest?" << endl;
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    // Using nested if statements to find the largest number
    if (num1 >= num2) {
        if (num1 >= num3) {
            cout << "The largest number is: " << num1 << endl;
        }
        else {
            cout << "The largest number is: " << num3 << endl;
        }
    }
    else {
        if (num2 >= num3) {
            cout << "The largest number is: " << num2 << endl;
        }
        else {
            cout << "The largest number is: " << num3 << endl;
        }
    }
}

void checkLeapYear() {
    // Input year
    int year;
    cout << endl << "Enter a year to determine if it is a leap year: ";
    cin >> year;

    // Check if the year is a leap year using logical operators
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " is a leap year." << endl;
    }
    else {
        cout << year << " is not a leap year." << endl;
    }
}

int main() {
    // Call the functions
    findLargestNumber();
    checkLeapYear();

    return 0;
}
