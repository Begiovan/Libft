/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begiovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 07:03:22 by begiovan          #+#    #+#             */
/*   Updated: 2024/12/14 07:03:24 by begiovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*b;

	a = (const unsigned char *)str1;
	b = (const unsigned char *)str2;
	if (n == 0)
		return (0);
	while (n-- > 0)
	{
		if (*a < *b)
			return (-1);
		if (*a > *b)
			return (1);
		a++;
		b++;
	}
	return (0);
}
