/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_upper.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 02:14:11 by kisik             #+#    #+#             */
/*   Updated: 2023/12/03 14:41:22 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int is_upper(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return (1);
    return (0);
}
