/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmisaki <hmisaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:41:53 by hmisaki           #+#    #+#             */
/*   Updated: 2024/11/17 14:55:10 by hmisaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/print.h"
#include <stdarg.h>
#include <unistd.h>

#include <stdio.h>

int	ft_printf(const char *format, ...);

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		index;
	int		res;

	va_start(arg, format);
	index = 0;
	while (format[index])
	{
		if (format[index] != '%')
		{
			write(1, &format[index], 1);
			res++;
		}
		else
		{
			if (format[index + 1])
			{
				res += ft_print(&arg, format[index + 1]);
				index++;
			}
		}
		index++;
	}
	printf("\nfrom ft_printf: res = %d\n", res);
	return (res);
}
