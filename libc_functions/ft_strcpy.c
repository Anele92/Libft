/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:30:15 by anoroita          #+#    #+#             */
/*   Updated: 2018/05/21 13:30:26 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		dest[index] = str[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
