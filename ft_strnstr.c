/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begiovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 04:50:28 by begiovan          #+#    #+#             */
/*   Updated: 2024/12/14 04:53:23 by begiovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	if (*str2 == '\0')
		return ((char *)str1);
	while (*str1 != '\0' && n > 0)
	{
		i = 0;
		while (str1[i] == str2[i] && str2[i] != '\0' && i < n)
		{
			i++;
		}
		if (str2[i] == '\0')
			return ((char *)str1);
		str1++;
		n--;
	}
	return (NULL);
}
