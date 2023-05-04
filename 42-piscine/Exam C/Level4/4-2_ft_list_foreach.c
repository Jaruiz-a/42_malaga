#include "ft_list.h"

/* 'ft_list.h' contains:
 
#ifndef FT_LIST_H
# define FT_LIST_H
typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;
#endif
*/

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		if (begin_list->data)
			(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** **
**                            the file 'test.c' ...                           **
** ************************************************************************** **
** ************************************#************************************* **
** ************************************#************************************* **
** ************************************#************************************* **
** *********************************#######********************************** **
** ***********************************###************************************ **
** ************************************#************************************* **
** ************************************************************************** **
#include "ft_list.h"
#include <unistd.h>
#include <stdlib.h>
void	ft_modputstr(char *str)
{
	int	i;
	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	write(1, " ", 1);
}
t_list	*ft_create_elem(void *data)
{
	t_list *new;
	
	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return ((void *)0);
	new->data = data;
	new->next = ((void *)0);
	return (new);
}
int     main(void)
{
	t_list *test_list;
	test_list = ft_create_elem((void *)"hey");
	test_list->next = ft_create_elem((void *)"hello");
	test_list->next->next = ft_create_elem((void *)"my");
	test_list->next->next->next = ft_create_elem((void *)"cool");
	test_list->next->next->next->next = ft_create_elem((void *)"friend");
    ft_list_foreach(test_list, (void *)ft_modputstr);
	write(1, "\n", 1);
    return (0);
}

