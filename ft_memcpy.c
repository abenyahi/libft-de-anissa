/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:55:36 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/19 21:58:40 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const char		*s;
	size_t			a;

	d = dest;
	s = src;
	a = 0;
	if (!d && !s)
		return (NULL);
	while (a < n)
	{
		d[a] = s[a];
		a++;
	}
	return (dest);
}
