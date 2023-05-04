#include <unistd.h>

int	main(void)
{
	int i;
	char a;

	i = 25;
	while (i >= 0)			
	{
		if((i % 2) == 0)	
		{
			a = i + 'A';	
			write(1, &a, 1);
			i--;
		}
		else				
		{
			a = i + 'a';	
			write(1, &a, 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}


/* ************************************************************************** */
/* ********************************_OR_THAT_:)******************************* */
/* ************************************************************************** */


#include <unistd.h>

int		main(void)
{
	write(1, "zYxWuTsRqPoNmLkJiGfEdCbA\n", 25);
	return (0);
}
