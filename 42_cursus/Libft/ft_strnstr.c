/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <user@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:58:52 by jaruiz-a          #+#    #+#             */
/*   Updated: 2022/11/17 13:18:21 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;
	size_t			match;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	if (ft_strlen(needle) > ft_strlen(haystack) || len < ft_strlen(needle))
		return (0);
	while (i < len && haystack[i] != '\0' && (len - i) >= ft_strlen(needle))
	{
		match = 1;
		j = 0;
		while (j < ft_strlen(needle) && match)
		{
			if (haystack[i + j] != needle[j])
				match = 0;
			j++;
		}
		if (j == ft_strlen(needle) && match)
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
