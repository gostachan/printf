/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmisaki <hmisaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:40:51 by hmisaki           #+#    #+#             */
/*   Updated: 2024/11/17 20:58:39 by hmisaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/utils.h"
#include <unistd.h>
#include <stdarg.h>

int	print_s(va_list *ptr)
{
	char	*s;

	s = va_arg(*ptr, char *);
	if (!s)
	{
		write(1, "(null)", 6);
		return 6;
	}
	return (putstr(s));
}
