/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <user@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:58:19 by jaruiz-a          #+#    #+#             */
/*   Updated: 2022/11/17 13:17:36 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	int			found;
	void		*ptr;

	i = 0;
	found = 0;
	ptr = 0;
	while (i < n && !found)
	{
		if ((unsigned char)c == *(unsigned char *)(s + i))
		{
			ptr = (void *)s + i;
			found = 1;
		}
		i++;
	}
	return (ptr);
}
