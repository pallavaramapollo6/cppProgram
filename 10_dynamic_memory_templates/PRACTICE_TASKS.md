# C++ Dynamic Memory, Templates, Static, and Math Practice Tasks

Follow each requirement exactly. Free dynamic memory where required.

1. Use `new` to create one dynamic integer named `age`, store `21`, print it, and free memory using `delete`.
   Example output:
   ```text
   Age = 21
   ```

2. Use `new[]` to create a dynamic integer array of size `3`. Store `80`, `90`, and `85`, print all values, and free memory using `delete[]`.
   Example output:
   ```text
   80 90 85
   ```

3. Create `int *ptr = nullptr`. Use an `if` condition to print `Pointer is empty` only when the pointer is null.
   Example output:
   ```text
   Pointer is empty
   ```

4. Create a function template `smaller(T a, T b)` that returns the smaller value. Test it with `10, 20` and `4.5, 2.5`.
   Example output:
   ```text
   10
   2.5
   ```

5. Create a class template `Holder<T>` with private `value`, constructor, and `show()` method. Test it with `Holder<int>` and `Holder<string>`.
   Example output:
   ```text
   100
   C++
   ```

6. Use `unique_ptr<int>` and `make_unique<int>(75)`. Print the value using `*number`.
   Example output:
   ```text
   Value = 75
   ```

