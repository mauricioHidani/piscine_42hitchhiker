
#include <stdio.h>

int     ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*str_a = "Xavier Niel, Nicolas";
	char	*str_b = "\b";
	int	result;
	int	wrong_result;

	result = ft_str_is_printable(str_a);
	wrong_result = ft_str_is_printable(str_b);

	printf("resultado true: \"%s\" %d\n", str_a, result);
	printf("resultado false: \"caractere não imprimivel\" %d\n", wrong_result);
	return (0);
}

