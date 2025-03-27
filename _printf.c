#include <unistd.h>
#include "main.h"
#include <stdarg.h>
/**
* _printf - Custom printf function that mimics printf behavior
* @format: Format string containing the characters and format specifiers
*
* Return: Number of characters printed, or -1 if format is NULL
*/
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    if (!format)
        return (-1);

    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 's')
                count += print_string(args);
            else if (*format == 'c')
                count += print_char(args);
            else if (*format == '%')
            {
                write(1, "%", 1); // Print only the '%' character
                count += 1; // Increment count for '%' printed
            }
            else if (*format == 'd')
                count += print_decimal(args);
            else if (*format == 'i')
                count += print_int(args);
            else
            {
                write(1, "%", 1);
                write(1, format, 1);
                count += 2; // Account for both '%' and the next character
            }
        }
        else
        {
            write(1, format, 1);
            count++;
        }
        format++;
    }
    va_end(args);
    return (count);
}
