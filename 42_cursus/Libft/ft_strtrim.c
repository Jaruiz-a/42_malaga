/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <jaruiz-a@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:06:27 by jaruiz-a          #+#    #+#             */
/*   Updated: 2023/05/25 10:19:50 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*char_set;

	char_set = (char *)set;
	if (!s1 || !char_set)
		return (0);
	while (*s1 && ft_strchr(char_set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(char_set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
