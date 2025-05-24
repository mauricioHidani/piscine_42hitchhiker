
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	main(void)
{
	int	num_a = 42;
	int	num_b = 24;

	printf("atual A: %d, atual B: %d\n", num_a, num_b);
	ft_swap(&num_a, &num_b);
	printf("modificado: A: %d, modificado B: %d\n", num_a, num_b);
	return (0);
}

