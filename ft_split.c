/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begiovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:59:44 by begiovan          #+#    #+#             */
/*   Updated: 2024/12/20 19:00:16 by begiovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

int	row_count(const char *s, char d)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == d)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

void	col_create(const char *s, char d, char **m)
{
	int			dim;
	int			i;
	const char	*start;

	i = 0;
	while (*s)
	{
		while (*s == d && *s != '\0')
			s++;
		if (*s == '\0')
			break ;
		start = s;
		while (*s != d && *s != '\0')
			s++;
		dim = s - start;
		m[i] = (char *)malloc((dim + 1) * sizeof(char));
		if (m[i] == NULL)
			return ;
		ft_strlcpy(m[i], start, dim + 1);
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**mat;
	int		row;

	if (s == NULL)
		return (NULL);
	row = row_count(s, c);
	mat = (char **)malloc((row + 1) * sizeof(char *));
	if (mat == NULL)
		return (NULL);
	mat[row] = NULL;
	col_create(s, c, mat);
	return (mat);
}
