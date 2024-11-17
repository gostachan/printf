/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmisaki <hmisaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:40:37 by hmisaki           #+#    #+#             */
/*   Updated: 2024/11/17 14:40:38 by hmisaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/utils.h"
#include <stdarg.h>

#include <stdio.h>

int	print_d(va_list *ptr)
{
	int	input;
	int res;

	input = va_arg(*ptr, int);
	res = putnbr(input);
	return (res);
}
