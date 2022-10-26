/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:38:08 by etbernar          #+#    #+#             */
/*   Updated: 2022/10/26 14:01:11 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;

	i = 0;
	if (to_find == NULL || ft_strlen(to_find) == 0)
		return ((char *)str);
	if (ft_strlen(to_find) > len)
		return (NULL);
	while (i < len)
	{
		if (ft_strncmp((char *)&str[i], to_find, ft_strlen(to_find)) == 0)
		{
			if (i + ft_strlen(to_find) > len)
				return (NULL);
			return ((char *)&str[i]);
		}
		i++;
	}
}
int	main()
{
	const char char1 [100] = "Coucou comment ca va ?";
	const char char2 [100] = "ca";
	printf ("%d", ft_strstr(char1,char2, 4));
}