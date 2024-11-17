/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdarg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmisaki <hmisaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:42:30 by hmisaki           #+#    #+#             */
/*   Updated: 2024/11/17 14:57:17 by hmisaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

/* print all non-negative args one at a time;
   all args are assumed to be of int type */
void	printargs(int arg1, ...)
{
	va_list	ap;
	int		i;

	va_start(ap, arg1);
	va_end(ap);
	putchar('\n');
}
