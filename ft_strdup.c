/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begiovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 08:46:03 by begiovan          #+#    #+#             */
/*   Updated: 2024/12/14 08:46:06 by begiovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *src)
{
	char	*dest;

	dest = malloc(ft_strlen(src));
	if(dest == NULL)
	{
		return(NULL);
	}

	ft_strcpy(dest, src);

	return(dest);
}
