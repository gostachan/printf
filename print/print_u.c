#include "../headers/utils.h"
#include <stdarg.h>

void	print_u(va_list *ptr)
{
	unsigned int	ui;

	ui = va_arg(*ptr, unsigned int);
	putnbr(ui);
}
