/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_to_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:47:37 by kisik             #+#    #+#             */
/*   Updated: 2023/11/16 16:07:57 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lib42.h"

char	*int_to_str(int num)
{
    int		i;
    int		j;
    char	*str;

    i = 0;
    j = num;
    while (j > 0)
    {
        j /= 10;
        i++;
    }
    str = (char *)alloc_n(sizeof(char) * (i + 1));
    str[i] = 0;
    while (i > 0)
    {
        str[--i] = num % 10 + '0';
        num /= 10;
    }
    return (str);
}
