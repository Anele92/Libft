/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 10:45:38 by anoroita          #+#    #+#             */
/*   Updated: 2018/05/28 10:52:31 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	buff[22];
	char	*str;
	int		i;
	int		ntmp;

	i = 0;
	ntmp = n;
	if (n < 0)
		ntmp = -n;
	while (ntmp > 0)
	{
		buff[i++] = (ntmp % 10) + 48;
		ntmp = ntmp / 10;
	}
	if (n < 0)
		buff[i++] = '-';
	if (!(str = malloc((size_t)i + 1)))
		return (NULL);
	if (n == -2147483648)
		return ("2147483648");
	else if (n == 0)
		str[0] = '0';
	while (--i >= 0)
		str[ntmp++] = buff[i];
	return (str);
}
