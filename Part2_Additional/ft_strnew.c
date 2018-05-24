/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 10:25:10 by anoroita          #+#    #+#             */
/*   Updated: 2018/05/24 10:34:46 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size);

char	*ft_strnew(size_t size)
{
	char		*s;
	size_t		i;

	s = malloc(sizeof(char) * size + 1);
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}
