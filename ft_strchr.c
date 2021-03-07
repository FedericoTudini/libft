/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftudini <ftudini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:35:46 by ftudini           #+#    #+#             */
/*   Updated: 2021/03/06 16:06:11 by ftudini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	u;
	
	u = (unsigned char)c;
	while (*s || u == 0)
	{
		if (*s == u)
		{
			return (char*)s;	
		}
		s++;
	}
	return (0);
}
