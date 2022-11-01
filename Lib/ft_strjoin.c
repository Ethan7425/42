/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derivederacinedunefonctionu <derivedera    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:54:14 by derivederac       #+#    #+#             */
/*   Updated: 2022/10/31 14:16:39 by derivederac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char	*s3;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if ((s3 = (char *)malloc(sizeof(char)* (ft_strlen(s1) + ft_strlen(s2) + 1))) == NULL)
		return (NULL);
	while (s1 != NULL && s1[++j] != '\0')
		s3[++i] = s1[j];
	j = -1;
	while (s2 != NULL && s2[++j] != '\0')
		s3[++i] = s2[j];
	s3[++i] = '\0';
	return (s3);
}

int main()
{
    const char *x;
    const char *y;

	x = "cou";
	y = "cou";
    printf("%s\n", ft_strjoin(x, y));
}