#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char *str;
	char *allocated;

	str = "	Hello World with malloc()";
	printf("original : base : $%s$ @ %p\n", str, str);
	allocated = strdup(str);
	printf("copied : alloc : $%s$ @ %p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
}
