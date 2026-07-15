// Topic: Binary file write
// Definition: A binary file stores data in machine-readable form.
// Explanation: write() saves bytes into a file.

#include <fstream> // Gives ofstream.
#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int number = 100; // Data to write.
    ofstream file("number.bin", ios::binary); // Opens binary file.
    file.write(reinterpret_cast<char *>(&number), sizeof(number)); // Writes bytes.
    file.close(); // Closes file.

    cout << "Binary data written" << endl; // Success message.
    return 0; // Ends successfully.
}

