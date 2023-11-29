/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib42.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 06:14:25 by kisik             #+#    #+#             */
/*   Updated: 2023/11/16 16:13:04 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB42_H
# define LIB42_H

# include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>


// char
int		is_alpha(char ch);
int		is_ascii(char ch);
int		is_digit(char ch);
int		is_lower(char ch);
int		is_upper(char ch);
int		is_whitespace(char ch);
char	to_lower(char ch);
char	to_upper(char ch);

// put
void	put_base(int nb, int base);
void	put_char(char ch);
void	put_hex(int nb);
void	put_nbr(int nb);
void	put_oct(int nb);
void	put_str(char *str);

// str
int     str_cat(char *dest, char *src);
int		str_chr(char *str, char ch);
int		str_cmp(char *s1, char *s2);
char    *str_cpy(char *dest, char *src);
char    *str_cpy_n(char *dest, char *src, int n);
char   *str_dup(char *src);
int		str_len(char *str);
void    *str_to_upper(char *str);
void    *str_to_lower(char *str);
char    *str_rev(char *str);

//math
int add(int num, ...);
int multiply(int num, ...);
int subtract(int num, ...);
int divide(int num, ...);
int power(int base, int exp);

//mem
void    b_zero(void *s, size_t n);
void    *mem_set(void *s, int c, size_t n);
void    *alloc_n(size_t size);
void    *mem_cpy(void *dest, const void *src, size_t n);
void    *mem_chr(const void *s, int c, size_t n);
void    *mem_move(void *dest, const void *src, size_t n);
char	*str_dup(char *str);

//to
char	*int_to_str(int num);
char	*int_to_ascii(int num);
int		ascii_to_int(char *str);
int      str_to_int(char *str);
#endif
