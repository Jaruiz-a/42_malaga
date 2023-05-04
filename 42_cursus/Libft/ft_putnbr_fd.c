/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <user@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:04:11 by jaruiz-a          #+#    #+#             */
/*   Updated: 2022/11/17 13:14:20 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		c;
	int		r;
	char	digito;

	if (n < 0)
	{
		write (fd, "-", 1);
	}
	c = n / 10;
	r = n % 10;
	if (c < 0 || r < 0)
	{
		c *= -1;
		r *= -1;
	}
	if (c != 0)
		ft_putnbr_fd(c, fd);
	digito = r + 48;
	write (fd, &digito, 1);
}
