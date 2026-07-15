// Topic: Function with no argument and with return
// Definition: This function takes no input but sends one value back.
// Explanation: return gives a value to the calling place.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int getNumber() { // int means function returns an integer.
    return 10; // Sends 10 back.
}

int main() { // Program starts here.
    int number = getNumber(); // Stores returned value.
    cout << "Number: " << number << endl; // Prints value.
    return 0; // Ends successfully.
}

