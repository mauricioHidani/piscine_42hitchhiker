#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	arr_of_strlen(int size, char **strs)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
		count += ft_strlen(strs[i++]);
	return (count);
}

void	join(int *index, char *target, char *src)
{
	int	i;

	i = 0;
	while (src[i])
		target[(*index)++] = src[i++];
}

char	*preparete_str(int size, char **strs, char *sep)
{
	int	strs_len;
	int	sep_len;

	strs_len = arr_of_strlen(size, strs);
	sep_len = (size - 1) * ft_strlen(sep);
	return (malloc((strs_len + sep_len + 1) * sizeof(char)));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	char	*result;

	if (size < 1)
	{
		result = malloc(sizeof(char));
		if (result)
			result[0] = '\0';
		return (result);
	}

	result = preparete_str(size, strs, sep);
	if (!result)
		return ((void *)0);

	i = 0;
	j = 0;
	while (i < size)
	{
		join(&j, result, strs[i]);
		if (i < size)
			join(&j, result, sep);
		i++;
	}
	result[j] = '\0';
	return (result);
}

int	main(void)
{
	char	**strs = malloc(3 * sizeof(char *));
	strs[0] = "Dexter";
	strs[1] = "Bibous";
	strs[2] = "Hidani";
	char	*result = ft_strjoin(3, strs, ", ");
	printf("result: %s\n", result);

	free(result);
	free(strs);
	return (0);
}
