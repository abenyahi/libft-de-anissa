/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:02:55 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/19 23:23:12 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *a)
{
	int	b;

	b = 0;
	while (a[b])
		b++;
	return (b);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_strlen("hello"));
}*/
