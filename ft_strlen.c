/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:02:55 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/21 19:08:54 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	b;

	b = 0;
	while (s[b])
		b++;
	return (b);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_strlen("hello"));
}*/
