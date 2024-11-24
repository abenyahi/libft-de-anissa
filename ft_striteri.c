/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:49:30 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/24 19:14:10 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	index;

	index = 0;
	while (s[index])
	{
		f(index, s);
		index ++;
	}
	
}
/*int	main(void)
{
	char	dest[] = "test";
	ft_striteri(dest, charupper);
	printf("%s", dest);
}*/