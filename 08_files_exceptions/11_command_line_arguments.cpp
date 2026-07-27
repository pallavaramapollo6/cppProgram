// Topic: Command-line arguments
// Definition: Command-line arguments are values passed when running a program.
// Explanation: argc stores the count and argv stores the values as text.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main(int argc, char *argv[]) { // Receives command-line arguments.
    cout << "Argument count: " << argc << endl; // Prints count.

    for (int i = 0; i < argc; i++) { // Visits each argument.
        cout << "Argument " << i << ": " << argv[i] << endl; // Prints argument.
    }

    return 0; // Ends successfully.
}

