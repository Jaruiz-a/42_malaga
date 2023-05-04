/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <user@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:10:34 by jaruiz-a          #+#    #+#             */
/*   Updated: 2022/08/30 14:58:17 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range_for_ultimate(int min, int len)
{
	int	*a;
	int	i;

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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	*range = ft_range_for_ultimate(min, len);
	if (!(*range))
		return (-1);
	return (len);
}
