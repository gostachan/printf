/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmisaki <hmisaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:41:23 by hmisaki           #+#    #+#             */
/*   Updated: 2024/11/17 14:41:24 by hmisaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/utils.h"
#include <stdarg.h>
#include <stdlib.h>

int	print_x(va_list *ptr, char *base_cahr)
{
	unsigned int	ui;
	char			*hex;
	int res;

	ui = va_arg(*ptr, unsigned int);
	hex = to_hex(ui, base_cahr);
	putstr("0x");
	res = putstr(hex) + 2;
	free(hex);
	return res;
}
