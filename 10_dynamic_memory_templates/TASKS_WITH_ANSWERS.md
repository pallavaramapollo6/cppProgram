# C++ Dynamic Memory, Templates, Static, and Math Tasks With Answers

## 1. Dynamic Age Variable

```cpp
#include <iostream>
using namespace std;

int main() {
    int *age = new int;
    *age = 21;

    cout << "Age = " << *age << endl;
    delete age;
    return 0;
}
```

## 2. Dynamic Marks Array

```cpp
#include <iostream>
using namespace std;

int main() {
    int *marks = new int[3];
    marks[0] = 80;
    marks[1] = 90;
    marks[2] = 85;

    for (int i = 0; i < 3; i++) {
        cout << marks[i] << " ";
    }

    delete[] marks;
    return 0;
}
```

## 3. nullptr Check

```cpp
#include <iostream>
using namespace std;

int main() {
    int *ptr = nullptr;

    if (ptr == nullptr) {
        cout << "Pointer is empty" << endl;
    }
    return 0;
}
```

## 4. Smaller Function Template

```cpp
#include <iostream>
using namespace std;

template <class T>
T smaller(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    cout << smaller(10, 20) << endl;
    cout << smaller(4.5, 2.5) << endl;
    return 0;
}
```

## 5. Holder Class Template

```cpp
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Holder {
private:
    T value;

public:
    Holder(T v) {
        value = v;
    }

    void show() {
        cout << value << endl;
    }
};

int main() {
    Holder<int> h1(100);
    Holder<string> h2("C++");

    h1.show();
    h2.show();
    return 0;
}
```

## 6. unique_ptr

```cpp
#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> number = make_unique<int>(75);

    cout << "Value = " << *number << endl;
    return 0;
}
```

