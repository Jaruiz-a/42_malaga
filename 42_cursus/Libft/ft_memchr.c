/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <jaruiz-a@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:12:42 by jaruiz-a          #+#    #+#             */
/*   Updated: 2023/05/25 10:18:41 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	m;

	str = (unsigned char *)s;
	m = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == m)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
