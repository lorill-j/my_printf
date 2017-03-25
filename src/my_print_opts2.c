/*
** my_print_opts2.c for my_print_opts2.c in /home/jimmy/lorill_j/src
** 
** Made by LORILLARD Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Sat Mar 25 14:45:17 2017 LORILLARD Jimmy
** Last update Sat Mar 25 14:45:25 2017 LORILLARD Jimmy
*/

#include "../inc/my_printf.h"

void print_o(va_list ap)
{
  my_print_octal(va_arg(ap, int));
}

void print_x(va_list ap)
{
  my_min_hexa(va_arg(ap, unsigned int));
}

void print_X(va_list ap)
{
  my_maj_hexa(va_arg(ap, unsigned int));
}
