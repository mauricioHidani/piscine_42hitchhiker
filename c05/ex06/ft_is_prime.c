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

int	main(void)
{
	int	valid_nums[] = {0, 1, 2, 3, 4, 5, 10, 13, 17, 20, 23, 25, 29, 
		31, 37, 49, 97, 121};
	int size_valid = sizeof(valid_nums) / sizeof(valid_nums[0]);
	
	for (int i = 0; i < size_valid; i++)
		printf("%d: %s\n", 
			valid_nums[i], 
			ft_is_prime(valid_nums[i]) ? 
				"primo" : "não primo"
		);
	return (0);
}
