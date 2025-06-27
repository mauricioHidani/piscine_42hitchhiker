#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
		return ((void *)0);
	i = 0;
	range = malloc((max - min) * sizeof(int));
	while (min < max)
		range[i++] = min++;
	return (range);
}

int	main(void)
{
	int	min = 2;
	int	max = 7;
	int	i;
	int	*range = ft_range(min, max);

	printf("min: %d, max: %d\n", min, max);
	i = 0;
	printf("%d", range[i++]);
	while (i < (max - min))
	{
		printf(", %d", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return (0);
}
