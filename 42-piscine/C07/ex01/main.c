#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 1;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}
