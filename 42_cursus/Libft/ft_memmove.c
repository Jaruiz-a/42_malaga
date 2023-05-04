/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <user@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:55:53 by jaruiz-a          #+#    #+#             */
/*   Updated: 2022/11/17 13:13:49 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		c;
	size_t		i;

	if (dest > src)
	{
		while (n > 0)
		{
			c = *(char *)(src + n - 1);
			*(char *)(dest + n - 1) = c;
			n--;
		}
	}
	else if (dest < src)
	{	
		i = 0;
		while (i < n)
		{
			c = *(char *)(src + i);
			*(char *)(dest + i) = c;
			i++;
		}
	}
	return (dest);
}
