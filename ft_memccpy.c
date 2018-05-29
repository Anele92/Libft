/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:27:34 by anoroita          #+#    #+#             */
/*   Updated: 2018/05/22 15:30:35 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char			*dest;
	const unsigned char		*src;
	size_t					i;

	if (s2 != NULL)
	{
		src = s2;
		dest = s1;
		i = 0;
		while (i < n * sizeof(unsigned char))
		{
			dest[i] = src[i];
			if (dest[i] == (unsigned char)c)
				return (dest + i + 1);
			i++;
		}
	}
	return (NULL);
}
