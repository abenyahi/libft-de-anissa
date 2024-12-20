/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:49:30 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/24 19:28:00 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i ++;
	}
}
/*void	toa(unsigned int a, char *b)
{
	*b = 'a';
}
int	main(void)
{
	char	dest[] = "test";
	printf("dest = %s\n", dest);
	ft_striteri(dest, toa);
	printf("%s", dest);
}*/