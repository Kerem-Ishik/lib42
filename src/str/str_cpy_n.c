/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_cpy_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 07:51:22 by kisik             #+#    #+#             */
/*   Updated: 2023/11/16 08:08:09 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char *str_cpy_n(char *dest, char *src, int n)
{
    int i;

    i = 0;
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}