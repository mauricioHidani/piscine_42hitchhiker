
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return ((void *)0);
}

int	main(void)
{
	char	*text = "42 Sao Paulo";
	char	*target = "ao";
	char	*find = ft_strstr(text, target);
	char	*find_original = strstr(text, target);

	printf("(exercise) %s\n", find);
	printf("(original) %s\n", find_original);
	return (0);
}
