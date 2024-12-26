/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begiovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 11:16:01 by begiovan          #+#    #+#             */
/*   Updated: 2024/12/23 11:16:03 by begiovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*des;
	char	*result;

	des = malloc(len + 1);
	if (des == NULL)
		return (NULL);
	result = des;
	while (len > 0 && s[start] != '\0')
	{
		*des = s[start];
		start++;
		des++;
		len--;
	}
	*des = '\0';
	return (result);
}
