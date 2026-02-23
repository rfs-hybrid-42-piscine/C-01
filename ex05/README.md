# 🟢 Exercise 05: ft_putstr

## 📝 Objective
Create a function that displays a string of characters on the standard output.

## 💡 The Logic
In C, strings do not exist as a native data type. They are simply arrays of characters that are terminated by a null byte (`\0`). To print a string, we pass a pointer to its first character and loop through the memory addresses, writing each character one by one until we hit that `\0`.

**Defensive Programming:** If a function tries to dereference a `NULL` pointer, the program will crash with a Segmentation Fault. To prevent this, our logic includes an `if (str)` check right at the beginning. If a `NULL` pointer is passed, the function safely does nothing and exits.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_putstr.c`](ft_putstr.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-01` directory. Pass the `-D EX05` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX05 ../tester.c ft_putstr.c -o test_ex05
   ./test_ex05
   ```
