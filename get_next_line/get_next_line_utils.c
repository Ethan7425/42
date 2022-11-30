/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:22:33 by etbernar          #+#    #+#             */
/*   Updated: 2022/11/30 11:54:37 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	char	*tab;
	int		i;
	int		len;

	len = ft_strlen(s1);
	i = 0;
	tab = malloc(sizeof(char) * len + 1);
	if (!tab)
		return (NULL);
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (s3 == NULL)
		return (NULL);
	while (s1 != NULL && s1[++j] != '\0')
		s3[++i] = s1[j];
	j = -1;
	while (s2 != NULL && s2[++j] != '\0')
		s3[++i] = s2[j];
	s3[++i] = '\0';
	return (s3);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*tab;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len >= ft_strlen(s + start))
		len = ft_strlen(s + start);
	tab = malloc(sizeof(char) * (len) + 1);
	if (!tab)
		return (NULL);
	while (len > 0)
	{
		tab[i++] = s[start++];
		len--;
	}
	tab[i] = '\0';
	return (tab);
}