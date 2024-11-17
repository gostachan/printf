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

void	print_d(va_list *ptr)
{
	int	input;

	input = va_arg(*ptr, int);
	putnbr(input);
}
