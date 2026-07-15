# C++ Control Flow Tasks With Answers

## 1. Driving License Eligibility

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 19;

    if (age >= 18) {
        cout << "Eligible for license" << endl;
    } else {
        cout << "Not eligible" << endl;
    }
    return 0;
}
```

## 2. Smallest of Three Numbers

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 30, b = 10, c = 20;

    if (a <= b && a <= c) {
        cout << "Smallest = " << a << endl;
    } else if (b <= a && b <= c) {
        cout << "Smallest = " << b << endl;
    } else {
        cout << "Smallest = " << c << endl;
    }
    return 0;
}
```

## 3. Calculator Menu

```cpp
#include <iostream>
using namespace std;

int main() {
    int choice = 1;
    int a = 8, b = 4;

    switch (choice) {
        case 1:
            cout << "Add = " << a + b << endl;
            break;
        case 2:
            cout << "Subtract = " << a - b << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
    return 0;
}
```

## 4. Multiplication Table

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << "7 x " << i << " = " << 7 * i << endl;
    }
    return 0;
}
```

## 5. Skip Multiples of 3

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 15; i++) {
        if (i % 3 == 0) {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}
```

## 6. Stop Booking

```cpp
#include <iostream>
using namespace std;

int main() {
    int seats = 3;

    for (int booking = 1; booking <= 5; booking++) {
        if (seats == 0) {
            break;
        }
        cout << "Ticket booked" << endl;
        seats--;
    }
    return 0;
}
```

