
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

void	ft_print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		if (i < (size - 1))
			printf(", ");
		i++;
	}
}

int	main(void)
{
	int	tab[10] = {7, 4, 1, 0, 9, 2, 3, 8, 5, 6};
	int	length = (sizeof(tab) / sizeof(tab[0]));
	
	printf("Tabela original: ");
	ft_print_tab(tab, length);

	printf("\nTabela ordenada: ");
	ft_sort_int_tab(tab, length);
	ft_print_tab(tab, length);
	printf("\n");
	return (0);
}

