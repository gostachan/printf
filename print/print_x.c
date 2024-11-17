#include "../headers/utils.h"
#include <stdarg.h>
#include <stdlib.h>

void	print_x(va_list *ptr)
{
	unsigned int	ui;
	char			*hex;

	ui = va_arg(*ptr, unsigned int);
	hex = to_hex(ui, "0123456789abcdef");
	putstr("0x");
	putstr(hex);
	free(hex);
}
