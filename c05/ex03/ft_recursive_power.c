#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 0 || power == 0)
		return (1);
	return (ft_recursive_power(nb, --power) * nb);
}

int	main(void)
{
	printf("5^3: %d\n", ft_recursive_power(5, 3)); // 125
	return (0);
}
