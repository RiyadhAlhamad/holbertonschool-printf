#include <stdio.h>
#include <unistd.h>
/**
* print_int - Prints an integer
* @args: Argument list containing the integer to print
*
* Return: Number of characters printed
*/
int print_int(va_list args)
{
int num = va_arg(args, int);
char buffer[12];
int len = sprintf(buffer, "%d", num);
return (write(1, buffer, len));
}
