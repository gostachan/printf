/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmisaki <hmisaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:41:08 by hmisaki           #+#    #+#             */
/*   Updated: 2024/11/17 14:41:26 by hmisaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/utils.h"
#include <stdarg.h>

int	print_u(va_list *ptr)
{
	unsigned int	ui;

	ui = va_arg(*ptr, unsigned int);
	return putnbr(ui);
}
