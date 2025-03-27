#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
/**
* print_decimal - Prints an integer in decimal format
* @args: Argument list containing the integer to print
*
* Return: Number of characters printed
*/
int print_decimal(va_list args)
{
int num = va_arg(args, int);
char buffer[12];
int len = sprintf(buffer, "%d", num);
return write(1, buffer, len);
}
