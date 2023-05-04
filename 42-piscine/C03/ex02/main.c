/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <user@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:28:29 by jaruiz-a          #+#    #+#             */
/*   Updated: 2022/08/22 13:29:45 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main()
{
	char src[] = "Javier";
	char dest[] = "0410 ";
	printf("%s", ft_strcat(dest, src));
}
