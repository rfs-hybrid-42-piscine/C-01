# 🟢 Exercise 06: ft_strlen

## 📝 Objective
Create a function that counts and returns the number of characters in a string.

## 💡 The Logic
Similar to `ex05`, we must iterate through the character array until we encounter the null-terminator (`\0`). However, instead of printing the characters, we keep an integer counter (`len`).

Instead of pointer arithmetic, this function demonstrates **Array Indexing** (`str[len]`). The integer counter serves double-duty: it acts as the index to check the current character in the array, and it keeps track of the total length to return at the end.

*(Note: Just like `ft_putstr`, this function includes an `if (str)` safety check to prevent crashing if passed a `NULL` pointer).*

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_strlen.c`](ft_strlen.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-00` directory. You must pass the `-D EX06` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX06 ../tester.c ft_strlen.c -o test_ex06
   ./test_ex06
   ```
