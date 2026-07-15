// Topic: Write file
// Definition: Writing a file means saving data from a program into a file.
// Explanation: ofstream is used to write data.

#include <fstream> // Gives ofstream.
#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    ofstream file("student.txt"); // Opens file for writing.
    file << "Hello file"; // Writes text into file.
    file.close(); // Closes file.

    cout << "File written successfully" << endl; // Shows success.
    return 0; // Ends successfully.
}

