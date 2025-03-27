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
		return -1;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			switch (*format)
			{
				case 's': count += print_string(args); break;
				case 'c': count += print_char(args); break;
				case '%': count += print_percent(args); break;
				case 'd': count += print_decimal(args); break;
				case 'i': count += print_int(args); break;
				default:
					  write(1, format, 1);
					  count += 1;
			}
		}else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return count;
}
