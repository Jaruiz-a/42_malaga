/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <user@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:24:04 by jaruiz-a          #+#    #+#             */
/*   Updated: 2022/08/20 15:36:34 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"

int	main(int argc, char **argv)
{
	int	**views;
	int	**matrix;
	int	solved;
	int	i;

	i = 0;
	if (first_check(argc, argv) == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	views = fill_views(argv[1]);
	matrix = allocate_mem(4);
	solved = 0;
	solve(matrix, views, &solved);
	if (!solved)
		write(1, "Error\n", 6);
	return (0);
}
