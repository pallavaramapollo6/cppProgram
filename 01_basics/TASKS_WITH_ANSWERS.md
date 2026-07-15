# Basic C++ Tasks With Answers

## 1. Student ID Card

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Kiran";
    int rollNumber = 24;
    string department = "Computer Science";
    string city = "Chennai";

    cout << "Student ID Card" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNumber << endl;
    cout << "Department: " << department << endl;
    cout << "City: " << city << endl;
    return 0;
}
```

## 2. Product Bill Preview

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string product = "Notebook";
    float price = 45.5f;
    int quantity = 3;
    bool available = true;

    cout << "Product: " << product << endl;
    cout << "Total: " << price * quantity << endl;
    cout << "Available: " << available << endl;
    return 0;
}
```

## 3. Read Full Sentence

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;

    cout << "Enter your goal: ";
    getline(cin, sentence);

    cout << "Your goal is: " << sentence << endl;
    return 0;
}
```

## 4. Simple Interest

```cpp
#include <iostream>
using namespace std;

int main() {
    const float RATE = 5.0f;
    float principal = 10000;
    float time = 2;
    float interest = (principal * RATE * time) / 100;

    cout << "Simple Interest = " << interest << endl;
    return 0;
}
```

## 5. Timetable

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Day\tSubject\n";
    cout << "Mon\tC++\n";
    cout << "Tue\tMaths\n";
    cout << "Wed\tEnglish\n";
    return 0;
}
```

## 6. Without using namespace std

```cpp
#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Hello " << name << std::endl;
    return 0;
}
```

