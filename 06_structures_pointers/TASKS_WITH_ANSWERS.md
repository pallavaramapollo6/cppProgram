# C++ Structures and Pointers Tasks With Answers

## 1. Book Structure

```cpp
#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    float price;
};

int main() {
    Book b1 = {"C++ Basics", "Ravi", 250.5f};

    cout << b1.title << endl;
    cout << b1.author << endl;
    cout << b1.price << endl;
    return 0;
}
```

## 2. Array of Employee Structures

```cpp
#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    int salary;
};

int main() {
    Employee employees[2] = {{"Anu", 20000}, {"Kiran", 25000}};

    for (int i = 0; i < 2; i++) {
        cout << employees[i].name << " " << employees[i].salary << endl;
    }
    return 0;
}
```

## 3. Order Status enum

```cpp
#include <iostream>
using namespace std;

enum OrderStatus { PLACED = 1, SHIPPED = 2, DELIVERED = 3 };

int main() {
    OrderStatus status = SHIPPED;

    cout << "Status code = " << status << endl;
    return 0;
}
```

## 4. Update Product Price

```cpp
#include <iostream>
using namespace std;

int main() {
    float price = 100.0f;
    float *ptr = &price;
    *ptr = 120.0f;

    cout << "Price = " << price << endl;
    return 0;
}
```

## 5. Swap Using Pointers

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    int *p1 = &a;
    int *p2 = &b;
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << a << " " << b << endl;
    return 0;
}
```

## 6. Salary Using Pointer to Pointer

```cpp
#include <iostream>
using namespace std;

int main() {
    int salary = 30000;
    int *ptr = &salary;
    int **ptr2 = &ptr;

    cout << "Salary = " << **ptr2 << endl;
    return 0;
}
```

