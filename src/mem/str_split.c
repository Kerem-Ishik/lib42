/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:02:28 by kisik             #+#    #+#             */
/*   Updated: 2023/12/02 23:52:14 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lib42.h"

char **str_split(char *str, char sep)
{
    int i;
    int j;
    int k;
    char **split;

    i = 0;
    j = 0;
    k = 0;
    split = (char **)malloc(sizeof(char *) * (str_len(str) + 1));
    while (str[i] != '\0')
    {
        if (str[i] == sep)
        {
            split[j] = (char *)malloc(sizeof(char) * (k + 1));
            k = 0;
            j++;
        }
        else
            k++;
        i++;
    }
    split[j] = (char *)malloc(sizeof(char) * (k + 1));
    i = 0;
    j = 0;
    k = 0;
    while (str[i] != '\0')
    {
        if (str[i] == sep)
        {
            split[j][k] = '\0';
            k = 0;
            j++;
        }
        else
        {
            split[j][k] = str[i];
            k++;
        }
        i++;
    }
    split[j][k] = '\0';
    split[j + 1] = 0;
    return (split);
}