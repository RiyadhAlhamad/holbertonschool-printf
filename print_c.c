#include <stdarg.h>
#include <unistd.h>
/**
* print_char - Prints a single character
* @args: Argument list containing the character to print
*
* Return: Number of characters printed (always 1)
*/
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	return (write(1, &c, 1));
}
