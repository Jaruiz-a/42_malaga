/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <jaruiz-a@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:05:59 by jaruiz-a          #+#    #+#             */
/*   Updated: 2023/05/25 10:19:53 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (start > ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = (char *)ft_calloc(len + 1, sizeof (char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && start < ft_strlen(s) && i < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	return (str);
}
