#include "../headers/utils.h"
#include <stdarg.h>

void	print_i(va_list *ptr)
{
	int	input;

	input = va_arg(*ptr, int);
	putnbr(input);
}
