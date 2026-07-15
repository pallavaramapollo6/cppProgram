// Topic: Function with argument and with return
// Definition: This function takes input and sends output back.
// Explanation: Arguments pass values into a function.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int add(int a, int b) { // Receives two integers.
    return a + b; // Sends sum back.
}

int main() { // Program starts here.
    cout << "Sum: " << add(5, 3) << endl; // Calls function and prints result.
    return 0; // Ends successfully.
}

