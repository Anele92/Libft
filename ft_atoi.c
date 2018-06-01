/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:59:49 by anoroita          #+#    #+#             */
/*   Updated: 2018/06/01 16:17:44 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ret(int n)
{
	if (n == -1)
		return (0);
	return (-1);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		r;
	int		sign;
	int		counter;

	i = 0;
	sign = 1;
	r = 0;
	counter = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + (str[i] - '0');
		i++;
		counter++;
		if (counter > 18)
			return (ft_ret(sign));
	}
	return (r * sign);
}
