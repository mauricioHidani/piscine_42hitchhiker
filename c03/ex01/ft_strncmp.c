
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*s1 = "hello world";
	char	*s2 = "hello";
        int     n = 6;
	int	res = 0;

	res = ft_strncmp(s2, s1, n);
        printf("s1: \"%s\", s2: \"%s\", n: %d, res: %d\n", s1, s2, n, res);
	return (0);
}
