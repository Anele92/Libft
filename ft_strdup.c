/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:38:03 by anoroita          #+#    #+#             */
/*   Updated: 2018/06/08 16:01:33 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(src);
	if (!(dest = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	dest[len] = '\0';
	while (len--)
	{
		dest[len] = src[len];
	}
	return (dest);
}
