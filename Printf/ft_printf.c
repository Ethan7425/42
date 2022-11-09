/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:43:19 by etbernar          #+#    #+#             */
/*   Updated: 2022/11/09 13:08:41 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *suffix, ...)
{
	int pos;
	int	count;

	count = 0;
	pos = 0;

	va_list args;
	va_start(args, suffix);

	while(suffix[pos])
	{
		if (suffix[pos] != '%')
		{
			ft_putchar(suffix[pos]);
			count++;
		}
		if (suffix[pos] == '%')
		{
			pos++;
			count += check_suffix(&suffix[pos], args);
		}
		pos++;
		
	}
	return (count);
}
		
	/*
		if (suffix[i] == 'p')
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
     */

	printf("COUNT EHTAN: %d\n", ft_printf("SALUT %s %c %u","salut",'e', 42)); 
	printf("COUNT ORDI: %d\n", printf("SALUT %s %c %u","salut",'e', 42)); 


}