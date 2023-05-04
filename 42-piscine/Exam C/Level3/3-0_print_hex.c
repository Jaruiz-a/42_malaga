#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *s)
{
	int		num;
	int		sign;

	sign = 1;
	num = 0;
	while (*s == '\t' || *s == '\n' || *s == '\v' || \
			*s == '\f' || *s == '\r' || *s == ' ')
		s++;
	if (*s == '-')
		sign = -1;
	while ((*s == '-') || (*s == '+'))
		s++;
	while (*s && *s >= '0' && *s <= '9')
		num = (num * 10) + ((int)(*(s++)) - '0');
	return (num * sign);
}

void	print_hex(int p)
{
	char	*hex;
	char	str[100];
	int		i;

	hex = "0123456789ABCDEF";
	if (p == 0)
		ft_putchar('0');
	i = 0;
	while (p)
	{
		str[i++] = hex[p % 16];
		p /= 16;
	}
	str[i] = '\0';
	while (i--)
		ft_putchar(str[i]);
}


int		main(int argc, char *argv[])
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}

/* ************************************************************************** */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_atoi(char *s)
{
	int		num;
	int		sign;

	sign = 1;
	num = 0;
	while (*s == '\t' || *s == '\n' || *s == '\v' || \
			*s == '\f' || *s == '\r' || *s == ' ')
		s++;
	if (*s == '-')
		sign = -1;
	while ((*s == '-') || (*s == '+'))
		s++;
	while (*s && *s >= '0' && *s <= '9')
		num = (num * 10) + ((int)(*(s++)) - '0');
	return (num * sign);
}

char	*ft_strrev(char *str)	/* Принимаем адрес массива символов */
{
	int		i;
	int		l;
	char	t;

	l = 0;
	while (str[l])
		l++;
	i = -1;
	while (++i < --l)
	{
		t = str[i];
		str[i] = str[l];
		str[l] = t;
	}
	return (str);
}

void	print_hex(int p)
{
	char	*hex;
	char	str[100];
	int		i;

	hex = "0123456789ABCDEF";
	if (p == 0)
		ft_putchar('0');
	i = 0;
	while (p)
	{
		str[i++] = hex[p % 16];
		p /= 16;
	}
	str[i] = '\0';
	ft_putstr(ft_strrev(str));
}


int		main(int argc, char *argv[])
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}
