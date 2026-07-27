// Topic: priority_queue
// Definition: priority_queue stores values by priority.
// Explanation: By default, the largest value comes out first.

#include <iostream> // Gives cout.
#include <queue> // Gives priority_queue.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    priority_queue<int> numbers; // Creates priority queue.
    numbers.push(30); // Adds value.
    numbers.push(10); // Adds value.
    numbers.push(50); // Adds value.

    cout << "Top: " << numbers.top() << endl; // Prints highest value.
    return 0; // Ends successfully.
}

