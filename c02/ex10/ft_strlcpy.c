
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

int	main(void)
{
	int	length;
	char	*src = "The Hitchhiler's Guide To the Galaxy";
	int	size = 17;
	char	dest[size];

	length = ft_strlcpy(dest, src, size);
	printf("Texto original: \"%s\" tamanho: %d\n", src, length);
	printf("Texto copiado: \"%s\" qtd_copiada: %d", dest, size);
	printf(" tamanho: %d\n", length);
	return (0);
}

