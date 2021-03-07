/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftudini <ftudini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:46:16 by ftudini           #+#    #+#             */
/*   Updated: 2021/02/25 17:59:23 by ftudini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	len;
	int				i;
	int				j;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char*)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	while (s1[i++])
	{
		str[j] = s1[i];
		j++;
	}
	i = 0;
	while (s2[i++])
	{
		str[j] = s2[i];
		j++;
	}
	str[j] = 0;
	return (str);
}
