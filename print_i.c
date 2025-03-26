#include <stdio.h>
#include <unistd.h>
#include "main.h"

int print_int(va_list args)
{
int num = va_arg(args, int);
char buffer[12];
int len = sprintf(buffer, "%d", num);
return (write(1, buffer, len));
}
