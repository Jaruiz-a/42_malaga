/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <user@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:09:58 by jaruiz-a          #+#    #+#             */
/*   Updated: 2022/08/30 14:56:56 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	a = malloc(sizeof(*a) * len);
	if (!a)
		return (NULL);
	i = 0;
	while (i < len)
	{
		a[i] = min;
		++min;
		++i;
	}
	return (a);
}
