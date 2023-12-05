/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_chr_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 03:48:03 by kisik             #+#    #+#             */
/*   Updated: 2023/12/02 16:00:35 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lib42.h"

int str_chr_index(char *str, char ch)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == ch)
            return (i);
        i++;
    }
    return (-1);
}