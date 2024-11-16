#include <unistd.h>

static void rec(long long n)
{
	char c;

	c = n % 10 + '0';
	if (n == 0)
		return;
	rec(n / 10);
	write(1, &c, 1);
}

void putnbr(long long n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	rec(n);
}
