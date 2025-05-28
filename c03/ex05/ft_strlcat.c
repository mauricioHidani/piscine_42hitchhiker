
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_length;

	i = 0;
	dest_length = ft_strlen(dest);
	if (size <= dest_length)
		return (size + ft_strlen(src));
	while (src[i] && ((dest_length + i) < (size - 1)))
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + ft_strlen(src));
}

int	main(void)
{
	char	*src = "Paulo Piscine!!!";
	char	dest[24] = "42 Sao ";
	unsigned int	size = ft_strlcat(dest, src, (sizeof(dest) + 1));

	printf("conteudo: \"%s\", tamanho: %d\n", dest, size);
	return (0);
}
