#include "main.h"

/**
 * print_binary - Prints an unsigned integer in binary format.
 * @args: List of arguments.
 *
 * Return: Number of characters printed.
 */
int print_binary(va_list args)
{
	unsigned int num;
	char buffer[32];
	int i = 0, count = 0;

	num = va_arg(args, unsigned int);
	if (num == 0)
		return (write(1, "0", 1));

	while (num > 0)
	{
		buffer[i++] = (num % 2) + '0';
		num /= 2;
	}

	while (i--)
		count += write(1, &buffer[i], 1);

	return (count);
}
