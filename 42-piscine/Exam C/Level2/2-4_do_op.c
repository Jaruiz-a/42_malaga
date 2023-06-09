#include <unistd.h>

void	ft_putchar(char c)							/* функция печати символа */
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)							/* функция печати числа */
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


int		ft_atoi(char *s)							/* функция получает из строки число */
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

void	ft_do_op(char *num1, char *operator, char *num2)
{
	if (*operator == '+')							/* если средний аргумент между числами равен знаку '+' */
		ft_putnbr(ft_atoi(num1) + ft_atoi(num2));	/* то складываем два аргумента и печатаем результат */
	else if (*operator == '-')						/* если средний аргумент между числами равен знаку '-' */
		ft_putnbr(ft_atoi(num1) - ft_atoi(num2));	/* то считам разность двух аргументов и печатаем результат */	
	else if (*operator == '*')						/* если средний аргумент между числами равен знаку '*' */
		ft_putnbr(ft_atoi(num1) * ft_atoi(num2));	/* то умножаем два аргумента и печатаем результат */
	else if (*operator == '/')						/* если средний аргумент между числами равен знаку '/' */
		ft_putnbr(ft_atoi(num1) / ft_atoi(num2));	/* то делим два аргумента и печатаем результат */
	else if (*operator == '%')						/* если средний аргумент между числами равен знаку '%' */
		ft_putnbr(ft_atoi(num1) % ft_atoi(num2));	/* то делим по модулю два аргумента и печатаем результат */
}

int		main(int argc, char *argv[])				/* Принимаем количество строк в массиве и сам массив со строками */
{
	if (argc == 4)									/* Проверяем есть ли в аргументах кроме имени программы другие строки */
		ft_do_op(argv[1], argv[2], argv[3]);
	ft_putchar('\n');
	return (0);										/* И завершаем программу и возвращаем ноль */
}
