/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmisaki <hmisaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:41:53 by hmisaki           #+#    #+#             */
/*   Updated: 2024/11/17 21:00:12 by hmisaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/print.h"
#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...);

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		index;
	int		res;

	if (!format)
		return -1;

	va_start(arg, format);
	index = 0;
	res = 0;
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
	return (res);
}
