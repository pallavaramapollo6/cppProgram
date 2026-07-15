// Topic: Binary file read
// Definition: Reading a binary file means reading bytes back into variables.
// Explanation: read() loads bytes from a file.

#include <fstream> // Gives ifstream.
#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int number = 0; // Variable to receive data.
    ifstream file("number.bin", ios::binary); // Opens binary file.
    file.read(reinterpret_cast<char *>(&number), sizeof(number)); // Reads bytes.
    file.close(); // Closes file.

    cout << "Number: " << number << endl; // Prints number.
    return 0; // Ends successfully.
}

