#include <stdarg.h>
#include "../headers/utils.h"

void print_i(va_list *ptr)
{
	int input;

	input = va_arg(*ptr, int);
	putnbr(input);
}
