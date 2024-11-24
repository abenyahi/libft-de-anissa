/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:55:40 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/24 17:41:29 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dst;
	const char	*s;

	i = 0;
	dst = (char *)dest;
	s = (const char *)src;
	if (!(dest) && !(src))
		return (NULL);
	if (s < dst)
	{
		while (n > 0)
		{
			n--;
			dst[n] = s[n];
		}
		return (dest);
	}
	while (i < n)
	{
		dst[i] = s[i];
		i++;
	}
	return (dest);
}
