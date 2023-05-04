#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main()
{
	char str[] = "42 0410 Network 2022 piscine Javier";
	char find[] = "piscine";
	printf("%s", ft_strstr(str, find));
}
