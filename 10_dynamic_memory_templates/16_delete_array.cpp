// Topic: delete array
// Definition: delete[] frees memory created with new[].
// Explanation: Dynamic arrays must be released using delete[].

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int *marks = new int[3]{80, 85, 90}; // Creates dynamic array.

    for (int i = 0; i < 3; i++) { // Visits each value.
        cout << marks[i] << endl; // Prints value.
    }

    delete[] marks; // Frees array memory.
    marks = nullptr; // Avoids dangling pointer.
    return 0; // Ends successfully.
}

