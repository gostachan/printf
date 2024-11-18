/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmisaki <hmisaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:40:48 by hmisaki           #+#    #+#             */
/*   Updated: 2024/11/17 14:41:29 by hmisaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/utils.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>

int	print_p(va_list *ptr)
{
	void		*p;
	uintptr_t	addr;
	char		*hex;
	int			res;

	res = 0;
	p = va_arg(*ptr, void *);
	if (!p)
	{
		write(1, "(nil)", 5);
		return 5;
	}
	addr = (uintptr_t)p;
	hex = to_hex(addr, "0123456789abcdef");
	putstr("0x");
	res = putstr(hex) + 2;
	free(hex);
	return res;
}
