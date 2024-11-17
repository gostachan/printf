/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmisaki <hmisaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:41:58 by hmisaki           #+#    #+#             */
/*   Updated: 2024/11/17 14:41:59 by hmisaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

static int	get_les_size(unsigned long long n);
char		*to_hex(unsigned long long n, char *base);

static int	get_les_size(unsigned long long n)
{
	int	res;

	if (n == 0)
		return (1);
	res = 0;
	while (n > 0)
	{
		n /= 16;
		res++;
	}
	return (res);
}

char	*to_hex(unsigned long long n, char *base)
{
	char	*res;
	int		res_size;

	res_size = get_les_size(n);
	res = malloc(sizeof(char) * (res_size + 1));
	if (!res)
		return (NULL);
	res[res_size] = '\0';
	while (res_size > 0)
	{
		res[--res_size] = base[n % 16];
		n /= 16;
	}
	return (res);
}
