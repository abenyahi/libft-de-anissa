/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:02:55 by abenyahi          #+#    #+#             */
/*   Updated: 2024/10/23 18:03:19 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *a)
{
	int	b;

	b = 0;
	while (a[b])
		b++;
	return (b);
}
/*
int main()
{
	printf("%d\n", ft_strlen("hello"));
}*/
