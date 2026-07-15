// Topic: Queue
// Definition: A queue follows FIFO, meaning first in first out.
// Explanation: The first added value is removed first.

#include <iostream> // Gives cout.
#include <queue> // Gives queue.
using namespace std; // Uses standard names.

int main() { // Program starts here.
    queue<int> line; // Creates queue.
    line.push(1); // Adds first value.
    line.push(2); // Adds second value.

    cout << "Front: " << line.front() << endl; // Shows first value.
    line.pop(); // Removes first value.
    cout << "New front: " << line.front() << endl; // Shows next value.
    return 0; // Ends successfully.
}

