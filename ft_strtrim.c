#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strtrim(char const *string, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(string[i] != '\0')
	{
		
	}
}

int main()
{
	const char *s1 = "prova ciao prova prova ciao";
	const char *s2 = "prova";
	printf("%s\n", ft_strtrim(s1, s2));
	return(0);
}
