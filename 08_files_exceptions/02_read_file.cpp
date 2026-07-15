// Topic: Read file
// Definition: Reading a file means taking data from a file into a program.
// Explanation: ifstream is used to read data.

#include <fstream> // Gives ifstream.
#include <iostream> // Gives cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    string line; // Stores one line.
    ifstream file("student.txt"); // Opens file for reading.

    while (getline(file, line)) { // Reads line by line.
        cout << line << endl; // Prints line.
    }

    file.close(); // Closes file.
    return 0; // Ends successfully.
}

