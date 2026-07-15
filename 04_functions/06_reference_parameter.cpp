// Topic: Reference parameter
// Definition: A reference gives another name to the same variable.
// Explanation: Passing by reference allows a function to change the original value.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

void changeMarks(int &marks) { // & means original variable is used.
    marks = marks + 5; // Changes original value.
}

int main() { // Program starts here.
    int studentMarks = 45; // Original marks.
    changeMarks(studentMarks); // Sends by reference.
    cout << "Updated marks: " << studentMarks << endl; // Prints changed value.
    return 0; // Ends successfully.
}

