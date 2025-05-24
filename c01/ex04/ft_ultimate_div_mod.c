
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;
	
	aux = *a;
	*a = aux / *b;
	*b = aux % *b;
}

int	main(void)
{
	int	num_a = 23;
	int	num_b = 5;

	printf("numero A: %d, numero B: %d\n", num_a, num_b);
	ft_ultimate_div_mod(&num_a, &num_b);
	printf("divisao: %d, modulo: %d\n", num_a, num_b);
	return (0);
}

