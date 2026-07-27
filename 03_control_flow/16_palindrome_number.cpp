// Topic: Palindrome number
// Definition: A palindrome number reads the same forward and backward.
// Explanation: We reverse the number and compare it with the original number.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int number = 121; // Number to check.
    int original = number; // Saves original value.
    int reversed = 0; // Stores reversed number.

    while (number > 0) { // Runs until all digits are used.
        int digit = number % 10; // Gets last digit.
        reversed = reversed * 10 + digit; // Adds digit to reverse.
        number /= 10; // Removes last digit.
    }

    if (original == reversed) { // Compares values.
        cout << "Palindrome number" << endl; // Prints palindrome.
    } else {
        cout << "Not a palindrome number" << endl; // Prints not palindrome.
    }

    return 0; // Ends successfully.
}

