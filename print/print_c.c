#include <stdarg.h>
#include <unistd.h>

void print_c(va_list *ptr)
{
	char c;
	c = va_arg(*ptr, int);
	write(1, &c, 1);
}
