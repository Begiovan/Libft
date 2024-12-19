/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begiovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 07:04:47 by begiovan          #+#    #+#             */
/*   Updated: 2024/12/14 07:04:49 by begiovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	if(!src)
	{
		return(0);
	}

	if(!dest && size > 0)
	{
		return(0);
	}
	
	if(size == 0)
	{
		return(ft_strlen(src));
	}

	while(size > 0 && *src != '\0')
	{
		*dest = *src;
		size--;
		dest++;
		src++;
	}

	*dest = '\0';

	return(ft_strlen(src));
}
