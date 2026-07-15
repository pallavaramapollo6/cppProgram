# C++ Operators Tasks With Answers

## 1. Total and Average Marks

```cpp
#include <iostream>
using namespace std;

int main() {
    int m1 = 80, m2 = 75, m3 = 90;
    int total = m1 + m2 + m3;
    float average = total / 3.0f;

    cout << "Total = " << total << endl;
    cout << "Average = " << average << endl;
    return 0;
}
```

## 2. Discount Check

```cpp
#include <iostream>
using namespace std;

int main() {
    int bill = 1500;

    cout << "Discount available: " << (bill >= 1000) << endl;
    return 0;
}
```

## 3. Login Eligibility

```cpp
#include <iostream>
using namespace std;

int main() {
    bool hasUsername = true;
    bool hasPassword = true;

    cout << "Can login: " << (hasUsername && hasPassword) << endl;
    return 0;
}
```

## 4. Wallet Balance

```cpp
#include <iostream>
using namespace std;

int main() {
    int wallet = 500;
    wallet += 200;
    wallet -= 150;

    cout << "Wallet balance = " << wallet << endl;
    return 0;
}
```

## 5. Logical NOT

```cpp
#include <iostream>
using namespace std;

int main() {
    bool lightOn = false;
    lightOn = !lightOn;

    cout << "Light on: " << lightOn << endl;
    return 0;
}
```

## 6. Decimal Division

```cpp
#include <iostream>
using namespace std;

int main() {
    int total = 7;
    int count = 2;
    double result = static_cast<double>(total) / count;

    cout << "Result = " << result << endl;
    return 0;
}
```

