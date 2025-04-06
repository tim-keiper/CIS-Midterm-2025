#include <iostream>
#include <string>

using namespace std;

// Function to accept user's name, age, and favorite number
void acceptUserInfo() {
    // Declare variables to store user input
    string Name;
    int Age;
    float FavoriteNumber;

    // Prompt the user for their name, age, and favorite number
    cout << "Enter your name: ";
    cin >> Name;

    cout << "Enter your age: ";
    cin >> Age;

    cout << "Enter your favorite number: ";
    cin >> FavoriteNumber;

    // Print the user-provided information
    cout << "\nHello " << Name << "!" << endl;
    cout << "You are " << Age << " years old and your favorite number is " << FavoriteNumber << "." << endl;
}

// Function to declare and initialize variables of various data types (without user input)
void initializeVariables() {
    // Declare and initialize variables of different data types
    int integer = 86;   // Integer
    float floatingPointNumber = 3.14;   // Float
    double preciseDecimal = 3.14159265; // Double
    char character = 'X';   // Char
    string stringText = "Sleep, those little slices of death, how I loathe them";   // String
    bool boolean = true;    // Boolean
    long longInteger = 2147483647;  // Long
    short shortInteger = -5;    // Short
    unsigned int positiveInteger = 50;  // Unsigned Integer

    // Print the initialized variable values
    cout << "\nInitialized variables values:" << endl;
    cout << "Integer (int): " << integer << endl;
    cout << "Floating point number (float): " << floatingPointNumber << endl;
    cout << "Precise decimal (double): " << preciseDecimal << endl;
    cout << "Character (char): " << character << endl;
    cout << "String (string): " << stringText << endl;
    cout << "Boolean (bool): " << boolean << endl;
    cout << "Long Integer (long): " << longInteger << endl;
    cout << "Short Integer (short): " << shortInteger << endl;
    cout << "Positive Integer (unsigned int): " << positiveInteger << endl;
}

int main() {
    // Call both functions
    acceptUserInfo();
    initializeVariables();

    return 0;
}
