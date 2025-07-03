#include "ft.h"
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	// ft_putchar
	ft_putchar('c'); 
	write(1, "\n", 1);
	
	// ft_swap
	int	n1 = 2;
	int	n2 = 5;
	printf("swap: (%d, %d)", n1, n2);
	ft_swap(&n1, &n2);
	printf(" = (%d, %d)\n", n1, n2);

	// ft_putstr
	char	*str = "42 Sao Paulo";
	ft_putstr(str);

	// ft_strlen
	int	strlen = ft_strlen(str);
	printf("string length: %s = %d\n", str, strlen);

	// ft_strcmp
	char	*str1 = "42 Sao Paulo";
	char	*str2 = "42 Sao pAULO";
	int	result = ft_strcmp("42 Sao Paulo", "42 Sao pAULO");
	printf("compare strings: str1: %s, str2: %s, result: %d\n", str1, str2, result);
	return (0);
}
