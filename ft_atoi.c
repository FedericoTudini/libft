/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftudini <ftudini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:10:24 by ftudini           #+#    #+#             */
/*   Updated: 2021/03/07 22:49:58 by ftudini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int res;
	int sign;

	res = 0;
	sign = 1;
	while (*nptr == '\n' || *nptr == '\t' || *nptr == '\v' 
		|| *nptr == '\r' || *nptr == '\f' || *nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		res *= 10;
		res += (*nptr - '0');
		nptr++;
	}
	return (res * sign);
}
