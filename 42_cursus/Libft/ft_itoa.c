/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <jaruiz-a@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:11:30 by jaruiz-a          #+#    #+#             */
/*   Updated: 2023/05/25 10:21:15 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_len(long nbr)
{
	unsigned long	len;

	len = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*zero(char *str)
{
	str = (char *)malloc(sizeof (char) * 2);
	if (!str)
		return (0);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	long			i;
	unsigned long	len;

	i = n;
	len = ft_len(i);
	str = 0;
	if (i == 0)
		return (zero(str));
	str = (char *)malloc(sizeof (char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (i < 0)
	{
		str[0] = '-';
		i = -i;
	}
	while (i > 0)
	{
		str[len] = (i % 10) + '0';
		i /= 10;
		len--;
	}
	return (str);
}
