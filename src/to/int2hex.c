/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int2hex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:34:19 by kisik             #+#    #+#             */
/*   Updated: 2023/12/03 16:54:58 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lib42.h"

char *int2hex(unsigned long nb)
{
        if (nb == 0)
    {
        char *str = (char *)malloc(2);
        if (str == NULL)
            return NULL;
        str[0] = '0';
        str[1] = '\0';
        return str;
    }

    char *base_str = "0123456789abcdef";
    int len = int_len(nb, 16);

    char *str = (char *)malloc(len + 1);
    if (str == NULL)
        return NULL;

    str[len] = '\0';
    int i = len - 1;

    while (nb > 0)
    {
        str[i] = base_str[nb % 16];
        nb /= 16;
        i--;
    }

    return str;
}
