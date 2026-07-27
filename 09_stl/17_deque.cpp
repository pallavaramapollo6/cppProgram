// Topic: deque
// Definition: deque is a sequence container that allows insertion at both ends.
// Explanation: push_front adds at the beginning and push_back adds at the end.

#include <deque> // Gives deque.
#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    deque<int> numbers; // Creates empty deque.
    numbers.push_back(20); // Adds at end.
    numbers.push_front(10); // Adds at beginning.

    for (int number : numbers) { // Visits each value.
        cout << number << endl; // Prints value.
    }

    return 0; // Ends successfully.
}

