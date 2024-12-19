/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begiovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 07:03:03 by begiovan          #+#    #+#             */
/*   Updated: 2024/12/14 07:03:06 by begiovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *s, int c, size_t count)
{
	const unsigned char *ptr;

	ptr = (const unsigned char *)s;
	while(count > 0)
	{
		if(*ptr == (unsigned char)c)
		{
			return((void*)ptr);
		}
		ptr++;
		count--;
	}
	return(NULL);
}
