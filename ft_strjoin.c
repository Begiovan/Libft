#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int	len;
	char	*s4;

	len = strlen(s1) + strlen(s2);
	s3 = (char *)malloc(len + 1);

	s4 = s3;
	while(s1 && s2 && len > 0)
	{
		while(*s1 != '\0')
		{
			*s3 = *s1;
			s3++;
			s1++;
		}
		while(*s2 != '\0')
		{
			*s3 = *s2;
			s3++;
			s2++;
		}
		len--;
	}
	*s3 = '\0';

	return(s4);
}


int main()
{
	const char *s1 = "prova";
	const char *s2 = "progr";

	printf("%s\n", ft_strjoin(s1, s2));

	return(0);
}
