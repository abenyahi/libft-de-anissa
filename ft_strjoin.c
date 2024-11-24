/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:08:12 by abenyahi          #+#    #+#             */
/*   Updated: 2024/11/24 20:32:37 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*dest;

	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	dest = malloc (i * sizeof(char));
	if (dest == NULL)
		return (NULL);
	dest = ft_memcpy(dest, s1, ft_strlen(s1));
	ft_strlcpy(&dest[ft_strlen(s1)], s2, ft_strlen(s2) + 1);
	return (dest);
}
