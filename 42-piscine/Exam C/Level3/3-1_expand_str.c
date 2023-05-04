#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_space(char c)
{
	return (((c == ' ') || (c == '\t')) ? 1 : 0);
}

void	ft_expand_str(char *str)
{
	int	flag;

	flag = 0;
	while (ft_is_space(*str))
		str++;
	while (*str)
	{
		if (ft_is_space(*str))
			flag = 1;
		if (!ft_is_space(*str))
		{
			if (flag)
			{
				ft_putchar(' ');
				ft_putchar(' ');
				ft_putchar(' ');
			}
			flag = 0;
			ft_putchar(*str);
		}
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_expand_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}



/* ************************************************************************** */
/* ************************************************************************** */


#include <unistd.h>

int		ft_word_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		i++;
	return (i);
}


void	ft_expand_str(char *str)
{
	int len;
	int first_word;

	first_word = 1;
	while (*str)
	{
		while (*str == ' ' || *str == '\t')
			str++;
		
		len = ft_word_len(str);
		if (len > 0 && first_word == 0)  
			write(1, "   ", 3);
		first_word = 0;
		write(1, str, len);
		str = str + len;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_expand_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}

