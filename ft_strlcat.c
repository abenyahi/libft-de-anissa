/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:57:41 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/21 18:58:39 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (dest[a])
		a++;
	while (src[b] && a < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (a);
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
