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

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	while(*str1 != '\0' && n > 0)
	{
		while((*str1 != '\0' && *str2 != '\0') &&
					(*str1 == *str2) && n >= 0)
		{
			str1++;
			str2++;
			n--;
		}
		if(*str2 == '\0')
		{
			return((char *)str1);
		}
		str1++;
		n--;
	}
	if(!*str2)
	{
		return((char *)str1);
	}
	return(NULL);
}
