/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:59:49 by anoroita          #+#    #+#             */
/*   Updated: 2018/05/30 09:03:52 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	sign;

	nbr = 0;
	sign = 1;
	i = 0;
	while (IS_SPACE(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	while (str[i] && (str[i] >= 48) && (str[i] <= 57))
	{
		nbr *= 10;
		nbr += str[i] - 48;
		i++;
	}
	return (nbr * sign);
}
