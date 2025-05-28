
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (*(str + count))
		count++;
	return (count);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	length;

	count = 0;
	length = ft_strlen(dest);
	while (*(src + count) && count < nb)
	{
		dest[length + count] = src[count];
		count++;
	}
	dest[length + count] = '\0';
	return (dest);
}

int	main(void)
{
	char	text1[13] = "42 ";
	char	*text2 = "Sao Paulo!!!";

	ft_strncat(text1, text2, 9);
	printf("%s\n", text1);
	return (0);
}
