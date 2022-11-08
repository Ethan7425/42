/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_suffix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:19:49 by etbernar          #+#    #+#             */
/*   Updated: 2022/11/08 15:35:08 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int check_suffix(const char *suffix, va_list args)
{
	int count;

	count = 0;
	if (suffix[count] == 'c')
		count += (char) ft_put_c(va_arg(args, int));
	if (suffix[count] == 's')
		count += ft_put_s(va_arg(args, char *));
	

	return (count);
}