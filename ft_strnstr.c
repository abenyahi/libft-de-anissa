/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:03:56 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/19 21:14:59 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *a, char *b, int size)
{
	int	i;
	int	j;

	i = 0;
	while (a[i] && i + j < size)
	{
		j = 0;
		if (b[0] == '\0')
			return (a);
		while (a[i + j] == b[j] && a[i + j] && b[j])
			j++;
		if (b[j] == '\0')
			return (&a[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	char i[] = "jetuielilelleonnousvousilsellesiels";
	char j[] = "ls";
	printf("%s\n", ft_strnstr(i, j, 15));
}*/
