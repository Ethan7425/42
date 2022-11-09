/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:20:22 by etbernar          #+#    #+#             */
/*   Updated: 2022/11/09 13:09:06 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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