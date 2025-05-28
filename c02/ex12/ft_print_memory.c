#include <unistd.h>

const char *g_hex = "0123456789abcdef";

void	ft_print_hex(unsigned char c)
{
	if (c >= 10)
		ft_print_hex(c / 16);
	write(1, &g_hex[c % 16], 1);
}

void	ft_print_addr(unsigned long addr)
{
	int	i;
	char	res[16];

	i = 15;
	while (i >= 0)
	{
		res[i] = g_hex[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, res, 16);
}

void	ft_print_ctn_hex(unsigned char *ctn)
{
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (i < 16 && ctn[i])
			ft_print_hex(ctn[i]);
		else
			write(1, " ", 1);

		if (i % 2 != 0)
			write(1, "\t", 1);
		i++;
	}
}

void    ft_print_content(unsigned char *ctn, unsigned int size)
{
    unsigned int    i;
    
    i = 0;
    while(i < 16 && ctn[i])
    {
        if (ctn[i] >= 32 && ctn[i] <= 126)
            write(1, &ctn[i], 1);
        else
            write(1, ".", 1);
        i++;
    }
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*p;
	unsigned int	line_size;

	i = 0;
	p = (unsigned char *)addr;
	while (i < size)
	{
		if ((size - i) > 16)
			line_size = 16;
		else
			line_size = (size - i);
		ft_print_addr((unsigned long)(p + i));
		write(1, ": ", 2);
	    	ft_print_ctn_hex((p + i));
		ft_print_content((p + i), line_size);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}

int	main(void)
{
	char	*content = "Bonjour les aminches\n\n\nc\n est fou.tout.ce qu on peut faire avec...print_memory\n\n\n\nlol.lol. \n";
	ft_print_memory(content, 83);
	// write(1, "\n", 1);
	return (0);
}
