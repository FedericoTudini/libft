/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftudini <ftudini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:40:37 by ftudini           #+#    #+#             */
/*   Updated: 2021/03/06 13:34:40 by ftudini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = 0;
	while (*s)
		if (*s++ == (char)c)
			res = (char*)s - 1;
	if (*s == (char)c)
		res = (char*)s;
	return (res);
}
