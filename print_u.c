#include <unistd.h>
#include <stdarg.h>

int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[32];
	int i = 0, count = 0;

	if (num == 0)
		return (write(1, "0", 1));

	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	while (i--)
		count += write(1, &buffer[i], 1);

	return (count);
}
