// Topic: Check file open
// Definition: File open checking confirms whether a file opened successfully.
// Explanation: is_open() returns true when the file is open.

#include <fstream> // Gives ifstream.
#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    ifstream file("student.txt"); // Tries to open file.

    if (file.is_open()) { // Checks file status.
        cout << "File opened" << endl; // Success message.
        file.close(); // Closes file.
    } else { // Runs when file is not open.
        cout << "File not found" << endl; // Error message.
    }

    return 0; // Ends successfully.
}

