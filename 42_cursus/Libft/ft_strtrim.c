/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <user@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:00:35 by jaruiz-a          #+#    #+#             */
/*   Updated: 2022/11/17 13:18:49 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	is_in_the_set(const char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		l_off;
	size_t		r_off;
	char		*ptr;
	size_t		i;

	l_off = 0;
	while (s1[l_off] != '\0' && is_in_the_set(set, s1[l_off]))
		l_off++;
	r_off = ft_strlen(s1);
	while (r_off > l_off && is_in_the_set(set, s1[r_off - 1]))
		r_off--;
	ptr = (char *)malloc((r_off - l_off + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (l_off < r_off)
	{
		ptr[i] = s1[l_off];
		i++;
		l_off++;
	}
	ptr[i] = '\0';
	return (ptr);
}
