#include<iostream>
using namespace std;

int main() {
    int number = 10;
    if (number == 20) {  // Change assignment operator '='to equality operator '=='.
        cout << "Number is 20" << endl;
    }
    else {
        cout << "Number is not 20" << endl;
    }

    for (int i = 0; i <= 5; i++) {   // Remove semicolon and add '{}' for loop body
        cout << i << endl;  // iterator variable 'i' can now be accessed becuase it is within the body of the loop
    }

    return 0;
}
