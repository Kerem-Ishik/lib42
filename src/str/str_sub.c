/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_sub.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 03:25:43 by kisik             #+#    #+#             */
/*   Updated: 2023/12/05 08:18:28 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lib42.h"

char *str_sub(char *str, int start, int end)
{
    char *sub;
    int i;

    i = 0;
    sub = alloc(end - start + 1);
    while (start < end)
    {
        sub[i] = str[start];
        i++;
        start++;
    }
    sub[i] = '\0';
    return (sub);
}