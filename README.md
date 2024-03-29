
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
- %c: Print a character
- %s: Print a string
- %%: Print the character '%'
- %d: Print a number
- %i: Print an integer
------------------------------------------------
## Compilation Command 
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
## Requirements 
Ubuntu 20.04 LTS
GCC Language standard gnu89
## Example
_printf("Hello World")

stdout: Hello World

## Flowchart
![Flowchart](https://raw.githubusercontent.com/Scandere78/holbertonschool-printf/main/Flowchart.png.png)

## Authors
Scandere
Youssoup
