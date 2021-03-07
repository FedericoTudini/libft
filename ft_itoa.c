/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftudini <ftudini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:43:07 by ftudini           #+#    #+#             */
/*   Updated: 2021/03/06 18:04:42 by ftudini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_digits(int n)
{
	int len;

	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		return (1);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*str;
	unsigned int	num;

	len = count_digits(n);
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len + 1] = 0;
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		num = -n;
		str[0] = '-';
	}
	else
		num = n;
	while (num != 0 && str[len - 1] != '-' && len >= 0 && n != 0)
	{
		str[len-- - 1] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}
