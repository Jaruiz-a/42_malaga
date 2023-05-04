#include <unistd.h>

int	main(void)
{
	int i;											

	char a;					
	
	i = 0;					
						
	while (i <= 25)			
		if((i % 2) == 0)	
		{
			a = i + 'a';
			write(1, &a, 1);
			i++;
		}
		else				
		{
			a = i + 'A';	
			write(1, &a, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

#include <unistd.h>

int		main(void)
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 25);
	return (0);
}
