/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:52:17 by etbernar          #+#    #+#             */
/*   Updated: 2022/10/26 14:56:02 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;

	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	if (str[i] == '+')
	{
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
		res = res * 10 + ((str[i++]) - '0');
	return (res * sign);
}

int main()
{
    char str[] = "-2147483648";
    printf("%d\n", ft_atoi(str));
    return (0);
}