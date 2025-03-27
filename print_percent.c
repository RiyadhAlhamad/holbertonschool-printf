#include <unistd.h>
/**
* print_percent - Prints a percent symbol (%)
* @args: Argument list (unused)
*
* Return: Number of characters printed (always 1)
*/
int print_percent(void)
{
	return write(1, "%", 1);
}
