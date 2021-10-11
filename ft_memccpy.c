/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftudini <ftudini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:39:31 by ftudini           #+#    #+#             */
/*   Updated: 2021/03/06 13:07:29 by ftudini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*cpy;

	cpy = (char*)dst;
	while (n--)
	{
		if ((*cpy++ = *(char*)(src++)) == (char)c)
			return (cpy);
	}
	return (NULL);
}
