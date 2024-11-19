/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:55:19 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/19 21:54:17 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	b;
	size_t			a;

	str = (unsigned char *) s;
	b = (unsigned char) c;
	a = 0;
	while (a < n)
	{
		if (str[a] == b)
			return ((unsigned char *)&str[a]);
		a++;
	}
	return (NULL);
}
