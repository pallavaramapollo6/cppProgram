# C++ Files and Exceptions Tasks With Answers

## 1. Save Diary Line

```cpp
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream file("diary.txt");
    file << "Today I practiced C++ file handling.";
    file.close();

    cout << "Diary saved" << endl;
    return 0;
}
```

## 2. Read Diary File

```cpp
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    ifstream file("diary.txt");

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}
```

## 3. Append Expense

```cpp
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream file("expenses.txt", ios::app);
    file << "Pen: 10\n";
    file.close();

    cout << "Expense added" << endl;
    return 0;
}
```

## 4. Check marks.txt

```cpp
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream file("marks.txt");

    if (file.is_open()) {
        cout << "marks.txt found" << endl;
        file.close();
    } else {
        cout << "marks.txt not found" << endl;
    }
    return 0;
}
```

## 5. Withdrawal Exception

```cpp
#include <iostream>
using namespace std;

int main() {
    int balance = 1000;
    int withdraw = 1500;

    try {
        if (withdraw > balance) {
            throw "Insufficient balance";
        }
        balance -= withdraw;
    } catch (const char *message) {
        cout << message << endl;
    }
    return 0;
}
```

## 6. Catch Unknown Exception

```cpp
#include <iostream>
using namespace std;

int main() {
    try {
        throw 12.5;
    } catch (...) {
        cout << "Unknown error caught" << endl;
    }
    return 0;
}
```

