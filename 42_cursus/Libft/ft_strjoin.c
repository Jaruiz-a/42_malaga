/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <user@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:00:15 by jaruiz-a          #+#    #+#             */
/*   Updated: 2022/11/17 13:15:16 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*ptr;
	size_t		lens1;
	size_t		lens2;
	size_t		total_len;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	total_len = lens1 + lens2;
	ptr = (char *)malloc((total_len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr[0] = '\0';
	ft_strlcat(ptr, s1, total_len + 1);
	ft_strlcat(ptr, s2, total_len + 1);
	return (ptr);
}
