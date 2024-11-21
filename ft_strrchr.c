/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:55:15 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/21 18:03:14 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				a;
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	a = 0;
	while (tmp[a])
		a++;
	while (a >= 0)
	{
		if (tmp[a] == c)
			return ((char *)&tmp[a]);
		a--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	char tab[] = "bonjour";
	int to_find = 'b';

	printf("%s \n", ft_strrchr(tab + 2, to_find));
}*/
