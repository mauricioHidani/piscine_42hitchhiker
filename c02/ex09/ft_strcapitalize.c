
#include <stdio.h>

int	ft_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_is_num(char c)
{
	return (c >= '0' && c <= '9');
}

char    *ft_strcapitalize(char *str)
{
	int	i;
	int	is_new_word;

	i = 0;
	is_new_word = 1;
        while (str[i] != '\0')
        {
                if (ft_is_lower(str[i]) || ft_is_upper(str[i]) || ft_is_num(str[i]))
                {
			if (is_new_word && ft_is_lower(str[i]))
				str[i] -= 32;
			else if (!is_new_word && ft_is_upper(str[i]))
				str[i] += 32;
			is_new_word = 0;
		}
		else
		{
			is_new_word = 1;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char	text_a[] = "tHe hITChhIker's guiDE tO thE galAxY";
	char	text_b[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("Original A: \"%s\"\n", text_a);
	ft_strcapitalize(text_a);
	printf("Modificado texto A: \"%s\"\n", text_a);

	printf("Original B: \"%s\"\n", text_b);
	ft_strcapitalize(text_b);
	printf("Modificado texto B: \"%s\"\n", text_b);
	return (0);
}

