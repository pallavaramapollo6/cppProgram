// Topic: fstream read and write
// Definition: fstream can read from and write to a file.
// Explanation: ios::out writes data and ios::in reads data.

#include <fstream> // Gives fstream.
#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    fstream file; // Creates file object.
    file.open("sample.txt", ios::out); // Opens file for writing.
    file << "C++ file handling" << endl; // Writes text.
    file.close(); // Closes file.

    file.open("sample.txt", ios::in); // Opens file for reading.
    string line; // Stores one line.
    getline(file, line); // Reads line.
    cout << line << endl; // Prints line.
    file.close(); // Closes file.

    return 0; // Ends successfully.
}

