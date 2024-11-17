/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmisaki <hmisaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:41:42 by hmisaki           #+#    #+#             */
/*   Updated: 2024/11/17 14:41:44 by hmisaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("hoge%d\n", 42);
	ft_printf("hoge%x %d %% \n", 0xFFFF, 1234);
	ft_printf("hoge%X\n", 0xFFFF);
}

// int main(void)
// {
// 	char c = 'a';
// 	ft_printf("%c", c);
// 	printf("\n");

// 	char *s = "42Tokyo";
// 	ft_printf("%s", s);
// 	printf("\n");

// 	char *cp = "42Tokyo";
// 	ft_printf("%p", cp);
// 	printf("\n");

// 	int i = 42;
// 	ft_printf("%d", i);
// 	printf("\n");

// 	ft_printf("%i", i);
// 	printf("\n");

// 	int *ip = &i;
// 	ft_printf("%p", ip);
// 	printf("\n");

// 	unsigned int u = -1;
// 	ft_printf("%u", u);
// 	printf("\n");

// 	int x = 0x12345;
// 	ft_printf("%x", x);
// 	printf("\n");

// 	ft_printf("%X", x);
// 	printf("\n");
// }
