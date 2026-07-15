// Topic: Type casting
// Definition: Type casting converts a value from one data type to another.
// Explanation: static_cast is a clear C++ style cast.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int total = 95; // Integer value.
    int subjects = 2; // Integer value.
    double average = static_cast<double>(total) / subjects; // Converts total to double before division.

    cout << "Average: " << average << endl; // Prints decimal result.
    return 0; // Ends successfully.
}

