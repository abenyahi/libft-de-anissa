/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:13:28 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/24 17:14:05 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (big[i] && i + j < size)
	{
		if (little[0] == '\0')
			return ((char *)big);
		while (big[i + j] == little[j] && big[i + j]
			&& little[j] && i + j < size)
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		j = 0;
		i++;
	}
	if (little[j] == '\0')
		return ((char *)&big[i]);
	return (NULL);
}
/*
#include <stdio.h>

int mbigin()
{
	chbigr i[] = "jetuielilelleonnousvousilsellesiels";
	chbigr j[] = "ls";
	printf("%s\n", ft_strnstr(i, j, 15));
}*/
