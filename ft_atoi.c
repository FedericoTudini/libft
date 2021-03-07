/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftudini <ftudini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:10:24 by ftudini           #+#    #+#             */
/*   Updated: 2021/03/06 17:45:54 by ftudini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int res;
	int sign;

	res = 0;
	sign = 1;
	if (!ft_isdigit(*nptr) && *nptr != '-' && *nptr != '+')
		return (0);
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	if (*nptr == '+' || *nptr == '-' || !ft_isdigit(*nptr))
		return (0);
	while (ft_isdigit(*nptr) && *nptr != '\0')
	{
		res *= 10;
		res += (int)*nptr - '0';
		nptr++;
	}
	return (res * sign);
}
