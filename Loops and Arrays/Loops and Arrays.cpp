#include <iostream>
using namespace std;

int main() {
    // Print all even numbers from 1 to 50 using a for loop
    cout << "Even numbers from 1 to 50:" << endl;
    for (int i = 2; i <= 50; i += 2) {
        cout << i << " ";
    }
    cout << endl << endl;

    // Populate an integer array using a while loop and then print the array using a for loop
    int arr[10]; // Declare an array of size 10
    int i = 0;

    // Populate the array using a while loop
    cout << "Enter 10 integers to populate the array:" << endl;
    while (i < 10) {
        cin >> arr[i]; // Get user input
        i++; // Increment the index
    }

    // Print the array using a for loop
    cout << "The array values are:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
