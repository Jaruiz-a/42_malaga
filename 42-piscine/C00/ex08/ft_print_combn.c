/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:21:25 by jaruiz-a          #+#    #+#             */
/*   Updated: 2022/08/17 10:48:35 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_array(int a[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(a[i] + '0');
		++i;
	}
	if (a[0] != 9 - n + 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	recursion(int n, int i, int a[], int ini)
{
	while (ini + n - 1 - i <= 9)
	{
		a[i] = ini;
		if (i == n - 1)
			print_array(a, n);
		else if (a[i] + 1 <= 9)
			recursion(n, i + 1, a, a[i] + 1);
		++ini;
	}
}

void	ft_print_combn(int n)
{
	int	a[9];

	recursion(n, 0, a, 0);
}
