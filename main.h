#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int print_decimal(va_list args);
int print_int(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args, int uppercase);

#endif
