/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_ascii.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:46:42 by kisik             #+#    #+#             */
/*   Updated: 2023/11/15 20:26:26 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	is_ascii(char ch)
{
	return (ch >= 0 && ch <= 127);
}
