/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int2base.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:31:39 by kisik             #+#    #+#             */
/*   Updated: 2023/12/03 16:38:39 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lib42.h"

char	*int2base(int nb, int base)
{
    char	*str;
    int		i;
    int		len;
    char	*base_str;

    base_str = "0123456789abcdef";
    len = int_len(nb, base);
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    str[len] = '\0';
    if (nb < 0)
    {
        str[0] = '-';
        nb *= -1;
    }
    i = len - 1;
    while (nb >= base)
    {
        str[i] = base_str[nb % base];
        nb /= base;
        i--;
    }
    str[i] = base_str[nb % base];
    return (str);
}