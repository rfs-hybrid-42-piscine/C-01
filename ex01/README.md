# 🟢 Exercise 01: ft_ultimate_ft

## 📝 Objective
Create a function that takes a pointer to a pointer to a pointer... (9 levels deep) to an int as a parameter and sets the value of that int to "42".

## 💡 The Logic
This is an exercise in **Multiple Indirection**. A pointer holds a memory address. A pointer to a pointer holds the memory address of a variable that *also* holds a memory address. 

To reach the actual integer at the very bottom of this 9-level deep chain, you must dereference the variable exactly 9 times (`*********nbr`). Each `*` acts as a step, hopping from one memory address to the next until it finally finds the integer to modify.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_ultimate_ft.c`](ft_ultimate_ft.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-01` directory. You must pass the `-D EX01` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX01 ../tester.c ft_ultimate_ft.c -o test_ex01
   ./test_ex01
   ```
