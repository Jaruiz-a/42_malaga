#include <stdio.h>

int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main (void)
{
	char src[] = "Born to code";
    	char dest [] = "0410 42";
    printf("%i \n", ft_strlcat(dest, src, 20));
    printf("%s \n", dest);
}
