#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copied;
	int	i;

	copied = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!copied)
		return ((void*)0);
	i = 0;
	while (src[i])
	{
		copied[i] = src[i];
		i++;
	}
	copied[i] = '\0';
	return (copied);
}

int	main(void)
{
	char	*src = "42 Sao Paulo";
	char	*cpd = ft_strdup(src);

	printf("original: %s, copied: %s\n", src, cpd);
	free(cpd);
	return (0);
}
