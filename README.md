# C - \_printf

### Description

Function imitates printf from C language. _printf prints characters depending on format given according to each specifier.

Specifiers:
| Type | Desc.
| :---: |:-:|
|  %c | prints a character |
|  %s | prints a string |
|  %p | prints '%' |
|  %d | prints a decimal |
|  %i | prints an integer |

### Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called main.h
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the _putchar function for this project
---

### Compilation & Testing

Function porototype:

    int _printf(const char *format, ...);

Compiled with:

    gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c

---

### Example

Print a string:

Print an integer:

---
### File Description

- \_printf  - function in file is _printf gives the stdout according to format specifier.
- \_putchar - function in file is _putchar prints a character to stdout.
- printfunc.c - contains functions which select according to format specifier.
- main.h - header file.
---
### Flowcharts

![](https://imgur.com/a/W8PQcPd)

---

### Authors

Santiago Rodriguez and Emiliano Rodrigue
