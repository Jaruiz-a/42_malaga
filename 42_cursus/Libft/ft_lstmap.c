/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruiz-a <user@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:07:37 by jaruiz-a          #+#    #+#             */
/*   Updated: 2022/11/17 13:17:04 by jaruiz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_out;
	t_list	*actual;
	void	*ptr;

	lst_out = NULL;
	while (lst != NULL)
	{
		ptr = f(lst->content);
		actual = ft_lstnew(ptr);
		if (!actual)
		{
			del(ptr);
			ft_lstclear(&lst_out, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_out, actual);
		lst = lst->next;
	}
	return (lst_out);
}
