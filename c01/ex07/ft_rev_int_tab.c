
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	last_i;
	int	aux;

	i = 0;
	last_i = 0;
	aux = 0;
	while (i < (size / 2))
	{
		last_i = (size - i - 1);
		aux = tab[i];
		tab[i] = tab[last_i];
		tab[last_i] = aux;
		i++;
	}
}

void	ft_print_int_tab(int *tab, int size)
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
	int	tab_even[8] = {7, 6, 5, 4, 3, 2, 1, 0};
	int	tab_odd[7] = {6, 5, 4, 3, 2, 1, 0};

	printf("Table with quantity of even numbers: ");
	ft_print_int_tab(tab_even, 8);
	ft_rev_int_tab(tab_even, 8);
	printf("\nTable inverted: ");
	ft_print_int_tab(tab_even, 8);
	printf("\n");

	printf("Table with quantity of odd numbers: ");
	ft_print_int_tab(tab_odd, 7);
	ft_rev_int_tab(tab_odd, 7);
	printf("\nTable inverted: ");
	ft_print_int_tab(tab_odd, 7);
	printf("\n");

	return (0);
}

