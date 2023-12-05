/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib42.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 06:14:25 by kisik             #+#    #+#             */
/*   Updated: 2023/12/05 08:03:18 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB42_H
# define LIB42_H

# include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <fcntl.h>


// char
int		is_alpha(char ch);
int		is_ascii(char ch);
int		is_digit(char ch);
int		is_lower(char ch);
int		is_upper(char ch);
int		is_space(char ch);
char	to_lower(char ch);
char	to_upper(char ch);

// put
void	put_base(int nb, int base);
void 	put_char(char ch);
void	put_hex(int nb);
void 	put_nbr(int nb);
void	put_oct(int nb);
void 	put_str(char *str);
void	put_ptr(void *ptr);

int     put_char_i(char ch);
int		put_str_i(char *str);
int		put_nbr_i(int nb);
int		put_base_i(int nb, int base);
int		put_hex_i(int nb);
int     put_ptr_i(void *ptr);

// str
int     str_cat(char *dest, char *src);
int		str_chr(char *str, char ch);
int		str_cmp(char *s1, char *s2);
char    *str_cpy(char *dest, char *src);
char    *str_cpy_n(char *dest, char *src, int n);
int		str_len(const char *str);
//toupper tolower only works with char array not with string char *str
char    *str_to_upper(char *str);
char    *str_to_lower(char *str);
char    *str_reverse(char *str);
char    *str_trim(char *str);
char    *str_sub(char *str, int start, int end);
int     str_chr_index(char *str, char ch);

char    *str_join(char *str1, char *str2);

//math
int add(int num, ...);
int multiply(int num, ...);
int subtract(int num, ...);
int divide(int num, ...);
int power(int base, int exp);
int absolute(int num);
int int_len(int nb, int base);

//mem
void    b_zero(void *s, size_t n);
void    *mem_set(void *s, int c, size_t n);
void    *alloc(size_t size);
void    *mem_cpy(void *dest, const void *src, size_t n);
void    *mem_chr(const void *s, int c, size_t n);
void    *mem_move(void *dest, const void *src, size_t n);
char	*str_dup(const char *str);
char	**str_split(char *str, char sep);

//to
char	*int2str(int num);
int		str2int(char *str);
char	*int2base(int nb, int base);
char	*int2hex(unsigned long nb);

//print
int print(const char *str, ...);

//get_line
char *get_line(int fd);
#endif
