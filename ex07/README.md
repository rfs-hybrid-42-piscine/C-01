# 🟢 Exercise 07: ft_rev_int_tab

## 📝 Objective
Create a function that reverses a given array of integers (the first element becomes the last, and so on).

## 💡 The Logic
To reverse an array efficiently without creating a secondary array, we swap the elements in place. 

We use a `while` loop that stops exactly at the midpoint of the array (`size / 2`). Inside the loop, we use a temporary variable (`tmp`) to hold the value of the current index `i`. We then overwrite index `i` with the value from the symmetrical opposite end of the array (`size - i - 1`), and finally place the `tmp` value into that opposite end.

If we did not stop at the midpoint, the loop would continue past the center and swap everything back to its original order!

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_rev_int_tab.c`](ft_rev_int_tab.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-01` directory. You must pass the `-D EX07` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX07 ../tester.c ft_rev_int_tab.c -o test_ex07
   ./test_ex07
   ```
