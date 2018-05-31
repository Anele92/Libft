/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 14:24:52 by anoroita          #+#    #+#             */
/*   Updated: 2018/05/31 12:21:56 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!(s1 && s2))
		return (0);
	while (s1[i] && s2[i] && n)
	{
		if (s1[i] == s2[i])
		{
			i++;
			n--;
		}
		else
			return (0);
	}
	return (1);
}
