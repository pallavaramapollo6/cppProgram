# C++ Functions Tasks With Answers

## 1. Course Welcome Banner

```cpp
#include <iostream>
using namespace std;

void banner() {
    cout << "Welcome to C++ Programming" << endl;
}

int main() {
    banner();
    return 0;
}
```

## 2. Cube Function

```cpp
#include <iostream>
using namespace std;

int cube(int number) {
    return number * number * number;
}

int main() {
    cout << "Cube = " << cube(3) << endl;
    return 0;
}
```

## 3. Rectangle Area

```cpp
#include <iostream>
using namespace std;

int area(int length, int width) {
    return length * width;
}

int main() {
    cout << "Area = " << area(5, 4) << endl;
    return 0;
}
```

## 4. Swap Using References

```cpp
#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    swapNumbers(x, y);

    cout << x << " " << y << endl;
    return 0;
}
```

## 5. Area Function Overloading

```cpp
#include <iostream>
using namespace std;

int area(int side) {
    return side * side;
}

int area(int length, int width) {
    return length * width;
}

int main() {
    cout << "Square area = " << area(5) << endl;
    cout << "Rectangle area = " << area(5, 4) << endl;
    return 0;
}
```

## 6. Inline Minutes to Seconds

```cpp
#include <iostream>
using namespace std;

inline int toSeconds(int minutes) {
    return minutes * 60;
}

int main() {
    cout << "Seconds = " << toSeconds(5) << endl;
    return 0;
}
```

