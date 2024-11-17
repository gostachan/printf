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
	if (c == 'c')
		return print_c(arg);
	else if (c == 's')
		return print_s(arg);
	else if (c == 'd')
		return print_d(arg);
	else if (c == 'i')
		return print_i(arg);
	else if (c == 'p')
		return print_p(arg);
	else if (c == 'u')
		return print_u(arg);
	else if (c == 'x')
		return print_x(arg, "0123456789abcdef");
	else if (c == 'X')
		return print_x(arg, "0123456789ABCDEF");
	write(1, &c, 1);
	return 1;
}
