/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:06:18 by anoroita          #+#    #+#             */
/*   Updated: 2018/05/30 17:21:27 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*s;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	s = (char *)haystack;
	if (needle[0] == '\0')
		return (s);
	if (needle == haystack)
		return (s);
	while (s[i++])
	{
		k = i;
		j = 0;
		while (s[i] == needle[j])
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return (s + k);
		}
	}
	return (0);
}
