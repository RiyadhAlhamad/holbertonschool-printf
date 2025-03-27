.TH printf 3 "March 2025" "Custom printf" "Library Functions Manual"
.SH NAME
printf \- Custom implementation of printf function
.SH SYNOPSIS
.B #include "main.h"
.PP
.B int _printf(const char *format, ...);
.SH DESCRIPTION
The _printf function produces output according to a format.
The format string contains directives that are replaced with
corresponding arguments.
.SH RETURN VALUE
Returns the number of characters printed (excluding null byte),
or -1 on error.
.SH SEE ALSO
.BR printf (3), 
.BR puts (3)
________________________________________________________________________

Simple printf Clone

This project is a custom implementation of the printf function in C. It provides basic functionality to print formatted output to the standard output (stdout).

Features

Handles format specifiers: %c (character), %s (string), %d and %i (integers), and %% (percent sign).

Uses variadic functions to process multiple arguments.

Provides modular functions for different format specifiers.

Functions Implemented

_printf - Main function that processes the format string and calls the respective handlers.

print_char - Prints a single character.

print_string - Prints a string (handles NULL case by printing (null)).

print_percent - Prints a percent sign (%).

print_decimal & print_int - Print integers in decimal format.

Compilation & Usage

Compile using:

gcc -Wall -Werror -Wextra -pedantic *.c -o my_printf

Use _printf just like printf:

_printf("Hello %s, number: %d!", "World", 42);

Limitations

Does not support floating points or advanced formatting.

Minimal error handling.

Author

Riyadh Alhamd & Osama Alghamdi
