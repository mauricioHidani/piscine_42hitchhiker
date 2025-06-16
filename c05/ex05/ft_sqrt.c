#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	root;

	if (nb <= 0)
		return (0);
	root = 1;
	while (root <= (nb / root))
	{
		if ((root * root) == nb)
			return (root);
		root++;
	}
	return (0);
}

int	main(void)
{
	printf("raiz quadrada de 1: %d\n", ft_sqrt(1)); // 1
	printf("raiz quadrada de 121: %d\n", ft_sqrt(121)); // 11
	printf("raiz quadrada de 64: %d\n", ft_sqrt(64)); // 8
	printf("raiz quadrada de 324: %d\n", ft_sqrt(324)); // 18
	printf("raiz quadrada de 2: %d\n", ft_sqrt(2)); // 0 irracional
	printf("raiz quadrada de -121: %d\n", ft_sqrt(-121)); // 0
	printf("raiz quadrada de 13: %d\n", ft_sqrt(13)); // 0
	printf("raiz quadrada de 0: %d\n", ft_sqrt(0)); // 0
	return (0);
}
