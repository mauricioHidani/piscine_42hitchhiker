
#include <unistd.h>

void	ft_print(char *n, int size, int last)
{
	int	i;

	i = 0;
	if (n[0] == last)
	{
		while (i < size)
			write(1, &n[i++], 1);
		write(1, ".\n", 2);
		return ;
	}
	while (i < size)
		write(1, &n[i++], 1);
	write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	num[10];
	char	n_max[10];
	int	flag;
	int	base;
	int	i;

	if (n < 0 || n > 10)
		return ;

	while (i < n)
	{
		num[i] = i + 48;
		n_max[i] = (10 - n) + i + 48;
		i++;
	}

	ft_print(num, n, n_max[0]); 

	while (num[0] != n_max[0])
	{
		flag = n - 1;
		while (num[flag] == n_max[flag])
			--flag;
		base = ++(num[flag]);
		while (flag < n)
			num[++flag] = ++base;
		ft_print(num, n, n_max[0]);
	}
}

int     ft_parse_numb(char *str)
{
        int     i;
        int     result;

        i = 0;
        result = 0;
        while (str[i])
        {
                if (str[i] < '0' || str[i] > '9')
                        return (-1);
                result *= 10;
                result += str[i] - 48;
		i++;
        }
        return (result);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	main(int argc, char **argv)
{
	int	n;

	n = 2;
	if (argc > 1)
	{
		write(1, "Combinacoes possiveis para numeros com ", 39);
		write(1, argv[1], ft_strlen(argv[1]));
		write(1, " digitos\n", 9);
		n = ft_parse_numb(argv[1]);
		ft_print_combn(n);
	}
        write(1, "\n", 1);
	return (0);
}

