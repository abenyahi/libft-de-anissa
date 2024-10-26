/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:05:59 by abenyahi          #+#    #+#             */
/*   Updated: 2024/10/23 18:20:53 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, int size)
{
	int	a;

	a = 0;
	while (s1[a] && s2[a] && a < size)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
/*
int main()
{
	char s1[] = "ca ";
	char s2[] = "m enerve";
	printf("%d\n", ft_strncmp(s1, s2, 15));
}*/
