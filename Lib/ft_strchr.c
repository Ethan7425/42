/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:27:23 by etbernar          #+#    #+#             */
/*   Updated: 2022/10/26 12:55:57 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == c)
		return (0);
	return (0);
}
/*int main () 
{
   const char str[] = "abcdefghijkl";
   const char ch = 'b';
   char *res;

   res = ft_strchr(str, ch);

   printf("Str a partir %c = %s\n", ch, res);
   
   return(0);
}*/