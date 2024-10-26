/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:00:41 by abenyahi          #+#    #+#             */
/*   Updated: 2024/10/23 18:02:29 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlcpy(char *dest, char *src, int size)
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
int main()
{
	char tab[] = "hola";
	char tab2[] = "test";
	printf("%s\n", ft_strlcpy (tab,tab2,3));
}*/
