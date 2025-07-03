#include <unistd.h>
#include <stdlib.h>
#include "s_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	ft_putnbr_pos(unsigned int nbr)
{
	char	digit;

	if (nbr >= 10)
		ft_putnbr_pos(nbr / 10);
	digit = (nbr % 10) + '0';
	write(1, &digit, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (*(par + i)->str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr_pos((unsigned)par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	int		i = 0;
	s_stock_str	*stock = malloc(sizeof(s_stock_str) * 6);
	if (!stock)
		return (1);
	
	stock[0].str = "The Hitchhiker's Guide to the Galaxy";
	stock[0].size = 36;
	stock[0].copy = "The Hitchhiker's Guide to the Galaxy";
	stock[1].str = "Xavier Niel";
	stock[1].size = 11;
	stock[1].copy = "Xavier Niel";
	stock[2].str = "Kwame Yamgnane";
	stock[2].size = 14;
	stock[2].copy = "Kwame Yamgnane";
	stock[3].str = "Florian Bucher";
	stock[3].size = 14;
	stock[3].copy = "Florian Bucher";
	stock[4].str = "Nicolas Sardirac";
	stock[4].size = 16;
	stock[4].copy = "Nicolas Sardirac";
	ft_show_tab(stock);
	
	while (stock[i].copy)
		free(stock[i++].copy);
	free(stock);
	return (0);
}