#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_verif_char(char *str, char *symbol)
{
	while (str < symbol)
	{
		if (*str == *symbol)
			return (0);
		str++;
	}
	return (1);
}

void	ft_union(char **argv)
{
	int string;
	int	symbol;

	string = 0;
	while (string < 2)
	{
		symbol = 0;
		while (argv[string][symbol])
		{
			if (ft_verif_char(argv[0], &argv[string][symbol]))
				ft_putchar(argv[string][symbol]);
			symbol++;
		}
		string++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(&argv[1]);
	ft_putchar('\n');
	return (0);
}
