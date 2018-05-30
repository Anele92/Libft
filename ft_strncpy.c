/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:28:27 by anoroita          #+#    #+#             */
/*   Updated: 2018/05/30 11:18:02 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t num)
{
	size_t	index;

	index = 0;
	while (src[index] != '\0' && index < num)
	{
		dest[index] = src[index];
		index++;
	}
	while (index < num)
	{
		dest[index] = '\0';
	}
	return (dest);
}
