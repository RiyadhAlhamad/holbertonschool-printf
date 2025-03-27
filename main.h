#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_decimal(va_list args);
int print_int(va_list args);

#endif
