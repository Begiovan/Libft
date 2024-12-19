/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begiovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 07:04:12 by begiovan          #+#    #+#             */
/*   Updated: 2024/12/14 07:04:15 by begiovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *dest, int c, size_t count)
{
	char	*a;

	a = (char *)dest;

	while(count > 0)
	{
		*a = c;
		a++;
		count--;
	}

	return(dest);
}
