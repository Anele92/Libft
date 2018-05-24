/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 15:38:48 by anoroita          #+#    #+#             */
/*   Updated: 2018/05/24 16:49:15 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		len;
	char	*d;
	int		i;
	int		j;

	len = (int)(ft_strlen(s) - 1);
	i = 0;
	j = 0;
	while (s[i] == '\n' || s[i] == '\t' || s[i] == 32)
		i++;
	d = (char*)malloc(sizeof(char) * (len - i + 1));
	while (s[len] == '\n' || s[len] == '\t' || s[len] == 32)
		len--;
	while (i <= len)
	{
		d[j] = s[i];
		i++;
		j++;
	}
	d[j] = '\0';
	return (d);
}
