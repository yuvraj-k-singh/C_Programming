# 🧠 C Programming Repository

A collection of C programs, exercises, and projects to master the C language. This repository documents my journey and progress in strengthening fundamental programming skills.

---

## 📁 Repository Structure

The code is logically organized into subfolders based on the type of program or concept covered:

| Directory Name | Description | Key Concepts Covered |
| :--- | :--- | :--- |
| `input_output/` | Fundamental C programs (variables) | `printf()`, `scanf()`, Control Flow |4
| `Conditional/` | Fundamental C programs (conditional operator) |
| `Loops/` | Loops involve for loop, while loop, do while loop |
| `arrays/` | Programs involving single and multi-dimensional arrays | Memory Layout, Array Traversal |
| `2D arrays/` | Programs involving multi-dimensional arrays | Memory Layout, Array Traversal |
| `function/` | Programs involving void, int function |
| `strings/` | String handling and manipulation exercises | String Functions (`strcpy`, `strlen`), Character Pointers |
| `pointers/` | Pointer operations, address referencing, and memory management | Pointer Arithmetic, Passing by Reference |
| `structures/` | Programs demonstrating structures, unions, and enums | User-Defined Data Types, Data Encapsulation |
| `file_handling/` | Exercises focusing on file input/output (I/O) in C | `fopen()`, `fprintf()`, `fscanf()`, `fclose()` |
| `projects/` | Mini projects and small applications written in C | Full Program Design, Problem Solving |

---

## 🚀 Getting Started

### Prerequisites

To compile and run any of the programs in this repository, ensure you have the following installed:

* **GCC compiler** (verify with `gcc --version`)
* **Git** (for version control)
* Any C IDE or text editor (e.g., VS Code, Sublime Text)

### Installation & Usage

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/](https://github.com/)<your-username>/c-programming.git
    cd c-programming
    ```

2.  **Compile and run a program:**
    Navigate to the desired directory (e.g., `cd basics/`) and execute the following commands:
    ```bash
    # Compile the source file (e.g., 'filename.c')
    gcc filename.c -o output

    # Run the compiled executable
    ./output
    ```

---

## 📚 Topics Covered

The repository is built around the following core C concepts:

* Variables, Data Types, and Operators
* Control Statements (`if-else`, loops, `switch`)
* Functions, Parameter Passing, and Recursion
* Arrays and Strings
* Pointers and Dynamic Memory Allocation (`malloc`, `free`)
* Structures, Unions, and Type Definitions
* File Handling in C
* Mini Projects and Problem Solving

---

## 🧩 Example Program

Here is the classic "Hello, World!" program found in the repository:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

---

## 🤝 Contributing
While this is a personal portfolio, suggestions for improvements or alternative solutions are always welcome.

1. Fork this repository.

2. Create a new branch (git checkout -b feature/your-feature-name).

3. Commit your changes (git commit -m 'Add a new feature or fix').

4. Push to your fork and open a Pull Request.
