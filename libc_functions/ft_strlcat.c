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

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	index;
	size_t	len;

	len = strlen(dst) + strlen(src);
	if (size <= strlen(dst))
		return (strlen(src) + size);
	while (*dst)
		dst++;
	index = 0;
	while ((index < size - (len - strlen(src)) - 1) && src[index])
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (len);
}
