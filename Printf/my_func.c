/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_func.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:14:53 by etbernar          #+#    #+#             */
/*   Updated: 2022/11/10 21:38:29 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_c(const	char *c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_put_i(int n)
{
	unsigned int	nb;
	int i;

	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		nb = -n;
		i++;
	}
	else
	{
		nb = n;
		i++;
	}
	if (nb > 9)
	{
		ft_put_i(nb / 10);
		nb %= 10;
		i++;
	}
	ft_putchar(nb + '0');
	return (i);
}

int	ft_put_s(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

unsigned int	ft_put_u(unsigned int n)
{
	unsigned int	nb;
	int i;

	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		nb = -n;
		i++;
	}
	else
	{
		nb = n;
		i++;
	}
	if (nb > 9)
	{
		ft_put_u(nb / 10);
		nb %= 10;
		i++;
	}
	ft_putchar(nb + '0');
	return (i);
}