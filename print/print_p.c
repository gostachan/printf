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
#include <stdint.h>

int	print_p(va_list *ptr)
{
	void		*p;
	uintptr_t	addr;
	char		*hex;

	p = va_arg(*ptr, void *);
	addr = (uintptr_t)p;
	hex = to_hex(addr, "0123456789abcdef");
	putstr("0x");
	return (putstr(hex) + 2);
}
