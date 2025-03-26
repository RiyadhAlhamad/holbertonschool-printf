#include <stdarg.h>
#include <unistd.h>
#include "main.h"

int print_percent(va_list args)
{
	(void)args;
	return write(1, "%", 1);
}
