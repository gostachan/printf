/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmisaki <hmisaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:42:02 by hmisaki           #+#    #+#             */
/*   Updated: 2024/11/17 20:57:53 by hmisaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/utils.h"
#include <unistd.h>

int	putstr(char *str)
{
	int	len;

	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("res = %d\n", putstr("42Tokyo\n"));
// }
