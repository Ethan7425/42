/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etbernar <etbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:17:32 by etbernar          #+#    #+#             */
/*   Updated: 2022/11/02 15:23:10 by etbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	dest1;
	size_t	src1;

	i = 0;
	dest1 = ft_strlen(dest);
	src1 = ft_strlen(src);
	if (len - 1 <= dest1)
		return (src1 + len);
	while (dest1 + i < len - 1)
	{
		dest[dest1 + i] = src[i];
		i++;
	}
	dest[dest1 + i] = '\0';
	return (dest1 + src1);
}

int main()
{
    char first[] = "This is";
    char last[] = "a potentially long string";
    int r;
    int size = 0 ;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    return(0);
}