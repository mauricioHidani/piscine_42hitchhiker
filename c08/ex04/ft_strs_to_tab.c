#include <stdlib.h>
#include <stdio.h>
#include "s_stock_str.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*copied;
	int	i;

	copied = malloc(sizeof(char) * (ft_strlen(src) + 1));
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int		i;
	s_stock_str	*stock;

	stock = malloc(sizeof(s_stock_str) * (ac + 1));
	if (!stock)
		return ((void *)0);
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].size = 0;
	stock[i].str = 0;
	stock[i].copy = 0;
	return (stock);
}

int	main(void)
{
	int		i = 0;
	int		ac = 5;
	char		**av = malloc(sizeof(char *) * ac);
	s_stock_str	*stock;
	if (!av)
		return (1);
	av[0] = "The Hitchhiker's Guide to the Galaxy"; // 36
	av[1] = "Xavier Niel"; // 11
	av[2] = "Kwame Yamgnane"; // 14
	av[3] = "Florian Bucher"; //  14
	av[4] = "Nicolas Sardirac"; //  16

	stock = ft_strs_to_tab(ac, av);
	while (i < ac)
	{
		printf("size: %d, str: %s, copy: %s\n", stock[i].size, stock[i].str, stock[i].copy);
		i++;
	}

	i = 0;
	while (i < ac)
		free(stock[i++].copy);
	free(av);
	free(stock);
	return (0);
}
