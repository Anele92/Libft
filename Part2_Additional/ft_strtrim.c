/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 15:38:48 by anoroita          #+#    #+#             */
/*   Updated: 2018/05/28 16:44:10 by anoroita         ###   ########.fr       */
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
	while (IS_SPACE(s[i]))
		i++;
	d = (char*)malloc(sizeof(char) * (len - i + 1));
	while (IS_SPACE(s[len]))
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
