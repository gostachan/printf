/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmisaki <hmisaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:41:36 by hmisaki           #+#    #+#             */
/*   Updated: 2024/11/17 14:41:37 by hmisaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include <stdarg.h>

int		ft_print(va_list *arg, char c);
void	print_c(va_list *ptr);
void	print_s(va_list *ptr);
void	print_p(va_list *ptr);
void	print_d(va_list *ptr);
void	print_i(va_list *ptr);
void	print_u(va_list *ptr);
void	print_x(va_list *ptr, char *base_char);

#endif
