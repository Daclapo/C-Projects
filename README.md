# C Programming Exercises - 42Cursus & 42Piscine

Welcome! This repository is a collection of my C programming exercises and projects developed at [42Madrid](https://www.42madrid.com). Here, you’ll find solutions to tasks from the 42Piscine (introductory C programming bootcamp) and 42Cursus (main curriculum projects). These exercises reflect the progressive learning and challenges of the 42 curriculum.

> **Note:** This repository is continuously updated with new projects as they are completed and successfully evaluated, reflecting ongoing progress through the 42Madrid program.

---

## Description

This repository includes exercises and projects divided into two main sections:

- **42Piscine**: Contains foundational C and shell exercises from the piscine, an intensive selection bootcamp at 42Madrid. These exercises cover topics such as:
  - Basic syntax and control flow
  - Loops and conditionals
  - Functions and recursion
  - Memory management with pointers
  - Basic data structures (arrays, strings, matrices, etc.)

- **42Cursus**: Projects from the main curriculum at 42Madrid, focused on advanced C programming and broader computer science concepts, including:
  - File handling and system-level programming
  - Dynamic memory allocation
  - Advanced data structures (linked lists, stacks, queues)
  - Networking and multi-threading basics
  - Performance optimization and algorithm design

The repository showcases a progression from basic to advanced projects, reflecting the structured learning path at 42Madrid.


---

### Directory Structure and Brief Description of Each Directory 


| **Directory**          | **Description**                                                |
|--------------------|------------------------------------------------------------|
| [**42Piscine**](https://github.com/Daclapo/C-Exercices/tree/main/42Piscine)      | Foundational C and shell exercises                         |
| ├─ [**Shell00**](https://github.com/Daclapo/C-Exercices/tree/main/42Piscine/Shell00)     | Basic shell scripting                                      |
| ├─ [**Shell01**](https://github.com/Daclapo/C-Exercices/tree/main/42Piscine/Shell01)     | Working with files, directories, and shell variables       |
| ├─ [**C00**](https://github.com/Daclapo/C-Exercices/tree/main/42Piscine/C00)         | Basic syntax, data types, and simple input/output         |
| ├─ [**C01**](https://github.com/Daclapo/C-Exercices/tree/main/42Piscine/C01)         | Functions, conditionals, and basic logic                   |
| ├─ [**C02**](https://github.com/Daclapo/C-Exercices/tree/main/42Piscine/C02)         | String manipulation and basic pointer usage                |
| ├─ [**C03**](https://github.com/Daclapo/C-Exercices/tree/main/42Piscine/C03)         | Advanced string handling and character operations          |
| ├─ [**C04**](https://github.com/Daclapo/C-Exercices/tree/main/42Piscine/C04)         | Introduction to pointers and memory addressing             |
| ├─ [**C05**](https://github.com/Daclapo/C-Exercices/tree/main/42Piscine/C05)         | Recursive functions and introductory algorithms            |
| ├─ [**C06**](https://github.com/Daclapo/C-Exercices/tree/main/42Piscine/C06)         | Understanding arrays and multidimensional data structures  |
| ├─ [**C07**](https://github.com/Daclapo/C-Exercices/tree/main/42Piscine/C07)         | Deeper exploration of pointers and memory allocation       |
| ├─ [**C08**](https://github.com/Daclapo/C-Exercices/tree/main/42Piscine/C08)         | File handling and file descriptors in C                    |
| └─ [**C09**](https://github.com/Daclapo/C-Exercices/tree/main/42Piscine/C09)         | Advanced memory handling and file operations               |
|                    |                                                            |  
| [**42Cursus**](https://github.com/Daclapo/C-Exercices/tree/main/42Cursus)       | Advanced C projects                                        |
| ├─ [**PDFs**](https://github.com/Daclapo/C-Exercices/tree/main/42Cursus/PDFs)        | Project documentation, guidelines, and references          |
| ├─ [**libft**](https://github.com/Daclapo/C-Exercices/tree/main/42Cursus/libft)       | Custom implementation of standard C library functions      |
| ├─ [**printf**](https://github.com/Daclapo/C-Exercices/tree/main/42Cursus/printf)      | Recreation of the `printf` function for formatted output   |
| └─ [**get_next_line**](https://github.com/Daclapo/C-Exercices/tree/main/42Cursus/get_next_line) | Project for reading lines from a file descriptor        |



Each subdirectory includes a README file with details on specific project requirements, objectives, and instructions.


---

### Cloning and Compiling the Projects

To work with this repository, follow these steps to clone it and compile individual projects.

#### Step 1: Clone the Repository

Use the following command to clone this repository to your local machine:
```bash
git clone https://github.com/daclapo/c-exercices.git
cd c-exercices
```

#### Step 2: Compiling Projects

Each project within this repository may require a different approach to compile. Below are general instructions for the common types of compilations you’ll encounter:


1.	Using a Makefile
Many projects include a Makefile to simplify compilation. In such cases, navigate to the project directory and use the following command:
```bash
make
```

This will generate an executable (usually named according to the project). You can then run it using:
```bash
./executable_name
```

To clean up compiled files, use:
```bash
make clean
```


2.	Compiling with GCC or CC
For projects that don’t include a Makefile, you can compile files manually with gcc or cc. For example:
```bash
gcc -Wall -Wextra -Werror file.c -o executable_name
```

This will compile file.c with common flags and create an executable named executable_name. Run it with:
```bash
./executable_name
```


Feel free to explore the directories to see the detailed work and progress throughout the program.

