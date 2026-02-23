*This project has been created as part of the 42 curriculum by maaugust.*

<div align="center">
  <img src="https://raw.githubusercontent.com/rfs-hybrid/42-Piscine/main/assets/covers/cover-c01.png" alt="C 01 Cover" width="100%" />
</div>

<div align="center">
  <h1>💻 C 01: Pointers & Arrays</h1>
  <p><i>Understanding memory addresses, dereferencing pointers, and array manipulation.</i></p>
  
  <img src="https://img.shields.io/badge/Language-C-blue" alt="Language badge" />
  <img src="https://img.shields.io/badge/Grade-100%2F100-success" alt="Grade badge" />
  <img src="https://img.shields.io/badge/Norminette-Passing-success" alt="Norminette badge" />
</div>

---

## 💡 Description
**C 01** marks a significant leap in the 42 C Piscine. While C 00 introduced basic logic and loops, this module focuses entirely on one of the most powerful and notoriously difficult concepts in C: **Pointers**.

The primary goal of this project is to understand how memory works under the hood. You will learn how to pass variables by reference, navigate memory addresses, manipulate arrays using pointer arithmetic, and work with null-terminated strings. 

---

## 🧠 Exercise Breakdown & Logic

*The following section explains the core concepts required to solve each exercise. It focuses on the fundamental logic of C programming, emphasizing manual memory manipulation and pointer dereferencing.*

### 🔹 The Basics (Pointers & Memory)
| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex00: ft_ft`](ex00)** | **Basic Pointers:** Taking a pointer to an `int` as a parameter and setting its value to `42`. <br><br>**Logic:** In C, passing a variable to a function only passes a copy of its value. To change the actual variable, you must pass its memory address (a pointer). Inside the function, we use the dereference operator (`*`) to access that address and alter the original value. |
| **[`ex01: ft_ultimate_ft`](ex01)** | **Multiple Indirection:** Modifying an `int` through a pointer to a pointer to a pointer... (9 levels deep). <br><br>**Logic:** A brutal but effective way to understand pointer chaining. Each `*` represents a memory address pointing to another memory address. To reach the actual integer at the bottom of the chain, you must dereference it 9 times (`*********nbr`). |
| **[`ex02: ft_swap`](ex02)** | **Pass by Reference:** Swapping the contents of two integers whose addresses are passed as parameters. <br><br>**Logic:** Because we have the addresses of the two original variables, we can safely swap their values. This requires declaring a temporary variable (`tmp`) to hold one value so it isn't overwritten and lost during the swap. |
| **[`ex03: ft_div_mod`](ex03)** | **Returning Multiple Values:** Calculating division and modulo, and storing the results in two separate pointers. <br><br>**Logic:** A standard C function can only `return` one value. By accepting pointers as parameters (`*div` and `*mod`), a function can effectively "return" multiple values by writing the results directly into the memory of the calling function. |
| **[`ex04: ft_ultimate_div_mod`](ex04)** | **Memory Overwriting:** Dividing `a` by `b` and storing the results directly back into the pointers `a` and `b`. <br><br>**Logic:** If we overwrite `a` with the division result first, we lose the original value needed to calculate the modulo. We must store the original values in temporary variables before performing the calculations and overwriting the pointers. |

### 🚀 Strings & Array Manipulation
| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex05: ft_putstr`](ex05)** | **Strings in C:** Displaying a string on the standard output. <br><br>**Logic:** In C, strings do not exist as a native type; they are simply arrays of characters ending with a null byte (`\0`). To print a string, we pass a pointer to its first character and loop through the memory addresses, writing each character until we hit `\0`. |
| **[`ex06: ft_strlen`](ex06)** | **Array Iteration:** Counting the number of characters in a string. <br><br>**Logic:** Similar to `ex05`, we iterate through the character array using a `while` loop until we encounter the null-terminator, keeping a counter of how many steps we take. |
| **[`ex07: ft_rev_int_tab`](ex07)** | **Array Manipulation:** Reversing the order of elements in an array of integers. <br><br>**Logic:** We use two index trackers: one starting at the beginning of the array (`0`) and one at the end (`size - 1`). We swap the values at these indices using a temporary variable, then move both trackers toward the center until they meet. |
| **[`ex08: ft_sort_int_tab`](ex08)** | **Sorting Algorithms:** Sorting an integer array in ascending order. <br><br>**Logic:** This requires implementing a basic sorting algorithm (such as Bubble Sort or Selection Sort). It involves nested loops to repeatedly step through the array, compare adjacent elements, and swap them if they are in the wrong order. |

