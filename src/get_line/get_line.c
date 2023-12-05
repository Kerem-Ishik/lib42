/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 03:46:09 by kisik             #+#    #+#             */
/*   Updated: 2023/12/05 09:02:36 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lib42.h"

#define BUFF_SIZE 3

char *get_line(int fd)
{
    int last_char;
    char buf[BUFF_SIZE + 1];
    static char *stash = NULL; // neden baslangicta NULL atiyoruz?
    char *line = NULL;

    if (fd < 0 || BUFF_SIZE <= 0 || read(fd, buf, 0) < 0)
        return (NULL);
    while ((last_char = read(fd, buf, BUFF_SIZE)) > 0)
    {
        buf[last_char] = '\0';
        if (stash == NULL)
            stash = str_dup(buf);
        else
            stash = str_join(stash, buf);
        if (str_chr_index(buf, '\n') != -1)
        {
            line = str_sub(stash, 0, str_chr_index(stash, '\n'));
            free(stash);
            stash = str_sub(stash, str_chr_index(stash, '\n') + 1, str_len(stash));     
            return (line);
        }
    }
    return (line);
}
