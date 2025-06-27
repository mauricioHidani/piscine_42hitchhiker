#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	interval;
	int	i;

	if (min >= max)
		return (0);
	*range = malloc((max - min) * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	interval = max - min;
	while (i < interval)
		(*range)[i++] = min++;
	return (i);
}

int	main(void)
{
	int	min = 21;
	int	max = 33;
	int	i;
	int	size;
	int	*range;

	printf("min: %d, max: %d\n", min, max);
	size = ft_ultimate_range(&range, min, max);

	if (size <= 0 || !range)
	{
		printf("Minimum cannot be equal to or greater than Maximum ");
		printf("and Array cannot be Null. An error is occurring in ");
		printf("the operation!\n");
		return (1);
	}

	i = 0;
	while (i < (max - min))
	{
		printf("%d%s", range[i], (i < (size - 1)) ? ", " : "\n");
		i++;
	}
	free(range);
	return (0);
}
