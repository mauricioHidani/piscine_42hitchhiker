
#include <unistd.h>

int	ft_find_base(char *base)
{
	int	count;

	count = 0;
	while (base[count])
		count++;
	return count;
}

void	ft_putnbr_base_std(unsigned int nbr, char *digits, int base)
{
	char	digit;

	digit = 0;
	if (nbr >= (unsigned int) base)
		ft_putnbr_base_std((nbr / base), digits, base);
	digit = digits[nbr % base];
	write(1, &digit, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr == -2147483648) 
		{
			ft_putnbr_base_std((unsigned int)2147483648U, base, ft_find_base(base));
			return ;
		}
		nbr = -nbr;
	}
	ft_putnbr_base_std((unsigned int)nbr, base, ft_find_base(base));
}

int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789"); // Deve imprimir: -2147483648
	write(1, "\n", 1);
	ft_putnbr_base(-255, "01");               // Deve imprimir: -11111111
	write(1, "\n", 1);
	ft_putnbr_base(-255, "0123456789ABCDEF"); // Deve imprimir: -FF
	write(1, "\n", 1);
	ft_putnbr_base(2040, "0123456789ABCDEF"); // Deve imprimir: -FF
	write(1, "\n", 1);

	return (0);
}
