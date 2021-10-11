/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftudini <ftudini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 10:31:18 by ftudini           #+#    #+#             */
/*   Updated: 2021/03/13 11:48:38 by ftudini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*p_dest;
	char			*p_src;
	unsigned int	n;
	unsigned int	dlen;

	p_dest = dest;
	p_src = src;
	n = size;
	while (n-- != 0 && *p_dest != '\0')
		p_dest++;
	dlen = p_dest - dest;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(p_src));
	while (*p_src)
	{
		if (n != 1)
		{
			*p_dest++ = *p_src;
			n--;
		}
		p_src++;
	}
	*p_dest = '\0';
	return (dlen + (p_src - src));
}
