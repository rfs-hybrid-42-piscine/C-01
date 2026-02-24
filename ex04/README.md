# 🟢 Exercise 04: ft_ultimate_div_mod

## 📝 Objective
Create a function that divides the value pointed to by 'a' by the value pointed to by 'b'. The result of the division is stored in the integer pointed to by 'a', while the remainder is stored in the integer pointed to by 'b'.

## 💡 The Logic
This combines the logic of `ex02` (swapping/overwriting) with `ex03` (math). 

If we calculate the division and instantly overwrite `*a` with the result, we lose the original value of `a`. Because the modulo operation requires the *original* value of `a`, calculating it afterward would yield an incorrect answer. 

To prevent data loss, we must perform both mathematical operations and store their results in temporary variables (`result` and `remainder`) *before* we overwrite the pointers `*a` and `*b`.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_ultimate_div_mod.c`](ft_ultimate_div_mod.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-01` directory. You must pass the `-D EX04` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX04 ../tester.c ft_ultimate_div_mod.c -o test_ex04
   ./test_ex04
   ```
