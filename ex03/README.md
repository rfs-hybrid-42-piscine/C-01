# 🟢 Exercise 03: ft_div_mod

## 📝 Objective
Create a function that divides 'a' by 'b' and stores the result in the integer pointed to by 'div'. It also stores the remainder of the division of 'a' by 'b' in the integer pointed to by 'mod'.

## 💡 The Logic
A standard C function can only `return` a single value. However, by accepting pointers as parameters (`*div` and `*mod`), this function can effectively "return" multiple values by writing the math results directly into the memory of the program that called it.

**Defensive Programming:** The code includes an `if (b != 0)` check. Attempting to divide by zero in C will cause a fatal program crash (Floating point exception). Wrapping the math in this condition ensures the program remains safe.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_div_mod.c`](ft_div_mod.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-01` directory. You must pass the `-D EX03` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX03 ../tester.c ft_div_mod.c -o test_ex03
   ./test_ex03
   ```
