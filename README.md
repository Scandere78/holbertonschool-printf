
# Projet Printf
- Holberton School
--------------------
## Synopsis 
- Many functions that print, according to a format, the arguments received from the user.
--------------------------------------------
## Description 
We dissect the function in 5 subfunctions:
- int _print_char(va_list args) print a char 
- int _print_modulo(va_list args) print a percentage sign 
- int print_string(va_list args) print a string 
- int _print_decimal_recursive(int num) is connect with a second under function int _print_decimal(va_list args) thats print an integer and number
- c: Print a character
- s: Print a string
- %: Print the character '%'
- d: Print a number
- i: Print an integer
------------------------------------------------
## Compilation Command 
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
## Requirements 
Editor: VI All files will be compiled on Ubuntu 20.04 LTS. A README.md file, at the root of the folder of the project is mandatory. Code is using the Betty syle. Global variables is not allowed. Cannot use more than 5 functions per file. Prototypes of all functions should be included in a header file called main.h.
## Example
_printf("Hello World")

stdout: Hello World

