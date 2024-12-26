/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begiovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:07:35 by begiovan          #+#    #+#             */
/*   Updated: 2024/12/23 18:43:56 by begiovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

char	*ft_strchr(const char *str, int i)
{
	while (*str)
	{
		if (*str == (char) i)
			return ((char *) str);
		str++;
	}
	if (*str == '\0' && (char) i == '\0')
		return ((char *) str);
	return (NULL);
}
