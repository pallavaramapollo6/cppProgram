// Topic: Encapsulation
// Definition: Encapsulation hides data and gives controlled access using methods.
// Explanation: It protects data from direct unwanted changes.

#include <iostream> // Gives cout.
using namespace std; // Uses standard names.

class BankAccount { // Creates class.
private: // Hidden data.
    int balance; // Private balance.

public: // Public methods.
    BankAccount() { // Constructor.
        balance = 0; // Starts from zero.
    }

    void deposit(int amount) { // Method to add money.
        if (amount > 0) { // Allows only positive amount.
            balance += amount; // Adds amount.
        }
    }

    int getBalance() { // Getter method.
        return balance; // Returns balance safely.
    }
};

int main() { // Program starts here.
    BankAccount account; // Creates object.
    account.deposit(500); // Adds money.
    cout << "Balance: " << account.getBalance() << endl; // Shows balance.
    return 0; // Ends successfully.
}

