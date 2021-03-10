/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftudini <ftudini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 20:40:24 by ftudini           #+#    #+#             */
/*   Updated: 2021/03/07 18:25:15 by ftudini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		in_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*str;

	start = 0;
	i = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && in_set(s1[start], set))
		start++;
	while (end > start && in_set(s1[end], set))
		end--;
	str = (char*)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}
