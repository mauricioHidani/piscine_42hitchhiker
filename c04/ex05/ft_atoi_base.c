
#include <stdio.h>

int	ft_find_base(char *base)
{
	int	i;
	int	j;
	int	is_invalid_sign;
	int	is_invalid_non_print;

	i = 0;
	while (base[i])
	{
		is_invalid_sign = base[i] == '-' || base[i] == '+';
		is_invalid_non_print = base[i] <= 32 || base[i] > 126;
		if (is_invalid_sign || is_invalid_non_print)
			return (0);
		j = i + 1;
		while (base[j])
			if (base[j++] == base[i])
				return (0);
		i++;
	}
	return (i);
}

int	ft_find_dec_base(int i, char *str, char *base)
{
	int	j;

	j = 0;
	while (base[j])
		if (base[j++] == str[i])
			return (j - 1);
	return (-1);
}

void	ft_move_index_and_skip_spaces(int *i, char *str)
{
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
		*i = *i + 1;
}

void	ft_move_index_and_set_sign(int *i, char *str, int *sign)
{
	*sign = 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			*sign = *sign * -1;
		*i = *i + 1;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	base_rdec;
	int	dec_base;
	int	result;

	i = 0;
	sign = 1;
	base_rdec = 0;
	result = 0;
	base_rdec = ft_find_base(base);
	if (base_rdec < 2)
		return (0);
	ft_move_index_and_skip_spaces(&i, str);
	ft_move_index_and_set_sign(&i, str, &sign);
	while (str[i])
	{
		dec_base = ft_find_dec_base(i++, str, base);
		if (dec_base >= 0)
			result = result * base_rdec + dec_base;
		else
			break;
	}
	return (result * sign);
}

int     main(void)
{
	printf("binary: 101010, decimal: %d\n", ft_atoi_base("101010", "01"));
	printf("hexadecimal: 2A, decimal: %d\n", ft_atoi_base("\t 2A", "0123456789ABCDEF"));
	printf("octal: -52, decimal: %d\n", ft_atoi_base("\n -52sed", "01234567"));
	printf("decimal: 42, decimal: %d\n", ft_atoi_base("\t\n\v 42aewsedw3er", "0123456789"));
        return (0);
}
