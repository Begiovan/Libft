/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begiovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 07:04:00 by begiovan          #+#    #+#             */
/*   Updated: 2024/12/14 07:04:02 by begiovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;

	while(n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return(dest);
}
