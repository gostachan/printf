#include "headers/print.h"
#include "headers/utils.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	ft_printf(const char *, ...);

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		index;
	int		res;

	res = ft_strlen((char *)format);
	va_start(arg, format);
	index = 0;
	while (format[index])
	{
		if (format[index] != '%')
			write(1, &format[index], 1);
		else if (format[index + 1] && format[index] == '%')
		{
			ft_print(&arg, format[index + 1]);
			index++;
		}
		index++;
	}
	return (res);
}
