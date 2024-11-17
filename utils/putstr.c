/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmisaki <hmisaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:42:02 by hmisaki           #+#    #+#             */
/*   Updated: 2024/11/17 14:42:03 by hmisaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/utils.h"
#include <unistd.h>

void	putstr(char *str)
{
	int	len;

	len = ft_strlen(str);
	write(1, str, len);
}
