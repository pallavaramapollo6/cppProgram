// Topic: Return multiple values using references
// Definition: References allow a function to update more than one original variable.
// Explanation: This is useful when one function must give multiple results.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

void calculate(int a, int b, int &sum, int &product) { // sum and product are references.
    sum = a + b; // Updates original sum.
    product = a * b; // Updates original product.
}

int main() { // Program starts here.
    int sum = 0; // Stores sum result.
    int product = 0; // Stores product result.
    calculate(4, 5, sum, product); // Function updates both variables.

    cout << "Sum: " << sum << endl; // Prints sum.
    cout << "Product: " << product << endl; // Prints product.
    return 0; // Ends successfully.
}

