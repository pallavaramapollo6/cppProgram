// Topic: Append file
// Definition: Appending means adding new data at the end of an existing file.
// Explanation: ios::app opens the file in append mode.

#include <fstream> // Gives ofstream.
#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    ofstream file("student.txt", ios::app); // Opens file in append mode.
    file << "\nNew line added"; // Adds text at the end.
    file.close(); // Closes file.

    cout << "Text appended successfully" << endl; // Shows success.
    return 0; // Ends successfully.
}

