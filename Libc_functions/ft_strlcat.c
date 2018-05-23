/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 15:17:09 by anoroita          #+#    #+#             */
/*   Updated: 2018/05/23 15:04:50 by anele            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str);

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	sum;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size < dst_len)
		sum = size + src_len;
	else
	{
		while(dst_len < size)
		{
			dst[dst_len + 1] = (char)src[i];
			dst_len++;
			src_len++;
		}
		dst[dst_len] = '\0';
		sum = ft_strlen(dst) + ft_strlen(src);
	}
	return (sum);
}
