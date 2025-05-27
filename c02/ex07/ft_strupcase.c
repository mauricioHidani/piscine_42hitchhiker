
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	text[14] = "Florian Bucher";
	printf("texto original: %s\n", text);

	ft_strupcase(text);
	printf("text em uppercase: %s\n", text);
	return (0);
}

