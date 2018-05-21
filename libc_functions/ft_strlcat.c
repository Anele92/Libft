/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 15:17:09 by anoroita          #+#    #+#             */
/*   Updated: 2018/05/21 16:45:02 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, char *src, int size)
{
	size_t	i;
	size_t	dstlength;
	size_t	srclength;

	i = 0;
	dstlength = ft_strlen(dst);
	srclength = ft_strlen(src);
	if (size <= dstlength)
		return (srclength + size);
	while ((dst[i] != '\0') && i < (size - 1))
		i++;
	while (*src && i < (size - 1))
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (dstlength + srclength);
}
