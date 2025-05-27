
#include <unistd.h>

const char	*g_hex = "0123456789abcdef";

int	ft_non_printable(char c)
{
	return ((c >= 0 && c <= 31) || (c == 127));
}

void	ft_print_hex(char c)
{
	if (c >= 10)
		ft_print_hex(c / 16);
	write(1, &g_hex[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_non_printable(str[i]))
		{
			write(1, "\\", 1);
			ft_print_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(void)
{
	char	*text = "Oi\nvoce esta bem?";
	ft_putstr_non_printable(text);
	write(1, "\n", 1);
	return (0);
}

