char		*ft_strrev(char *str)	/* Принимаем адрес массива символов */
{
	int		i;						/* обьявляем переменную для вычисления позиции ячейки массива от начала к концу */
	int		l;						/* обьявляем переменную для вычисления длинны массива и используем ее
									 * потом для вычисления позиции ячейки массива с конца к началу */
	char	t;						/* обьявляем переменную для временного хранения символа */

	l = 0;							/* инициализируем переменную для записи туда длинны массива */
	while (str[l])					/* проверяем первый элемент массива, если он пуст или имеет символ'\n' -завершаем цикл */
		l++;						/* если массив не пуст то прибавляем в переменную один и проверяем сл ячеку массива	*/

	i = -1;							/* Установим i = -1; по тому что потом мы должны отталкиватся от 0 и 
									 * при этом иметь в цикле префиксный инкремент( ++i ) */
	while (++i < --l)				/* проверяем каждую итерацию дошел ли индекс i указывающий на начало массива до середины
									 * и дошел ли индекс l указывающий на конец массива до середины.
									 * если они встретились в середине значит цикл завершен */
	{
		t = str[i];					/* сохраняем символ во временной переменной */
		str[i] = str[l];			/* теперь запихиваем в str[i] значение str[l] из конца массива */
		str[l] = t;					/* теперь запихиваем в str[l] из конца массива значение из временной переменной t 
									 * кторая хранит значение из начала массива */
	}								/* И так все идет от краев к середине меняясь символами чтобы в конце получить перевернутую строку */
	return (str);					/* возвращаем адресс массива который перевернули */
}

