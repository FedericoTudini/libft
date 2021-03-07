/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftudini <ftudini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:15:13 by ftudini           #+#    #+#             */
/*   Updated: 2021/02/27 20:01:44 by ftudini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *src, const void *dst, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char*)(src + i) = *(unsigned char*)(dst + i);
		i++;
	}
	return ((char*)dst);
}
