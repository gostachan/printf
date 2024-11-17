#include <stdarg.h>
#include <stdlib.h>

static int	get_les_size(unsigned int n);
char		*to_oct(unsigned long long n, char *base);

static int	get_les_size(unsigned int n)
{
	int	res;

	if (n == 0)
		return (1);
	res = 0;
	while (n > 0)
	{
		n /= 8;
		res++;
	}
	return (res);
}

char	*to_oct(unsigned long long n, char *base)
{
	char	*res;
	int		res_size;

	res_size = get_les_size(n);
	res = malloc(sizeof(char) * (res_size + 1));
	if (!res)
		return (NULL);
	res[res_size] = '\0';
	while (res_size >= 0)
	{
		res[--res_size] = base[n % 8];
		n /= 8;
	}
	return (res);
}
