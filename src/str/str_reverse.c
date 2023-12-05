/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_rev.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:51:22 by kisik             #+#    #+#             */
/*   Updated: 2023/12/03 22:31:40 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lib42.h"

char	*str_reverse(char *str)
{
    int		i;
    int		j;
    char	*rev;

    i = 0;
    j = str_len(str);
    rev = (char *)alloc(sizeof(char) * (j + 1));
    if (!rev)
        return (NULL);
    rev[j] = 0;
    while (j > 0)
    {
        rev[--j] = str[i++];
    }
    return (rev);
}