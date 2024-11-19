/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 23:25:37 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/20 00:06:40 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	i = 0;
	if (s[i] == NULL)
		return (NULL);
	dest = malloc(len - start + 1);
	while (i < len)
	{ 
		dest[i] = s[start];
		i++;
		start++;
	}
	if (dest[i] == '\0')
	return (dest);
}