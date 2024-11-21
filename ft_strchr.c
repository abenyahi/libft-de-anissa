/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:52:31 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/21 19:06:01 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (s[a])
	{
		if (s[a] == c)
			return ((char *)&s[a]);
		a++;
	}
	if (c == '\0')
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
