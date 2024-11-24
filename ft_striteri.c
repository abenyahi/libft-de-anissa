/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:49:30 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/24 17:54:45 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	charupper(unsigned int index, char *charar)
{
	charar[index] = 'a';
}
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
int	main(void)
{
	char	dest[] = "test";
	ft_striteri(dest, charupper);
	printf("%s", dest);
}