// Topic: sizeof operator
// Definition: sizeof tells how many bytes a data type or variable uses.
// Explanation: It helps students understand memory size.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int number = 10; // Integer variable.
    double marks = 95.5; // Double variable.

    cout << "int size: " << sizeof(number) << " bytes" << endl; // Prints int size.
    cout << "double size: " << sizeof(marks) << " bytes" << endl; // Prints double size.
    return 0; // Ends successfully.
}

