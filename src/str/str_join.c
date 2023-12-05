/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_join.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 23:12:01 by kisik             #+#    #+#             */
/*   Updated: 2023/12/05 08:24:32 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lib42.h"

char *str_join(char *str1, char *str2)
{
    char *str;
    int i;
    int j;
    
    i = 0;
    j = 0;
    str = (char *)malloc(sizeof(char) * (str_len(str1) + str_len(str2) + 1));
    while(str1[i] != '\0')
    {
        str[i] = str1[i];
        i++;
    }
    while(str2[j] != '\0')
    {
        str[i] = str2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    return (str);
}