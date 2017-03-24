/*
** check_specifiers.c for check_specifiers.c in /Users/lorill_j/my_printf.git/trunk
** 
** Made by LORILLARD Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Fri Mar 24 16:40:16 2017 LORILLARD Jimmy
** Last update Fri Mar 24 16:40:19 2017 LORILLARD Jimmy
*/

#include "my_printf.h"

int             check_argnbr(const char *str)
{
  int           i;
  int           j;
  int           str_len;
  int           k;

  i = 0;
  j = 0;
  k = 0;
  while (str[i] != '\0')
    {
      str_len = my_strlen(SPECIFIERS);
      while (k != str_len)
        {
          if (str[i] == '%' && str[i + 1] == SPECIFIERS[k])
            j++;
          k++;
	}
      k = 0;
      i++;
    }
  if (j == 0)
    my_putstr(str);
  return (j);
}

void print_o(va_list ap)
{
  my_print_octal(va_arg(ap, int));
}
