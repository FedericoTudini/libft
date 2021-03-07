/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftudini <ftudini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:25:43 by ftudini           #+#    #+#             */
/*   Updated: 2021/03/06 12:43:56 by ftudini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;
	size_t		i;

	ptr = (char*)malloc(sizeof(*s) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < start)
	{
		s++;
		i++;
	}
	i = 0;
	while (*s && i < len)
	{
		ptr[i] = *s;
		s++;
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
