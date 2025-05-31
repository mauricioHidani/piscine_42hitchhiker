#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digit;

	digit = '0';
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	nb %= 10;
	digit = nb + '0';
	write(1, &digit, 1);
}

int	main(void)
{
	ft_putnbr(-214);
	write(1, "\n", 1);
	ft_putnbr(21489);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	return 0;
}
