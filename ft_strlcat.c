/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begiovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 07:04:32 by begiovan          #+#    #+#             */
/*   Updated: 2024/12/14 07:04:33 by begiovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_size;

	i = 0;
	j = 0;
	src_size = ft_strlen((char *)src);
	while (dst[i] && i < size)
		i++;
	printf("a: %lu\n",i);
	while (src[j] && (i + j + 1) < size)
	{
		printf("b: %lu\n",(i + j));
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	printf("%s\n",dst);
	return (i + src_size);
}
