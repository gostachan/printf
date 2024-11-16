#include <stdarg.h>

void print_p(va_list *ptr)
{
	long p;
	p = va_arg(*ptr, long);
	printf("%ld", p);
}
