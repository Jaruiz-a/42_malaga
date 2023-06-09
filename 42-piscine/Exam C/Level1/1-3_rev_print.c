#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;						

	i = 0;						
	while(str[i])				/* запускаем цикл который будет считать символы и записывать их в i пока не дойдет до конца массива(до завершающего нуля в массиве)*/
		i++;					/* увеличиваем i для перехода к проверке сл символа */ /* количество накопленных i будет говорить 
								** о количестве символо внутри массива */
	return (i);
}
void	ft_rev_print(char *str)
{
	int i;						/* для начала обьявим переменную для подсчета количества символов в массиве */

	i = ft_strlen(str);			/* инициализируем ее записав туда результат работы функции по поиску длинны строки */
	while(i)					/* Запустим цикл который будет печатать каждый символ начиная с конца массива c помощью i */
	{
		i--;					/* уменьшаем значение i чтобы начать печать строки с ее последнего обычного символа, а не с символа завершающего нуля '\0' */
		write(1, (str + i), 1);	/* печатаем ячейку массива на которую указывает i и уменьшаем i чтобы при след итерации цикла *
								** и так пока не дойдем до самого начала строки*/
	}
}

int		main(int argc, char *argv[])	/* здесь принимаем количество строк в массиве и сам массив со строками */
{
	if (argc == 2)						/* Проверяем есть ли там кроме имени программы в аргументах еще одна строка которую мы хотим зареверсить */
		ft_rev_print(argv[1]);
	write(1 ,"\n", 1);					/* после печати массива напечатаем символ перехода на новкю строку */
	return (0);							/* говорим функции майн что дошли до конца и завершаем программу */
}
