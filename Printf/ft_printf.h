/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:54:15 by etbernar          #+#    #+#             */
/*   Updated: 2022/11/10 21:38:10 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int				check_suffix(const char *suffix, va_list args);
int				ft_printf(const char *suffix, ...);
void			ft_putchar(char c);
size_t			ft_strlen(const char *str);
int				ft_put_c(const char *c);
int				ft_put_s(char *s);
int				ft_put_i(int n);
unsigned int	ft_put_u(unsigned int n);
void			ft_putstr(char *s);

#endif