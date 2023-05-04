/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <user@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:56:11 by jaruiz-a          #+#    #+#             */
/*   Updated: 2022/11/17 13:15:39 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		if (ft_strlen(src) > dstsize - 1)
		{
			while (i < dstsize - 1)
			{
				dst[i] = src[i];
				i++;
			}
			dst[i] = '\0';
		}
		else
		{
			while (i < (ft_strlen(src)))
			{
				dst[i] = src[i];
				i++;
			}
			dst[i] = '\0';
		}
	}
	return (ft_strlen(src));
}
