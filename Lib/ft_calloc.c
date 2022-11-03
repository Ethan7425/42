/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derivederacinedunefonctionu <derivedera    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:05:16 by etbernar          #+#    #+#             */
/*   Updated: 2022/11/03 16:32:10 by derivederac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tab;
	unsigned long	i;

	i = 0;
	tab = malloc(count * size);
	if (!tab)
		return (NULL);
	while (count * size > i)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}