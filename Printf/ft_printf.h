/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:54:15 by etbernar          #+#    #+#             */
/*   Updated: 2022/11/14 15:05:55 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int				check_suffix(const char suffix, va_list args);
int				ft_printf(const char *suffix, ...);
void			ft_putchar(char c);
size_t			ft_strlen(const char *str);
int				ft_put_c(char c);
int				ft_put_s(char *str);
int				ft_put_i(int n);
int				ft_put_u(unsigned int nb);
int				ft_put_x(unsigned int nb, int type);
unsigned long	ft_put_p(unsigned int nb);
int				ft_base16(unsigned int nb, char *alpha);
void			ft_putstr(char *s);

#endif