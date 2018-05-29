/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 17:01:00 by anoroita          #+#    #+#             */
/*   Updated: 2018/05/22 17:01:34 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strrchr.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s) + 1;
	while (--i >= -1)
		if (s[i] == c)
			return ((char *)&s[i]);
	return (NULL);
}
