/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begiovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 11:20:44 by begiovan          #+#    #+#             */
/*   Updated: 2024/12/23 18:39:59 by begiovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *string, char const *set)
{
	int		start;
	int		end;
	char	*dest;
	int		i;

	i = 0;
	start = 0;
	end = ft_strlen(string) - 1;
	while (string[start] && ft_strchr(set, string[start]))
		start++;
	while (end >= start && ft_strchr(set, string[end]))
		end--;
	dest = (char *)malloc((end - start + 2) * sizeof(char));
	if (!dest)
		return (NULL);
	while (start <= end)
		dest[i++] = string[start++];
	dest[i] = '\0';
	return (dest);
}
