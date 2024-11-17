/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmisaki <hmisaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:40:19 by hmisaki           #+#    #+#             */
/*   Updated: 2024/11/17 14:44:29 by hmisaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/print.h"
#include <unistd.h>

int	ft_print(va_list *arg, char c)
{
	int	res;

	res = 0;
	if (c == 'c')
		print_c(arg);
	else if (c == 's')
		print_s(arg);
	else if (c == 'd')
		print_d(arg);
	else if (c == 'i')
		print_i(arg);
	else if (c == 'p')
		print_p(arg);
	else if (c == 'u')
		print_u(arg);
	else if (c == 'x')
		print_x(arg, "0123456789abcdef");
	else if (c == 'X')
		print_x(arg, "0123456789ABCDEF");
	else
		write(1, &c, 1);
	return (res);
}
