/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_base.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 23:53:42 by kisik             #+#    #+#             */
/*   Updated: 2023/11/16 00:19:50 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lib42.h"

void    put_base(int nb, int base)
{
    char *range;

	range = "0123456789abcdefghijklmnopqrstuvwxyz";
    if (nb < 0)
    {
        put_char('-');
        nb = -nb;
    }
    if (nb >= base)
    {
        put_base(nb / base, base);
        put_base(nb % base, base);
    }
    else
        put_char(range[nb]);
}