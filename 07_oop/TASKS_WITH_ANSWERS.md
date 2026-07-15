# C++ OOP Tasks With Answers

## 1. Laptop Class

```cpp
#include <iostream>
#include <string>
using namespace std;

class Laptop {
public:
    string brand;
    int ram;
    float price;

    void display() {
        cout << brand << " " << ram << "GB " << price << endl;
    }
};

int main() {
    Laptop laptop;
    laptop.brand = "Dell";
    laptop.ram = 8;
    laptop.price = 45000;
    laptop.display();
    return 0;
}
```

## 2. BankAccount Encapsulation

```cpp
#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(int amount) {
        balance += amount;
    }

    void display() {
        cout << "Balance = " << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.deposit(1000);
    account.display();
    return 0;
}
```

## 3. MovieTicket Constructor

```cpp
#include <iostream>
#include <string>
using namespace std;

class MovieTicket {
private:
    string movieName;
    int seatNumber;

public:
    MovieTicket(string movie, int seat) {
        movieName = movie;
        seatNumber = seat;
    }

    void show() {
        cout << movieName << " Seat: " << seatNumber << endl;
    }
};

int main() {
    MovieTicket ticket("Leo", 25);
    ticket.show();
    return 0;
}
```

## 4. Method Outside Class

```cpp
#include <iostream>
using namespace std;

class Message {
public:
    void show();
};

void Message::show() {
    cout << "Method outside class" << endl;
}

int main() {
    Message msg;
    msg.show();
    return 0;
}
```

## 5. Single Inheritance

```cpp
#include <iostream>
using namespace std;

class Teacher {
public:
    void teach() {
        cout << "Teaching" << endl;
    }
};

class MathTeacher : public Teacher {
public:
    void subject() {
        cout << "Maths" << endl;
    }
};

int main() {
    MathTeacher teacher;
    teacher.teach();
    teacher.subject();
    return 0;
}
```

## 6. Operator Overloading

```cpp
#include <iostream>
using namespace std;

class Distance {
private:
    int meter;

public:
    Distance(int m) {
        meter = m;
    }

    Distance operator+(Distance other) {
        return Distance(meter + other.meter);
    }

    void show() {
        cout << meter << " meters" << endl;
    }
};

int main() {
    Distance d1(10);
    Distance d2(20);
    Distance d3 = d1 + d2;
    d3.show();
    return 0;
}
```

