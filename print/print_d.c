#include <stdarg.h>
#include "../headers/utils.h"

void print_d(va_list *ptr)
{
	int i;
	i = va_arg(*ptr, int);
	putnbr(i);
}
