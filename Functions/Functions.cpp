#include <iostream>
#include <cmath>

// Function to calculate the area of a rectangle
float calculateArea(float length, float width) {
    return length * width;
}

// Function to check if a given number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;  // 0 and 1 are not prime numbers
    }

    for (int i = 2; i <= std::sqrt(num); ++i) {
        if (num % i == 0) {
            return false;  // num is divisible by i, so it's not prime
        }
    }
    return true;  // num is prime
}

int main() {
    // Test the calculateArea function
    float length, width;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    std::cout << "The area of the rectangle is: " << calculateArea(length, width) << std::endl;

    // Test the isPrime function
    int number;
    std::cout << "Enter a number to check if it is prime: ";
    std::cin >> number;
    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    }
    else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}
