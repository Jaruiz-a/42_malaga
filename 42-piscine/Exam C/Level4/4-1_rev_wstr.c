#include <unistd.h>

int		ft_is_space(char to_find, char *str)
{
	while (*str)
	{
		if (to_find == *str)
			return (1);
		str++;
	}
	return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_rev_wstr(char *str,char *charset)
{
	int i;
	int word;
	int	flag;

	word = 0;
	flag = 0;
	i = (ft_strlen(str) - 1);
	while (i >= 0)
	{
		while ((i >= 0) && ft_is_space(str[i], charset))
			i--;
		while ((i >= 0) && !ft_is_space(str[i], charset))
		{
			word++;
			i--;
		}
		if (word)
		{
			if (flag)
				write(1, " ", 1);
			write(1, (str + i + 1), word);
			flag = 1;
			word = 0;
		}
	}
}

int		main(int argc, char *argv[])
{
	if (argc > 1)
		ft_rev_wstr(argv[1], " \t\n");
	write(1, "\n" ,1);
	return (0);
}



/* ************************************************************************** */
/* ************************************************************************** */


#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int		ft_is_space(char to_find, char *str)
{
	while (*str)
	{
		if (to_find == *str++)
			return (1);
	}
	return (0);
}

int		ft_wordcount(char *str, char *charset)
{
	int	count;
	int	flag;

	count = 0;
	flag = 1;
	while (*str)
	{
		if (ft_is_space(*str, charset))
			flag = 1;
		if (!ft_is_space(*str, charset))
		{
			if (flag)
				count++;
			flag = 0;
		}
		str++;
	}
	return (count);
}

char	*create_word(char *str, int i, int j)
{
	char	*word;
	int		o;

	o = 0;
	if ((word = (char *)malloc(sizeof(char) * (j - i))) == ((void *)0))
		return ((void *)0);
	while (i < j)
	{
		word[o] = str[i];
		i++;
		o++;
	}
	word[o] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		index;
	int		j;
	int		i;
	int		words;

	index = 0;
	if ((words = ft_wordcount(str, charset)))
	{
		if (!str || ((arr = (char **)malloc(sizeof(char *) * (words + 1))) == ((void *)0)))
			return ((void *)0);
		i = 0;
		while (index < words)
		{
			while (ft_is_space(str[i], charset) && (str[i]))
				i++;
			j = i;
			while (!(ft_is_space(str[j], charset)) && (str[j]))
				j++;
			arr[index++] = create_word(str, i, j);
			i = j + 1;
		}
	}
	else
		arr = (char **)malloc(sizeof(char *));
	arr[index] = (void *)0;
	return (arr);
}
 
void	ft_rev_wstr(char *str, char *charset)
{
	int		wcount;
	char	**words;

	words = ft_split(str, charset);
	wcount = ft_wordcount(str,charset);
	while (--wcount > (-1))
	{
		ft_putstr(words[wcount]);
		free(words[wcount]);
		if (wcount > 0)
			write(1, " " ,1);
	}
}

int		main(int argc, char *argv[])
{
	if (argc > 1)
		ft_rev_wstr(argv[1], " \t\n");
	write(1, "\n" ,1);
	return (0);
}

/* ************************************************************************** */
/* ************************************************************************** */


#include <unistd.h>

int		ft_is_space(char to_find, char *str)
{
	while (*str)
	{
		if (to_find == *str++)
			return (1);
	}
	return (0);
}

void	ft_rev_wstr(char *str, char *charset)
{
	int		i;
	int		j;
	int		num;
	char	words[256][4096];

	if (*str && *charset)
	{
		i = 0;
		j = 0;
		num = 0;
		while (str[i] != '\0')
		{
			if (str[i] == ' ')
			{
				num++;
				i++;
				j = 0;
			}
			words[num][j] = str[i];
			i++;
			j++;
		}
		j = 0;
		while (num >= 0)
		{
			if (words[num][j] == '\0')
			{
				if (num > 0)
					write(1, " ", 1);
				if (num == 0 && words[num][j] == '\0')
					break ;
				num--;
				j = 0;
			}
			write(1, &words[num][j], 1);
			j++;
		}
	}
}

int		main(int argc, char *argv[])
{

	if (argc == 2)
		ft_rev_wstr(argv[1], " \t\n");
	write(1, "\n", 1);
	return (0);
}
