/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begiovan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 07:03:38 by begiovan          #+#    #+#             */
/*   Updated: 2024/12/14 07:03:40 by begiovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *dest, const void *src, size_t count)
{
	char* d;
	const char* s;

	d = (char *) dest;
	s = (const char *) src;

	while(count > 0)
	{
		*d = *s;
		d++;
		s++;
		count--;
	}
	return(dest);
}
