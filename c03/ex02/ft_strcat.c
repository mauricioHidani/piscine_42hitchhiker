
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count])
	count++;
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	count;
	unsigned int	length;

	count = 0;
	length = ft_strlen(dest);
	while (src[count])
	{
		dest[length + count] = src[count];
		count++;
	}
	dest[length + count] = '\0';
	return (dest);
}

int	main(void)
{
	char	text1[20] = "hello abcddd";
	char	*text2 = "world123";

	ft_strcat(text1, text2);
	printf("%s\n", text1);
	return (0);
}
