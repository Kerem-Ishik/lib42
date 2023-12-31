/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_str_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:22:31 by kisik             #+#    #+#             */
/*   Updated: 2023/12/05 09:05:37 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lib42.h"

int	put_str_i(char *str)
{
    int i = 0;

    if (!str)
        return (put_str_i("(null)"));
    while (*str != '\0')
        i += put_char_i(*str++);
    return (i);
}
