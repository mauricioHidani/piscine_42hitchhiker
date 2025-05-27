
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	*src = "The Hitchhikers";
	char	dest[30];
	char	*copied = ft_strncpy(dest, src, 20);
	int	i = 0;

	printf("source: %s\n", src);
	printf("destiny: %s\n", dest);
	printf("copied\n");
	
	while (i < 30)
		printf("%c", copied[i++]);
	printf("\n");
	
	return (0);
}

