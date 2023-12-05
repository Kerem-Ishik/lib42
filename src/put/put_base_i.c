/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_base_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 23:53:42 by kisik             #+#    #+#             */
/*   Updated: 2023/12/03 17:01:33 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lib42.h"

int    put_base_i(int nb, int base)
{
    int i = 0;
    char *range;

	range = "0123456789abcdefghijklmnopqrstuvwxyz";
    if (nb < 0)
    {
        i += put_char_i('-');
        nb = -nb;
    }
    if (nb >= base)
    {
        put_base(nb / base, base);
        put_base(nb % base, base);
    }
    else
        i += put_char_i(range[nb]);
    return (i);
}