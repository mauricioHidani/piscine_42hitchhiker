
#include <unistd.h>

void	ft_putnum_dec(int nb)
{
	char	digit_a;
	char	digit_b;

	digit_a = (nb / 10) + '0';
	digit_b = (nb % 10) + '0';
	write(1, &digit_a, 1);
	write(1, &digit_b, 1);
}

void	ft_print_comb2(void)
{
	int	num_a;
	int	num_b;

	num_a = 0;
	while(num_a <= 98)
	{
		num_b = num_a + 1;
		while (num_b <= 99)
		{
			ft_putnum_dec(num_a);
			write(1, " ", 1);
			ft_putnum_dec(num_b);
			if (num_a != 98 || num_b != 99)
				write(1, ", ", 2);
			num_b++;
		}
		num_a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	write(1, "\n", 1);
	return (0);
}

