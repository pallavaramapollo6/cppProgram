// Topic: Lambda function
// Definition: A lambda is a small function written directly inside code.
// Explanation: It is useful for short tasks.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    auto add = [](int a, int b) { // Creates a small unnamed function.
        return a + b; // Returns sum.
    };

    cout << "Sum: " << add(5, 6) << endl; // Calls lambda.
    return 0; // Ends successfully.
}

