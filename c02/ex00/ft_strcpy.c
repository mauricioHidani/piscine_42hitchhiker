
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int    i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	src[] = "The Hitchhikers";
	char	dest[35];
	char	*copied = ft_strcpy(dest, src);

	printf("sorce: %s\n", src);
	printf("destiny: %s\n", dest);
	printf("copied: %s\n", copied);
	return (0);
}

