/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisik <kisik@student.42kocaeli.com.tr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 03:56:17 by kisik             #+#    #+#             */
/*   Updated: 2023/11/17 04:33:13 by kisik            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./include/lib42.h"

int main()
{
    printf("%d\n", str_len("kerem123"));
    put_str("keremIshik");    
    put_char('\n');
    put_nbr(123);
    put_char('\n');
    put_hex(-123);
    put_char('\n');
    put_base(-123, 2);  
    put_char('\n');
    put_oct(-123);
    put_char('\n');
    char str[] = "kerem";
    char str2[] = "ishik";
    printf("%d\n", str_cmp(str, str2));
    printf("%s\n", str_cpy(str, str2));
    str_to_upper(str);
    printf("%s\n", str);
    str_to_lower(str);
    printf("%s\n", str);
    printf("%d\n", add(3, 1, 2, 3));
    int res = multiply(3, 1, 2, 3) + subtract(3, 1, 2, 3) + divide(2, 32, 2);
    printf("%d\n", res);
    printf("%s\n", int_to_str(power(2, 3)));
    printf("%s\n", int_to_ascii(123));
    printf("%d\n", ascii_to_int("123"));
    printf("%s\n", str_dup("kerem"));
    printf("%s\n", str_rev("kerem"));
    printf("%lu\n", sizeof(float));
    printf("%lu %s %lu\n", sizeof(char), str , sizeof(str));
    printf("%lu %s %lu\n", sizeof(char), str2 , sizeof(str2));
}