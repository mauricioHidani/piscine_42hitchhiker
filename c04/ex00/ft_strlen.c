#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str + count))
		count++;
	return (count);
}
 
int	main(void)
{
	char	*text = "The Hitchhiker's Guide to the Galaxy";
	int	str_len = ft_strlen(text);
	printf("conteudo: \"%s\", tamanho: %d\n", text, str_len);
	return (0);
}
