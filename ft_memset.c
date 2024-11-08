/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 02:55:22 by abenyahi          #+#    #+#             */
/*   Updated: 2024/10/27 02:55:36 by abenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t a;
    unsigned char   *str;

    a = 0;
    str = s;
    while(a < n)
    {
        str[a] = c;
        a++;
    }
    return(str);
}