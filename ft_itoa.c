/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftudini <ftudini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:43:07 by ftudini           #+#    #+#             */
/*   Updated: 2021/03/11 13:16:17 by ftudini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	size_t	len;

	num = n;
	len = n > 0 ? 0 : 1;
	num = num > 0 ? num : -num;
	while (n)
	{
		n /= 10;
		len++;
	}
	if (!(str = (char *)malloc(len + 1)))
		return (0);
	*(str + len--) = '\0';
	while (num > 0)
	{
		*(str + len--) = num % 10 + '0';
		num /= 10;
	}
	if (len == 0 && str[1] == '\0')
		*(str + len) = '0';
	else if (len == 0 && str[1] != '\0')
		*(str + len) = '-';
	return (str);
}
