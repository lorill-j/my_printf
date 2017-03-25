/*
** my_print_opts.c for my_print_opts.c in /Users/lorill_j/my_printf.git/trunk
** 
** Made by LORILLARD Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Fri Mar 24 16:27:47 2017 LORILLARD Jimmy
** Last update Sat Mar 25 14:54:37 2017 LORILLARD Jimmy
*/

#include "../inc/my_printf.h"

void print_s(va_list ap)
{
  my_putstr(va_arg(ap, char *));
}

void print_i(va_list ap)
{
  my_put_nbr(va_arg(ap, int));
} 

void print_d(va_list ap)
{
  my_put_nbr(va_arg(ap, int));
}

void print_c(va_list ap)
{
  my_putchar(va_arg(ap, int));
}

void print_u(va_list ap)
{
  my_put_unbr(va_arg(ap, unsigned int));
}

