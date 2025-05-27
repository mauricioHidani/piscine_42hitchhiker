
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < '0' || *(str + i) > '9')
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*str_a = "12re";
	char	*str_b = "123";
	int	wrong_result;
	int	result;

	wrong_result = ft_str_is_numeric(str_a);
	result = ft_str_is_numeric(str_b);

	printf("resultado falso: \"%s\" %d\n", str_a, wrong_result);
	printf("resultado true: \"%s\" %d\n", str_b, result);
	return (0);
}

