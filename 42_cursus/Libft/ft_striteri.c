/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <jaruiz-a@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:08:26 by jaruiz-a          #+#    #+#             */
/*   Updated: 2023/05/25 10:19:26 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!(s == NULL && f == NULL))
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}