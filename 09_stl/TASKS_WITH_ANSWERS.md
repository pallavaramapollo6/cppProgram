# C++ STL Tasks With Answers

## 1. Shopping Cart Vector

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> prices = {100, 250, 50};
    int total = 0;

    for (int price : prices) {
        total += price;
    }

    cout << "Total = " << total << endl;
    return 0;
}
```

## 2. Sort Scores

```cpp
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> scores = {88, 45, 92, 70};
    sort(scores.begin(), scores.end());

    for (int score : scores) {
        cout << score << " ";
    }
    return 0;
}
```

## 3. Unique Roll Numbers

```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> rolls = {3, 1, 3, 2, 1};

    for (int roll : rolls) {
        cout << roll << " ";
    }
    return 0;
}
```

## 4. Product Price Map

```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> prices;
    prices["Pen"] = 10;
    prices["Book"] = 50;

    cout << "Book price = " << prices["Book"] << endl;
    return 0;
}
```

## 5. Customer Queue

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> customers;
    customers.push("Anu");
    customers.push("Ravi");
    customers.push("Meena");

    while (!customers.empty()) {
        cout << "Serving " << customers.front() << endl;
        customers.pop();
    }
    return 0;
}
```

## 6. Reverse Numbers Using Stack

```cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> numbers;
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);

    while (!numbers.empty()) {
        cout << numbers.top() << " ";
        numbers.pop();
    }
    return 0;
}
```

