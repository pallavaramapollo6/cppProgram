// Topic: weak_ptr smart pointer
// Definition: weak_ptr observes an object managed by shared_ptr without owning it.
// Explanation: It helps avoid ownership cycles.

#include <iostream> // Gives cout.
#include <memory> // Gives shared_ptr, weak_ptr, and make_shared.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    shared_ptr<int> number = make_shared<int>(75); // Creates shared pointer.
    weak_ptr<int> observer = number; // Observes without owning.

    if (shared_ptr<int> locked = observer.lock()) { // Converts safely to shared_ptr.
        cout << "Value: " << *locked << endl; // Prints value.
    }

    return 0; // Ends successfully.
}

