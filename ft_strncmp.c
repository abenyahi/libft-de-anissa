/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:05:59 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/19 22:56:59 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	size_t			a;

	tmp1 = (unsigned char *) s1;
	tmp2 = (unsigned char *) s2;
	a = 0;
	while (tmp1[a] && tmp2[a] && a < n)
	{
		if (tmp1[a] != tmp2[a])
			return (tmp1[a] - tmp2[a]);
		a++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	char s1[] = "ca ";
	char s2[] = "m enerve";
	printf("%d\n", ft_strncmp(s1, s2, 15));
}*/
