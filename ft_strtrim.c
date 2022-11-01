/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derivederacinedunefonctionu <derivedera    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:36:29 by derivederac       #+#    #+#             */
/*   Updated: 2022/11/01 16:09:34 by derivederac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
static int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	first_part;
	size_t	last_part;

	first_part = 0;
	last_part = ft_strlen(s1);
	while (s1[first_part] && is_in_set(s1[first_part], set))
		first_part++;
	while (last_part > first_part && is_in_set(s1[last_part - 1], set))
		last_part--;
	trimmed = malloc(sizeof(char) * (last_part - first_part + 1));
	if (trimmed == NULL)
		return (NULL);
	i = 0;
	while (first_part < last_part)
		trimmed[i++] = s1[first_part++];
	trimmed[i] = 0;
	return (trimmed);
}

int main()
{
    const char *s;
    s = "123 coucou123";
    printf("%s\n", ft_strtrim(s, "123"));
}