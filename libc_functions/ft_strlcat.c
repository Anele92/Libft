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

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	d;
	int	sum;

	d = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[d] != '\0' && d < size)
	{
		dest[i + d] = src[d];
		d++;
	}
	dest[i + d] = '\0';
	i++;
	d++;
	sum = i + d;
	return (sum);
}

int	main(void)
{
	unsigned int	res;

	res = ft_strlcat("Anele", "Noroita", 100);
	printf("%d\n", res);
	return (0);
}
