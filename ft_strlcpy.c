/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:00:41 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/19 23:05:38 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcpy(char *dest, const char *src, int size)
{
	int	a;

	a = 0;
	while (dest[a] && a < size)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char tab[] = "hola";
	char tab2[] = "test";
	printf("%s\n", ft_strlcpy (tab,tab2,3));
}*/
