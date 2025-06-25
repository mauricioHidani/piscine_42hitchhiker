#include <unistd.h>
#include <stdio.h>

void	print_table(int *table)
{
	int	i;
	char	digit;
	
	i = 0;
	digit = '0';
	while (i < 10)
	{
		digit = table[i++] + '0';
		write(1, &digit, 1);
	}
	write(1, "\n", 1);
}

int	is_valid(int *table, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		if (table[i] == col ||
			table[i] - i == col - row ||
			table[i] + i == col + row)
            		return (0);
	}
	return (1);
}

int	solve(int *table, int row)
{
	int	solutions;

	solutions = 0;
	if (row == 10)
	{
		print_table(table);
        	return (1);
	}

	for (int col = 0; col < 10; col++)
	{
		if (is_valid(table, row, col))
		{
			table[row] = col;
			solutions += solve(table, row + 1);
		}
	}
	return (solutions);
}

int	ft_ten_queens_puzzle(void)
{
	int table[10];
	return (solve(table, 0));
}

int	main(void)
{
	printf("Number of solutions: %d\n", ft_ten_queens_puzzle());
	return (0);
}
