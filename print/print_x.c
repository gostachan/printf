#include <stdarg.h>

void print_x(va_list *ptr)
{
	unsigned int ui;
	ui = va_arg(*ptr, unsigned int);
	printf("%x", ui);
}
