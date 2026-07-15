// Topic: Data types
// Definition: A data type tells which kind of value a variable can store.
// Explanation: Primitive data types store single values like numbers, characters, and true/false.

#include <iostream> // Gives cout.
#include <string> // Gives string.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    int age = 20; // int stores whole numbers.
    float price = 99.50f; // float stores decimal values.
    double marks = 95.75; // double stores larger decimal values.
    char grade = 'A'; // char stores one character.
    bool passed = true; // bool stores true or false.
    string name = "Anu"; // string stores text.

    cout << name << endl; // Prints string.
    cout << age << endl; // Prints integer.
    cout << price << endl; // Prints float.
    cout << marks << endl; // Prints double.
    cout << grade << endl; // Prints character.
    cout << passed << endl; // Prints 1 for true.
    return 0; // Ends successfully.
}

