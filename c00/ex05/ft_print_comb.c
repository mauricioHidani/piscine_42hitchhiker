
#include <unistd.h>

void	ft_print_comb(void)
{
	char	digit_a;
	char	digit_b;
	char	digit_c;

	digit_a = '0';
	while (digit_a <= '7')
	{
		digit_b = digit_a + 1;
		while (digit_b <= '8')
		{
			digit_c = digit_b + 1;
			while (digit_c <= '9')
			{
				write(1, &digit_a, 1);
				write(1, &digit_b, 1);
				write(1, &digit_c, 1);
				digit_c++;
				if (digit_a < '7')
					write(1, ", ", 2);
			}
			digit_b++;
		}
		digit_a++;
	}
}

int	main(void)
{
	ft_print_comb();
	write(1, "\n", 1);
	return (0);
}

