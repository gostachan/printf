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
#include "headers/print.h"
#include <stdio.h>


int main(void)
{
	int res;
	res = ft_printf("hoge%d\n", 42);
	printf("res = %d\n", res);
}

// int main(void)
// {

	// char c = 'a';
	// if (ft_printf("%c\n", c) == printf("%c\n", c))
	// 	printf("c: success.\n\n");
	// else
	// 	printf("c: error.\n\n");

	// char *s = "42Tokyo";
	// if (ft_printf("%s\n", s) == printf("%s\n", s))
	// 	printf("s: success.\n\n");
	// else
	// 	printf("s: error.\n\n");

	// char *cp = "42Tokyo";
	// if (ft_printf("%p\n", cp) == printf("%p\n", cp))
	// 	printf("p: success.\n\n");
	// else
	// 	printf("p: error.\n\n");

	// int i = 42;
	// if (ft_printf("%d\n", i) == printf("%d\n", i))
	// 	printf("d: success.\n\n");
	// else
	// 	printf("d: error.\n\n");

	// if (ft_printf("%i\n", i) == printf("%i\n", i))
	// 	printf("i: success.\n\n");
	// else
	// 	printf("i: error.\n\n");

	// int *ip = &i;
	// if (ft_printf("%p\n", ip) == printf("%p\n", ip))
	// 	printf("ip: success.\n\n");
	// else
	// 	printf("ip: error.\n\n");

	// unsigned int u = -1;
	// if (ft_printf("%u\n", u) == printf("%u\n", u))
	// 	printf("u: success.\n\n");
	// else
	// 	printf("u: error.\n\n");

	// int x = 0x12345;
	// if (ft_printf("%x\n", x) == printf("%x\n", x))
	// 	printf("x: success.\n\n");
	// else
	// 	printf("x: error.\n\n");

	// if (ft_printf("%X\n", x) == printf("%X\n", x))
	// 	printf("X: success.\n\n");
	// else
	// 	printf("X: error.\n\n");
// }
