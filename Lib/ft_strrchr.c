/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:27:22 by etbernar          #+#    #+#             */
/*   Updated: 2022/11/02 13:56:45 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	int			i;
	const char	*j;

	j = str;
	i = ft_strlen(str);
	str = (str + i);
	if (str == NULL)
		return (0);
	while (*str != *j && c != *str)
		str--;
	if (c == *str)
		return ((char *)str);
	return (0);
}
/*int main () 
{
	const char str[] = "abacadefgahij";	
	const char ch = 'a';
	char *res;
	printf("%d\n", ft_strlen(str));
	res = ft_strrchr(str, ch);

	printf("Str apres dernier %c = %s\n", ch, res);
   
	return(0);
}*/