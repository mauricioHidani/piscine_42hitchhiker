
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	text[14] = "KWAME YAMGNANE";
	printf("original text: \"%s\"\n", text);

	ft_strlowcase(text);
	printf("lowercase text: \"%s\"\n", text);
	return (0);
}