---

## 🛠️ Instructions

### 🧪 Compilation & Testing (The Master Test)
Unlike Shell scripts, C programs must be compiled before they can be executed. Furthermore, these exercises strictly ask for functions, not complete programs. 

To make testing incredibly easy while avoiding "undefined reference" linker errors, the `tester.c` file in the root directory uses **C Preprocessor Macros** (`#ifdef`). This allows you to selectively compile and test only the exercises you want.

1. **Clone the repository:**
   ```bash
   git clone <your_repository_link>
   cd 42-Piscine/C-01
   ```

2. **Test a Single Exercise:**
   Pass the corresponding `-D EX**` flag to activate that specific test block inside `tester.c`.
   ```bash
   # Example for ex02:
   cc -Wall -Wextra -Werror -D EX02 tester.c ex02/ft_swap.c -o test_ex02
   ./test_ex02
   ```

3. **Test Multiple Exercises Together:**
   You can chain multiple `-D` flags to test several functions at once, provided you include all their `.c` files in the command.
   ```bash
   # Example for ex05 and ex06:
   cc -Wall -Wextra -Werror -D EX05 -D EX06 tester.c ex05/ft_putstr.c ex06/ft_strlen.c -o test_strings
   ./test_strings
   ```

4. **Test ALL Exercises at Once:**
   By passing the `-D TEST_ALL` master flag, you can activate the entire testing suite in one go!
   ```bash
   cc -Wall -Wextra -Werror -D TEST_ALL tester.c ex00/ft_ft.c ex01/ft_ultimate_ft.c ex02/ft_swap.c ex03/ft_div_mod.c ex04/ft_ultimate_div_mod.c ex05/ft_putstr.c ex06/ft_strlen.c ex07/ft_rev_int_tab.c ex08/ft_sort_int_tab.c -o test_all
   ./test_all
   ```

> **⚠️ WARNING for 42 Students:** Do not push `tester.c` or any executable files to your final Moulinette repository! They are strictly for local testing purposes. Submitting unauthorized files will result in a 0.

### 🚨 The Norm
Moulinette relies on a program called `norminette` to check if your files comply with the Norm. Every single `.c` and `.h` file must pass. 

**The 42 Header:**
Before writing any code, every file must start with the standard 42 header. `norminette` will automatically fail any file missing this specific signature.
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:20:25 by maaugust          #+#    #+#             */
/*   Updated: 2025/02/21 10:49:17 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
```

Run the following command before pushing:
```bash
norminette -R CheckForbiddenSourceHeader <file.c>
```

---

## 📚 Resources & References

* `man 3 write` - Manual for the write system call.
* [Pointers in C - A Visual Guide](https://www.youtube.com/watch?v=zuegQmMdy8M) - Excellent for visualizing memory allocation.
* [42 Norm V4](https://cdn.intra.42.fr/pdf/pdf/96987/en.norm.pdf) - The strict coding standard for 42 C projects.
* [Official 42 Norminette Repository](https://github.com/42School/norminette) - The open-source linter enforcing the strict 42 coding standard.

### 🤖 AI Usage Guidelines
* **Code:** No AI-generated code was used to solve these exercises. All C functions were built manually to strictly comply with the 42 Norm and deeply understand manual memory manipulation, enforcing the concept that learning is about developing the ability to find an answer, not just getting one directly.
* **Documentation:** AI tools were utilized to structure this `README.md` and format the logic breakdowns to create a clean, accessible educational resource for fellow 42 students.
