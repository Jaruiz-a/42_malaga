#include <unistd.h>

int		main(void)
{
	char i;
	
	i = '9';
	while (i >= '0')
	{
		write(1, &i, 1);
		i--;
	}
	write(1, "\n", 1);
	return (0);
}

int		main(void)
{
	write (1, "9876543210\n", 11);
	return (0);
}
