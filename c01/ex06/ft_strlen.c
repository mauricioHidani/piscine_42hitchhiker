
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while(str[count])
		count++;
	return (count);
}

int	main(void)
{
	int str_length = ft_strlen("42 Sao Paulo");
	printf("tamanho: %d\n", str_length);
	return (0);
}

