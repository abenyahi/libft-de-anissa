/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 23:25:37 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/21 19:53:29 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	i = 0;
	if (start >= ft_strlen(s))
	{
		dest = malloc(sizeof(char));
		if (dest == NULL)
			return (NULL);
		dest[i] = '\0';
		return (dest);
	}
	dest = malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	while (i < len && s[start])
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}
