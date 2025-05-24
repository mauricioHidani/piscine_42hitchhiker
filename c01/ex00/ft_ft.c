
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	crr;
	int	nbr;

	crr = 1;
	nbr = crr;
	ft_ft(&nbr);
	printf("numero atual: %d, modificado: %d\n", crr, nbr);
	return (0);
}

