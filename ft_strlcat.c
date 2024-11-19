/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:57:41 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/19 23:37:46 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, char *src, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && i < size)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (ft_strlen(dest) + ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int main() 
{
    char dest[] = "Hello ";
    char src[] = "World!";
    
    printf("%d\n", ft_strlcat(dest, src, 15));
    printf("%s\n", dest);

    return 0;
}*/
