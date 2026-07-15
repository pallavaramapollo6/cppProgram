# C++ Files and Exceptions Practice Tasks

Follow each requirement exactly. Use C++ file streams and exception syntax.

1. Create `diary.txt` using `ofstream`. Write exactly `Today I practiced C++ file handling.` into the file and close it.
   Example output:
   ```text
   Diary saved
   ```

2. Open `diary.txt` using `ifstream`. Read it line by line using `getline()` and print each line.
   Example output:
   ```text
   Today I practiced C++ file handling.
   ```

3. Open `expenses.txt` in append mode using `ios::app`. Append exactly `Pen: 10` followed by a new line.
   Example output:
   ```text
   Expense added
   ```

4. Open `marks.txt` using `ifstream`. If `is_open()` is true, print `marks.txt found`; otherwise print `marks.txt not found`.
   Example output when file is missing:
   ```text
   marks.txt not found
   ```

5. Store `balance = 1000` and `withdraw = 1500`. If withdraw is greater than balance, throw the message `Insufficient balance` and catch it.
   Example output:
   ```text
   Insufficient balance
   ```

6. Throw a `double` value `12.5`. Catch it using `catch(...)` and print `Unknown error caught`.
   Example output:
   ```text
   Unknown error caught
   ```

