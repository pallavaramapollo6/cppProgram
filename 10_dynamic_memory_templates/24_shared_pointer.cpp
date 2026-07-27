// Topic: shared_ptr smart pointer
// Definition: shared_ptr allows more than one smart pointer to own the same object.
// Explanation: The object is deleted automatically when the last shared_ptr is gone.

#include <iostream> // Gives cout.
#include <memory> // Gives shared_ptr and make_shared.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    shared_ptr<int> first = make_shared<int>(100); // Creates shared pointer.
    shared_ptr<int> second = first; // Shares ownership.

    cout << "Value: " << *second << endl; // Prints value.
    cout << "Owners: " << first.use_count() << endl; // Prints owner count.
    return 0; // Ends successfully.
}

