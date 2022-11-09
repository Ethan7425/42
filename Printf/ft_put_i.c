/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:20:30 by etbernar          #+#    #+#             */
/*   Updated: 2022/11/09 12:50:01 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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