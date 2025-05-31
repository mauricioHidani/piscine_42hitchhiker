#include <unistd.h>

void	ft_putstr(char *str)
{
    	unsigned int	i;

	i = 0;
	while (*(str + i))
		write(1, &*(str + (i++)), 1);
}

int	main(void)
{
	char	*text = "The Hitchhiker's Guide to the Galaxy";
	ft_putstr(text);
	write(1, "\n", 1);
	return (0);
}
