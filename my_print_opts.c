#include "lib.h"

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
void print_o(va_list ap)
{
  my_print_octal(va_arg(ap, int));
}

