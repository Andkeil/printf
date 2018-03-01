Printf
_printf version of printf written by Andrew Keil and Pamela Maupin

This version of _printf acts like the printf function._printf is the function used to display the output text on terminal in C programming laguage. It uses many conversions, the ones that we will be using in this _printf are s, i, d, %%, R, r, d and b. It will return the number of characters printed.

Example Using _printf:

To print a string:
#include "holberton.h"

_printf("String:[%s]\n", "I am a string !");
Output- String: [I am a string !]

About The Project:

All files are Betty formatted.
All files are compiled with: $ gcc -Wall -Werror -Wextra -pedantic *.c

Bugs:

This _printf function cannot handle the x,X,o conversions and the l and h modifers.

Files:
1. _print_binary.c : Contains the code for converting integers into binary.
2. _printf.c : Contains the code for _printf.
3. adv_conversions.c : Contains the rot13 function and print reverse string
4. buffer.c : Contains the buffer.
5. conversions.c : Contains the functions used for specific conversions.
6. formatter.c : Contains the array of structures.
7. helper.c : Contains helper functions.
8. holberton.h : Header file that contains the prototypes for used functions and the standard libraries used.
9. README.md : Current file that has information about the project.
10. man_3_printf : the man page for _printf.