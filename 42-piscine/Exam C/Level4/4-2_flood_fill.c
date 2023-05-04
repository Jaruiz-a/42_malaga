// #include "flood_fill.h"

#ifndef T_POINT_FLOOD_FILL
# define T_POINT_FLOOD_FILL

typedef struct 	s_point {
    int 		x;
    int 		y;
} 				t_point;

void	flood_fill(char **tab, t_point size, t_point begin);

#endif


void	flood_fill(char **tab, t_point size, t_point begin)
{
    char c;
    t_point p;

    c = tab[begin.y][begin.x];
    tab[begin.y][begin.x] = 'F';
    
    if (begin.y > 0 && tab[begin.y - 1][begin.x] == c)
    {
        p.x = begin.x;
        p.y = begin.y - 1;
        flood_fill(tab, size, p);
    }
    if ((begin.y < (size.y - 1)) && tab[begin.y + 1][begin.x] == c)
    {
        p.x = begin.x;
        p.y = begin.y + 1;
        flood_fill(tab, size, p);
    }
    if ((begin.x < (size.x - 1)) && tab[begin.y][begin.x + 1] == c)
    {
        p.x = begin.x + 1;
        p.y = begin.y;
        flood_fill(tab, size, p);
    }
    if (begin.x > 0 && tab[begin.y][begin.x - 1] == c)
    {
        p.x = begin.x - 1;
        p.y = begin.y;
        flood_fill(tab, size, p);
    }
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** **
**                     the file 'test.c' will be сontains...                  **
** ************************************************************************** **
** ************************************#************************************* **
** ************************************#************************************* **
** ************************************#************************************* **
** *********************************#######********************************** **
** ***********************************###************************************ **
** ************************************#************************************* **
** ************************************************************************** **
// #include "flood_fill.h"
#include <unistd.h>
#include <stdlib.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int	i;
	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}
void print_tab(char **a, t_point size)
{
    int i;
    int j;
    i = 0;
    while (i < size.y)
    {
        j = 0;
        while (j < size.x)
        {
            ft_putchar(a[i][j]);
            j++;
        }
        i++;
        ft_putchar('\n');
    }
}
char    **make_area(char **zone, t_point size)
{
    char    **new;
    int     i;
    int     j;
    if (!(new = (char **)(malloc(sizeof(char *) * (size.y)))))
        return ((void *)0);
    i = 0;
    while (i < size.y)
    {
        if (!(new[i] = (char *)malloc(sizeof(char *) * (size.x + 1))))
            return ((void *)0);
        j = 0;
        while (j < size.x)
		{
            new[i][j] = zone[i][j];
			j++;
		}
		new[i][size.x] = '\0';
		i++;
    }
	new[size.y] = '\0';
    return (new);
}
int     main(void)
{
    t_point size = {8, 5};
    t_point begin = {0, 0};
    char **area;
    char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};
    area = make_area((char **)zone, size);
    print_tab(area, size);
    flood_fill(area, size, begin);
    ft_putchar('\n');
    print_tab(area, size);
    return (0);
}

