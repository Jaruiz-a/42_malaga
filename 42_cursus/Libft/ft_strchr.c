/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <user@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:57:43 by jaruiz-a          #+#    #+#             */
/*   Updated: 2022/11/17 13:14:51 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		*ptr;
	size_t		i;
	size_t		len;
	int			found;

	ptr = 0;
	len = ft_strlen(s);
	i = 0;
	found = 0;
	while (i <= len && !found)
	{
		if (s[i] == (char)c)
		{
			ptr = (char *)s + i;
			found = 1;
		}
		i++;
	}
	return (ptr);
}
