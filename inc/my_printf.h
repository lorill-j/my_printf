/*
** lib.h for my_printf.h in /Users/lorill_j/my_printf.git/trunk
** 
** Made by LORILLARD Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Fri Mar 24 16:26:03 2017 LORILLARD Jimmy
** Last update Sat Mar 25 22:22:54 2017 LORILLARD Jimmy
*/

#ifndef _MY_PRINTF_H_
# define _MY_PRINTF_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#define SPECIFIERS "scidouxX"

typedef struct s_specifiers
{
  char s_name;
  void (*fnc)(va_list ap);
} t_specifiers;

void print_s(va_list ap);

void print_i(va_list ap);

void print_d(va_list ap);

void print_c(va_list ap);

void print_u(va_list ap);

void print_o(va_list ap);

void print_x(va_list ap);

void print_X(va_list ap);

void my_print_octal(int n);

void my_print_hexa(int *hexa, int l, int i);

void my_min_hexa(unsigned int);

void my_maj_hexa(unsigned int);

void my_putchar(char c);

void my_putstr(const char *str);

void my_put_unbr(unsigned int n);

void my_put_nbr(int n);

void my_getnbr(char *str);

void *xmalloc(int size);

int my_strlen(char *str);

#endif /* !_MY_PRINTF_H_ */
