#include <stdarg.h>
#include <unistd.h>

int print_hex(va_list args, int uppercase)
{
    unsigned int num = va_arg(args, unsigned int);
    char buffer[32];
    int i = 0, count = 0;
    char hex_digits[] = "0123456789abcdef";

    if (uppercase)
        hex_digits = "0123456789ABCDEF";  // If uppercase is needed

    if (num == 0)
        return (write(1, "0", 1));

    while (num > 0)
    {
        buffer[i++] = hex_digits[num % 16];
        num /= 16;
    }

    while (i--)
        count += write(1, &buffer[i], 1);

    return (count);
}
