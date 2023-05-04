#include <unistd.h>

void	ft_putchar(char c)				/* функция печати символа */
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)				/* функция печати числа */
{
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int		ft_atoi(char *s)				/* функция получает из строки число */
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

int		ft_is_prime( int nb )			/* функция проверки числа на простоту */
{
	int i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= (nb / i))
	{
		if ((nb % i) == 0) 
			return (0);
		i++;
	}
	return (1);
}

int		add_prime_sum(int nb)			/* функция считает сумму всех простых 
										** простых чисел, которые появляются 
										** перед текущим простым числом */
{
	int		sum;

	sum = 0;
	while (nb > 1)
	{
		if (ft_is_prime(nb))
			sum += nb;
		nb--;
	}
	return (sum);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putnbr(add_prime_sum(ft_atoi(argv[1])));
	ft_putchar('\n');
	return (0);
}

