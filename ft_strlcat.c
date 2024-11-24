/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:57:41 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/24 17:12:33 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	i;
	size_t	j;

	b = 0;
	a = ft_strlen(dest);
	i = a;
	j = ft_strlen(src);
	if (size <= a)
		return (size + j);
	while (src[b] && a < size - 1)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (j + i);
}

/*#include <stdio.h>
#include <string.h>

int main() 
{
    char dest[20] = "Hello ";
    char src[] = "World!";
    
    printf("%ld\n", ft_strlcat(dest, src, 5));
    printf("%s\n", dest);

    return 0;
}*/
