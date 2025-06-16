#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int	main(void)
{
	// fb(0)=0; fb(1)=1, fb(2)=1, fb(3)=2, fb(4)=3, fb(5)=5, 
	// fb(6)=8, fb(7)=13, fb(8)=21, fb(9)=34...
	printf("fibonacci no indice 8: %d\n", ft_fibonacci(8)); // 21
	return (0);
}
