#include <stdlib.h>

char	*ft_itoa_base(int nbr)
{
	int		i;
	int		j;
	char	temp[16];
	int 	base_type;
	char	*final;

	i = 0;
	base_type = 10;
	if ((base_type >= 2))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			temp[i] = '-';
			i++;
		}
		while (nbr)
		{
			temp[i] = nbr % base_type;
			nbr /= base_type;
			i++;
		}
		if ((final = (char *)malloc(sizeof(char) * (i + 1))) == ((void *)0))
			return (((void *)0));
		if ((temp[0] == '-'))
			final[0] = temp[0];
		j = 1;
		while (i > 1)
		{
			--i;
			if (temp[i] < 10)
				final[j] = temp[i] + '0';
			if (temp[i] >= 10)
				final[j] = temp[i] - 10 + 'A';
/* ******************************************************************************** **
** SHORT:       final[j] = (temp[i] < 10) ? (temp[i] + '0') : (temp[i] - 10 + 'A'); **
** ******************************************************************************** **/
			j++;
		}
		final[j] = '\0';
	}
	return (final);	
}
