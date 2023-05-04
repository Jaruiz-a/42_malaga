#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int		ft_is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\0');
}

void	str_capitalizer(char *str)
{
	int		i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] += 'A' - 'a';
	i++;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
		if ((str[i] >= 'a' && str[i] <= 'z') && (ft_is_space(str[i - 1])))
			str[i] += 'A' - 'a';
		i++;
	}
}

void	ft_apply_to_arr(char **arr, int lenght, void (*applly_f)(char *))
{
	int i;

	i = 0;
	while (i < lenght)
	{
		applly_f(arr[i]);
		ft_putstr(arr[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc > 1)
		ft_apply_to_arr(&argv[1], argc - 1, str_capitalizer);
	else
		ft_putchar('\n');
	return (0);
}
