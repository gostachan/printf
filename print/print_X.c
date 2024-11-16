#include <stdarg.h>
#include "../headers/utils.h"

void print_X(va_list *ptr)
{
	unsigned int ui;
	char *hex;
	ui = va_arg(*ptr, unsigned int);
	hex = to_hex(ui, "0123456789ABCDEF");
	putstr("0x");
	putstr(hex);
}
