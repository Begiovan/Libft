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

int memcmp(const void *str1, const void *str2, size_t n)
{
	const char *a;
	const char *b;

	a = (const char *)str1;
	b = (const char *)str2;

	while((a && b) || n > 0)
	{
		if((*a - *b) < 0)
		{
			return(-1);
		}
		if((*a - *b) > 0)
		{
			return(1);
		}
	}
	return(0);
}
