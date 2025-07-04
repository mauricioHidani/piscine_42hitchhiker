#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 || power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int	main(void)
{
	printf("5^3: %d\n", ft_iterative_power(5, 3)); // 125
	return (0);
}
