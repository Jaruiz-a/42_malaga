
#include <stdio.h>

int	ft_atoi(char *str);

int main(void)
{
	char *s = "   ---+--+01234506789ab567";
	printf("%d", ft_atoi(s));
}
