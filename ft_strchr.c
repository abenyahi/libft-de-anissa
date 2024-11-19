/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:52:31 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/19 21:48:11 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int find)
{
	int	a;

	a = 0;
	while (s[a])
	{
		if (s[a] == find)
			return ((char *)&s[a]);
		a++;
	}
	if (find == '\0')
		return ((char *)&s[a]);
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	const char tab[] = "salut salut";
	char find ='t';
	
	printf("%s\n", ft_strchr(tab, find));
}*/
