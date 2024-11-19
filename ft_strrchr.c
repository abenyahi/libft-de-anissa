/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:55:15 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/19 22:13:09 by abenyahi         ###   ########.fr       */
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
	if (c == '\0')
		return ((char *)&tmp[a]);
	a--;
	while (tmp[a] != c && tmp[a])
		a--;
	if (a < 0)
		return (NULL);
	return ((char *)&tmp[a]);
}
/*
#include <stdio.h>

int main()
{
	char tab[] = "bonjour";
	int to_find = 'b';

	printf("%s \n", ft_strrchr(tab + 2, to_find));
}*/
