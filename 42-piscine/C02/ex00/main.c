#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char source[] = "Source string.";
	char destin[] = "Dest";
	char *dest;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destin);

    dest = ft_strcpy(destin, source);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, dest);

    printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destin);
	strcpy(destin, source);
	return (0);
}
