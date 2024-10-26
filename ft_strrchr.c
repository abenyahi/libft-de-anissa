/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:55:15 by abenyahi          #+#    #+#             */
/*   Updated: 2024/10/23 18:56:00 by abenyahi         ###   ########.fr       */
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
