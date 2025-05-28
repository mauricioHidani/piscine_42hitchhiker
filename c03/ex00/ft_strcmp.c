
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

int main(void)
{
        char    *txta = "42 sao paulo";
        char    *txtb = "42 SAO PAULO";
        char    *txtc = "SPACE";
        char    *txtd = "gb";
        char    *txte = "gbf";
	int     res_a = strcmp(txta, txtb); // função original
        int     res_b = ft_strcmp(txta, txtb);// função lista
	int     res_c = ft_strcmp(txtc, txtc); // função lista
	int	res_d = ft_strcmp(txtd, txte); // função lista

        printf("Funcao original::");
	printf("(s1 < s2) s1: \"%s\", s2: \"%s\", r: %d\n", txta, txtb, res_a);
        printf("Funcao exercicio::");
        printf("(s1 < s2) s1:\"%s\", s2: \"%s\", r: %d\n", txta, txtb, res_b);

        printf("Funcao exercicio::");
	printf("(s1 > s2) s1: \"%s\", s2: \"%s\", r: %d\n", txtc, txtc, res_c);

        printf("Funcao exercicio::");
	printf("(s1 != s2) s1: \"%s\", s2: \"%s\", r: %d\n", txtd, txte, res_d);
	return (0);
}
