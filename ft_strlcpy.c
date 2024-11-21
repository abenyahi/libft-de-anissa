/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:00:41 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/21 19:17:04 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	a;

	a = 0;
	if (size == 0)
		return (0);
	while (dst[a] && a < size)
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (a);
}
/*
#include <stdio.h>

int main()
{
	char tab[] = "hola";
	char tab2[] = "test";
	printf("%s\n", ft_strlcpy (tab,tab2,3));
}*/
