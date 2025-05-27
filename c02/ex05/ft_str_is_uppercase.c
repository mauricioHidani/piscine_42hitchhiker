
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*str_a = "DOUGLAS";
	char	*str_b = "dougLas";
	int	result;
	int	wrong_result;

	result = ft_str_is_uppercase(str_a);
	wrong_result = ft_str_is_uppercase(str_b);

	printf("resultado true: \"%s\" %d\n", str_a, result);
	printf("resultado false: \"%s\" %d\n", str_b, wrong_result);
	return (0);
}

