/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:43:19 by etbernar          #+#    #+#             */
/*   Updated: 2022/11/08 15:32:09 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *suffix, ...)
{
	int pos;
	int	count;

	count = 0;
	pos = 0;

	va_list args;
	va_start(args, suffix);

	while(suffix[pos] != '\0')
	{
		if (suffix[pos] != '%' )//&& suffix[i - 1] != '%')
		{
			ft_putchar(suffix[pos]);

		}
		if (suffix[pos] == '%')
		{
			pos++;
			check_suffix(&suffix[pos], va_list args, pos);

		}
		pos++;
	}
return (0);

}
		
	/*
		if (suffix[i] == 'c')
		if (suffix[i] == 's')
		if (suffix[i] == 'p')
		if (suffix[i] == 'd')
		if (suffix[i] == 'i')
		if (suffix[i] == 'u')
		if (suffix[i] == 'x')
		if (suffix[i] == 'X')
		if (suffix[i] == '%')
	*/
	
	
	

int main()
{
   /* printf("1: hello my name is %s and i am %d old\n", "ethan", 20);
    printf("2: hello my name is %s and i am %d old\n", "ethan", 20);
    printf("1.1: %d\n", printf("something random.\n"));
    printf("2.1: %d\n", ft_printf("something random.\n"));
    ft_printf("2.2: %d", ft_printf("something random.\n")); */

	ft_printf("coucou %c hello %c", 'r', 'e'); 
}