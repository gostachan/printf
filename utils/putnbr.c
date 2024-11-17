/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmisaki <hmisaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:42:05 by hmisaki           #+#    #+#             */
/*   Updated: 2024/11/17 14:42:07 by hmisaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	rec(long long n, int *res)
{
	char	c;

	c = n % 10 + '0';
	if (n == 0)
		return ;
	rec(n / 10, res);
	(*res)++;
	write(1, &c, 1);
}

int	putnbr(long long n)
{
	int res;
	res = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		res++;
	}
	rec(n, &res);
	return res;
}
