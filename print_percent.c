#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
* print_percent - Prints a percent symbol (%)
* @args: Argument list (unused)
*
* Return: Number of characters printed (always 1)
*/
int print_percent(va_list args)
{
	(void)args;
	return write(1, "%", 1);
}
