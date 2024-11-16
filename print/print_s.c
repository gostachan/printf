#include <stdarg.h>
#include "../headers/utils.h"

void print_s(va_list *ptr)
{
	char *s;
	s = va_arg(*ptr, char *);
	putstr(s);
}
