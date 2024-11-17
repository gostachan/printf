#include "headers/utils.h"
#include <stdint.h>
#include <stdio.h>

// int main(void)
// {
// 	char *str = "hoge";
// 	long ll;
// 	ll = (long long)str;
// 	printf("%p\n", str);
// 	printf("%ld\n", ll);
// 	printf("%ld\n", 0x5fd7bad3a004);
// }

void	l(void *p)
{
	uintptr_t	ptr;
	char		*hex;

	ptr = (uintptr_t)p;
	hex = to_hex(ptr, "0123456789abcdef");
	putstr("0x");
	putstr(hex);
}

int	main(void)
{
	char	*str;

	str = "hoge";
	l(str);
	printf("\n");
	printf("%p", str);
	printf("\n");
}
