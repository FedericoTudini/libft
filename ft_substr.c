/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftudini <ftudini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:25:43 by ftudini           #+#    #+#             */
/*   Updated: 2021/03/07 18:41:13 by ftudini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	size_t		i;

	i = 0;
	if (len > (size_t)ft_strlen(s + start))
		len = (size_t)ft_strlen(s + start);
	if (start >= (unsigned int)ft_strlen(s))
		len = 0;
	if (!(sub = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while ((i < len) && *(s + start + i))
	{
		sub[i] = *(s + start + i);
		i++;
	}
	sub[len] = 0;
	return (sub);
}
