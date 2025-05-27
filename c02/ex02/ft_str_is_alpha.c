
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (*(str + i))
	{
		if (str[i] < 'A' || str[i] > 'z')
			return (0);
                if (str[i] > 'Z' && str[i] < 'a')
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
	{
	char	*str_a = "Galaxy";
	char	*str_b = "Gal4xia";
	char	*str_c = "";
	int	result;
	int	wrong_result;
	int	empty_result;

	result = ft_str_is_alpha(str_a);
	wrong_result = ft_str_is_alpha(str_b);
	empty_result = ft_str_is_alpha(str_c);

	printf("resultado certo: \"%s\" %d\n", str_a, result);
	printf("resultado errado:\"%s\" %d\n", str_b, wrong_result);
	printf("resultado vazio: \"%s\" %d\n", str_c, empty_result);
	return (0);
}

