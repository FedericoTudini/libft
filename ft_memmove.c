/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftudini <ftudini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 16:35:35 by ftudini           #+#    #+#             */
/*   Updated: 2021/03/06 12:39:30 by ftudini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = 0;
	if (len == 0 || src == dst)
		return (dst);
	if (dst < src)
	{
		while (i < len)
		{
			*(unsigned char*)(dst + i) = *(unsigned char*)(src + i);
			i++;
		}
	}
	else
	{
		while (len--)
		{
			*(unsigned char*)(dst + len) = *(unsigned char*)(src + len);
		}
	}
	return (dst);
}
