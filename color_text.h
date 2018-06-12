/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_text.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 10:44:51 by anoroita          #+#    #+#             */
/*   Updated: 2018/06/12 18:23:00 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    underline()
{
    printf("\033[4m");
}

void    closeline()
{
    printf("\033[0m");
}

void    cyan()
{
    printf("\033[1;36m");
}

void    green()
{
    printf("\033[0;32m");
}

void    reset()
{
    printf("\033[0m");
}

void    yellow()
{
    printf("\033[01;33m");
}

void	magenta()
{
	printf("\033[0;35m");
}

void	red()
{
	printf("\033[0;031m");
}
