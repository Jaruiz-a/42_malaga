#include <unistd.h>

void	ft_search_and_replace(char **str)
{
	int		i;								/* для начала обьявим переменную для счетчика */

	i = 0;
	if (str[0] && !str[1][1] && !str[2][1])	/* Проверяем есть ли там кроме имени программы в аргументах еще нужные нам аргументы.
											** Проверяем содержат ли третий и четвертый аргумент только по одной букве согласно условию */
	{
		while (str[0][i])					/* Запускаем цикл. который пройдется по строке печатая и меняя нужные символы пока не дойдет до конца */
		{
			if (str[0][i] == str[1][0])		/* Если перед нами символ который мы хоти заменить */
				write(1, &str[2][0], 1);	/* то печатаем его замену */
			else							/* если это просто символ */
				write(1, &str[0][i], 1);	/* то просто печатаем его */
			i++;							/* Увеличиваем счетчик и переходим к след ячейке массива */
		}
	}
	
}

int		main(int argc, char *argv[])		/* здесь принимаем количество строк в массиве и сам массив со строками */
{
	if (argc == 4)							/* Проверяем есть ли там кроме имени программы в аргументах еще нужные нам аргументы. */
		ft_search_and_replace(&argv[1]);		
	write(1, "\n", 1);						/* Печатаем символ перехода на новую строку */
	return (0);								/* Завершаем программу */
}

