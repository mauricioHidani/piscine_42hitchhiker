#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while ((i * i) <= nb)
		if ((nb % i++) == 0)
			return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	current;

	if (ft_is_prime(nb))
		return (nb);
	current = (nb + 1);
	while (!ft_is_prime(current))
		current++;
	return (current);
}

int	main(void)
{
	printf("324 e primo, se nao for mostre o proximo primo depois dele\n");
	printf("324 -> %d\n", ft_find_next_prime(324)); // 331

	printf("14 e primo, se nao for mostre o proximo primo depois dele\n");
	printf("14 -> %d\n", ft_find_next_prime(14)); // 17
	return (0);
}
