/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:52:17 by etbernar          #+#    #+#             */
/*   Updated: 2022/10/26 11:02:41 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	whitespace(char c)
{
	if (c == '\n' || c == '\v' || c == '\t'
		|| c == '\r' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (whitespace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*(str++) == '-')
			sign *= -1;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			res = res * 10 + (*(str++) - '0');
		}
		else
			return (res * sign);
	}
	return (res * sign);
}

/*int	main()
{
	char	str[] = "\t\f\r\n\v    ----+-+12345b67";
	printf("%d\n", ft_atoi(str));
	return (0);
}*/