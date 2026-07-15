# C++ Arrays and Strings Tasks With Answers

## 1. Highest Weekly Temperature

```cpp
#include <iostream>
using namespace std;

int main() {
    int temp[7] = {30, 32, 29, 35, 31, 33, 34};
    int highest = temp[0];

    for (int i = 1; i < 7; i++) {
        if (temp[i] > highest) {
            highest = temp[i];
        }
    }

    cout << "Highest temperature = " << highest << endl;
    return 0;
}
```

## 2. Count Passed Students

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks[5] = {45, 78, 32, 90, 55};
    int passed = 0;

    for (int i = 0; i < 5; i++) {
        if (marks[i] >= 50) {
            passed++;
        }
    }

    cout << "Passed students = " << passed << endl;
    return 0;
}
```

## 3. Diagonal of 3x3 Matrix

```cpp
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++) {
        cout << matrix[i][i] << " ";
    }
    return 0;
}
```

## 4. Full Name Length

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;

    cout << "Enter full name: ";
    getline(cin, fullName);

    cout << "Characters = " << fullName.length() << endl;
    return 0;
}
```

## 5. Change First Character

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "hello";
    word[0] = 'H';

    cout << word << endl;
    return 0;
}
```

## 6. Lowercase to Uppercase

```cpp
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "student";

    for (char &ch : word) {
        ch = toupper(ch);
    }

    cout << word << endl;
    return 0;
}
```

