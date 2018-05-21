/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:19:52 by anoroita          #+#    #+#             */
/*   Updated: 2018/05/21 13:21:51 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strdup(char *src)
{
    int     len;
    char    *dest;

    len = ft_strlen(src);
    if (!(dest = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    dest[len] = '\0'
    while (len >= 0)
    {
        dest[index] = src[index];
        len--;
    }
    return (dest);
}
