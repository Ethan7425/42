/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_suffix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:19:49 by etbernar          #+#    #+#             */
/*   Updated: 2022/11/10 21:38:12 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_suffix(const char *suffix, va_list args)
{
	int	count;

	count = 0;
	if (suffix[count] == 'c')
		count += ft_put_c(va_arg(args, const char *));
	if (suffix[count] == 's')
		count += ft_put_s(va_arg(args, char *));
	if (suffix[count] == 'i' || suffix[count] == 'd')
		count += ft_put_i(va_arg(args, int));
	if (suffix[count] == 'u')
		count += ft_put_u(va_arg(args, unsigned int));
	if (suffix[count] == 'X' || suffix[count] == 'x')
	return (count);
}
