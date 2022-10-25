/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:27:22 by etbernar          #+#    #+#             */
/*   Updated: 2022/10/25 14:45:46 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if (str == NULL)
		return (0);
	while (i > 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	if (str[i] == c)
		return (0);
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