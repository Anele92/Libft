/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 08:02:45 by anoroita          #+#    #+#             */
/*   Updated: 2018/05/24 09:37:32 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len);

void	*ft_memalloc(size_t size)
{
	void	*fresh;

	if (!size)
		return (0);
	fresh = malloc(sizeof(*fesh) * size);
	if (!fresh)
		return (0);
	fresh = ft_memset(fresh, 0, size);
	return (fresh);
}
