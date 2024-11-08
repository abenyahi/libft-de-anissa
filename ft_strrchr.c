/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:55:15 by abenyahi          #+#    #+#             */
/*   Updated: 2024/10/27 03:35:13 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (s[a])
	{
		a++;
	}
	if (c == '\0')
		return ((char *)&s[a]);
	while (s[a] != c)
	{
		a--;
	}
	return ((char *)&s[a]);
}
/*
int main()
{
	char tab[] = "sulat salut";
	int to_find = 'a';

	printf("%s \n", ft_strrchr(tab, to_find));
}*/
