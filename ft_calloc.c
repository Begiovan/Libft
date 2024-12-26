/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begiovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:57:39 by begiovan          #+#    #+#             */
/*   Updated: 2024/12/20 18:57:47 by begiovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total;
	void	*mem;

	if (num == 0 || size == 0)
		return (malloc(0));
	if (num > ((size_t)-1) / size)
		return (NULL);
	total = num * size;
	mem = malloc(total);
	if (mem == NULL)
		return (NULL);
	ft_memset(mem, 0, total);
	return (mem);
}
