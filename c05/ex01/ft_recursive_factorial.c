#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	printf("fatorial de 3: %d\n", ft_recursive_factorial(3)); // 6
	printf("fatorial de 6: %d\n", ft_recursive_factorial(6)); // 720
	printf("fatorial de 10: %d\n", ft_recursive_factorial(10)); // 3628800
	printf("fatorial de -2: %d\n", ft_recursive_factorial(-2)); // 0
	printf("fatorial de 0: %d\n", ft_recursive_factorial(0)); // 1
	printf("fatorial de 1: %d\n", ft_recursive_factorial(1)); // 1
	// estoura o limite do tipo inteiro
	// printf("fatorial de 20: %d\n", ft_recursive_factorial(20));
	return (0);
}
