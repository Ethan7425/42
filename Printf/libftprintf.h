/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:54:15 by etbernar          #+#    #+#             */
/*   Updated: 2022/11/08 15:33:00 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

void 	check_suffix(const char *suffix, va_list args);
int 	ft_printf(const char *suffix, ...);
void	ft_putchar(char c);
size_t	ft_strlen(const char *str);




#endif