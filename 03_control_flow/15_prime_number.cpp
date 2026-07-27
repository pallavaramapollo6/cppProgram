// Topic: Prime number
// Definition: A prime number has exactly two factors, 1 and itself.
// Explanation: We check whether any number between 2 and number - 1 divides it.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int number = 13; // Number to check.
    bool isPrime = true; // Assumes number is prime.

    if (number <= 1) { // 0, 1, and negative numbers are not prime.
        isPrime = false; // Marks as not prime.
    }

    for (int i = 2; i < number; i++) { // Checks possible divisors.
        if (number % i == 0) { // If divisible exactly.
            isPrime = false; // Not a prime number.
            break; // Stops loop.
        }
    }

    if (isPrime) { // Checks result.
        cout << "Prime number" << endl; // Prints prime.
    } else {
        cout << "Not a prime number" << endl; // Prints not prime.
    }

    return 0; // Ends successfully.
}

