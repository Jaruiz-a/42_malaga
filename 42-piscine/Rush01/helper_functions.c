/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <user@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:26:23 by jaruiz-a          #+#    #+#             */
/*   Updated: 2022/08/20 15:36:03 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char			c;
	unsigned int	unb;

	unb = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		unb = -nb;
	}
	if (unb < 10 && unb >= 0)
	{
		c = unb + '0';
		write(1, &c, 1);
	}
	else if (unb >= 10)
	{
		ft_putnbr(unb / 10);
		c = unb % 10 + '0';
		write(1, &c, 1);
	}
}

int	get_view(int **matrix, int row, int view_line, int line_index)
{
	if (row == 2)
		return (matrix[view_line][line_index]);
	if (row == 3)
		return (matrix[view_line][3 - line_index]);
	if (row == 0)
		return (matrix[line_index][view_line]);
	if (row == 1)
		return (matrix[3 - line_index][view_line]);
	return (-1);
}
