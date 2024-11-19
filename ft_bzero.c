/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 01:57:19 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/19 21:43:31 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			a;
	unsigned char	*str;

	a = 0;
	str = (unsigned char *)s;
	while (a < n)
	{
		str[a] = 0;
		a++;
	}
}

/*
#include <stdio.h>

int main()
{
	char    str[] = "kdhs";
	ft_bzero(str, 3);
	printf("%s\n", str);
}*/