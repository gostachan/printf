#include <stdarg.h>
#include <stdint.h>
#include "../headers/utils.h"

void print_p(va_list *ptr)
{
	void *p;
	uintptr_t addr;
	char *hex;

	p = va_arg(*ptr, void *);
	addr = (uintptr_t)p;
	hex = to_hex(addr, "0123456789abcdef");
	putstr("0x");
	putstr(hex);
}
