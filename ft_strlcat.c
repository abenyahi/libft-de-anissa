/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:57:41 by abenyahi          #+#    #+#             */
/*   Updated: 2024/10/23 18:00:17 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlcat(char *dest, char *src, int size)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a])
	{
		a++;
	}
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
int main() 
{
    char dest[] = "Hello ";
    char src[] = "World!";
    
    printf("%d\n", ft_strlcat(dest, src, 15));
    printf("%s\n", dest);

    return 0;
}*/
