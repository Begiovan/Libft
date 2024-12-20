#include <stdlib.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	if(!src)
	{
		return(0);
	}

	if(!dest && size > 0)
	{
		return(0);
	}
	
	if(size == 0)
	{
		return(strlen(src));
	}

	while(size > 0 && *src != '\0')
	{
		*dest = *src;
		size--;
		dest++;
		src++;
	}

	*dest = '\0';

	return(strlen(src));
}

int	row_count(const char *c, char d)
{
	int	count;
	int	dim;

	count = 0;
	while(*c != '\0')
	{
		dim = 0;
		while(*c == d && *c != '\0')
		{
			c++;
		}
		while(*c != d && *c != '\0')
		{
			dim++;
			c++;
		}
		if(dim > 0)
		{
			count++;
		}
	}
	return(count);
}

void	col_create(const char *c, char d, char **m)
{
	int	dim;
	int	i;

	i = 0;
	while(*c != '\0')
	{
		dim = 0;
		while(*c == d && *c != '\0')
		{
			c++;
		}
		while(*c != d && *c != '\0')
		{
			dim++;
			c++;
		}
		if(dim > 0)
		{
			m[i] = (char *)malloc((dim + 1) * sizeof(char));
			ft_strlcpy(m[i], (c - dim), dim);
			i++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**mat;
	int	row;

	row = row_count(s ,c);
	mat = (char **)malloc((row + 1) * sizeof(char *));
	if(mat == NULL)
		return(NULL);
	mat[row] = NULL;
	col_create(s, c, mat);
	return(mat);
}

#include <stdio.h>

int main()
{
	int	i = 0;
	char	*s = ",,,,marco,,ciao,,prova";
	char	c = ',';
	char	**matrix = ft_split(s, c);

	while(matrix[i] != NULL)
	{
		printf("%s\n", matrix[i]);
		i ++;
	}
	return(0);
}
