#include <stdarg.h>

void print_X(va_list *ptr)
{
	unsigned int ui;
	ui = va_arg(*ptr, unsigned int);
	printf("%X", ui);
}
