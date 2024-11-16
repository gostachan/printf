#include <stdarg.h>
#include <stdlib.h>
#include "../headers/utils.h"

#include <stdio.h>

static char *to_hex(unsigned int n);
static int get_les_size(unsigned int n);

static int get_les_size(unsigned int n)
{
	int res;

	if (n == 0)
		return 1;
	res = 0;
	while (n > 0)
	{
		n /= 16;
		res++;
	}
	return res;
}

static char *to_hex(unsigned int n)
{
	char *res;
	int res_size;

	res_size = get_les_size(n);
	res = malloc(sizeof(char) * (res_size + 1));
	if (!res)
		return NULL;
	res[res_size] = '\0';
	while (res_size >= 0)
	{
		res[--res_size] = "0123456789abcdef"[n % 16];
		n /= 16;
	}
	return res;
}

void print_x(va_list *ptr)
{
	unsigned int ui;
	char *hex;
	ui = va_arg(*ptr, unsigned int);
	hex = to_hex(ui);
	putstr("0x");
	putstr(hex);
}
