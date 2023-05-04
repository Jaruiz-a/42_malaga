/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <user@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:11:10 by jaruiz-a          #+#    #+#             */
/*   Updated: 2022/08/29 11:11:17 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_strjoin_size(int size, char **strs, char *sep)
{
	int	n_strs;
	int	n_sep;
	int	i;
	int	j;

	n_strs = 1;
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			++n_strs;
	}
	n_sep = 0;
	if (size - 1 > 0)
	{
		i = 0;
		while (sep[i])
			++i;
		n_sep = i * (size - 1);
	}
	return (n_strs + n_sep);
}

void	set_strjoin(char *join, int size, char **strs, char *sep)
{
	int	index;
	int	i;
	int	j;

	index = 0;
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			join[index++] = strs[i][j];
		if (i < size - 1)
		{
			j = -1;
			while (sep[++j])
				join[index++] = sep[j];
		}
	}
	join[index] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*strjoin;

	len = get_strjoin_size(size, strs, sep);
	strjoin = malloc(sizeof(*strjoin) * len);
	if (!strjoin)
		return (NULL);
	set_strjoin(strjoin, size, strs, sep);
	return (strjoin);
}
