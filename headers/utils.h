/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmisaki <hmisaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:41:39 by hmisaki           #+#    #+#             */
/*   Updated: 2024/11/18 20:41:24 by hmisaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

int		ft_strlen(char *str);
int		putnbr(long n);
int		putstr(char *str);
char	*to_oct(unsigned long long n, char *base);
char	*to_hex(unsigned long long n, char *base);

#endif
