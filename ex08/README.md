# 🟢 Exercise 08: ft_sort_int_tab

## 📝 Objective
Create a function that sorts an array of integers in ascending order.

## 💡 The Logic
This exercise requires the implementation of a basic sorting algorithm. This specific solution implements the **Bubble Sort** algorithm.

It uses nested loops to repeatedly step through the array, comparing adjacent elements (`tab[j] > tab[j + 1]`). If the current element is larger than the next one, they are swapped using a helper function. This process "bubbles" the largest numbers to the end of the array on each pass.

**Optimization (Early Exit):** If the array passed to the function has `0` or `1` elements (`size < 2`), it is inherently already sorted. The function immediately returns, saving the program from executing unnecessary loop logic.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_sort_int_tab.c`](ft_sort_int_tab.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-01` directory. You must pass the `-D EX08` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX08 ../tester.c ft_sort_int_tab.c -o test_ex08
   ./test_ex08
   ```
