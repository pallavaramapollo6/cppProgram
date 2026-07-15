// Topic: unique_ptr smart pointer
// Definition: unique_ptr is a smart pointer that automatically frees memory.
// Explanation: It owns one object and deletes it when it goes out of scope.

#include <iostream> // Gives cout.
#include <memory> // Gives unique_ptr and make_unique.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    unique_ptr<int> number = make_unique<int>(50); // Creates smart pointer.
    cout << "Value: " << *number << endl; // Prints stored value.
    return 0; // Memory is freed automatically here.
}

