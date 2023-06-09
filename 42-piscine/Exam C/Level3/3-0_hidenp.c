#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_hidenp(char *s1, char *s2)
{
	if (!(*s1))
			return (1);
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
			s1++;
		if (!(*s1))
			return (1);
		s2++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_putchar(ft_hidenp(argv[1], argv[2]) + '0');
	ft_putchar('\n');
	return (0);
}

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s2 && (*s1 == *s2))
	{
		s1 += 1;
		s2 += 1;
	}
	return (*s1 - *s2);
}

int		main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int		i;
		int		j;
		char	str_hidenp[4096];

		i = 0;
		j = 0;
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
				i++;
			j++;
		}
		if (!ft_strcmp(argv[1], str_hidenp))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
