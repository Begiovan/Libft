/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begiovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:01:03 by begiovan          #+#    #+#             */
/*   Updated: 2024/12/20 19:01:05 by begiovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		len;
	char	*s4;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	s3 = (char *)malloc(len + 1);
	s4 = s3;
	while (s1 && s2 && len > 0)
	{
		while (*s1 != '\0')
		{
			*s3 = *s1;
			s3++;
			s1++;
		}
		while (*s2 != '\0')
		{
			*s3 = *s2;
			s3++;
			s2++;
		}
		len--;
	}
	*s3 = '\0';
	return (s4);
}
