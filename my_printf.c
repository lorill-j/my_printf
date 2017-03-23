/*
** test.c for test.c in /home/jimmy/my_ls
** 
** Made by Lorillard Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Tue Feb 07 09:09:21 2017 Lorillard Jimmy
** Last update Fri Feb 10 16:49:08 2017 Lorillard Jimmy
*/
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "lib.h"

int		check_argnbr(const char *str)
{
  int		i;
  int		j;
  int		str_len;
  int		k;
  
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

int		is_specifier(char c)
{
  int		i;
  
  i = 0;
  while (SPECIFIERS[i] != '\0')
    {
      if (SPECIFIERS[i] == c)
	return (1);
      i++;
    }
  return (0);
}

void		get_args(char c, int j, va_list ap)
{
  if (c == 's')
    my_putstr(va_arg(ap, char *));
  if (c == 'i' || c == 'd')
    my_put_nbr(va_arg(ap, int));
}

void		my_str_replace(const char *str, int arg_nb, va_list ap)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '%' && is_specifier(str[i + 1]) && (j < arg_nb))
	{
	  get_args(str[i + 1], j, ap);
	  j++;
	}
      else if (!is_specifier(str[i]) && str[i - 1] != '%') 
	my_putchar(str[i]);
      i++;
    }
}

int		my_printf(const char *str, ...)
{
  va_list	ap;
  int		arg_nbr;
  
  arg_nbr = 0;	
  arg_nbr = check_argnbr(str);
  va_start(ap, str);
  if (arg_nbr > 0)
    my_str_replace(str, arg_nbr, ap);
  va_end(ap);
  return (0);
}

int		main(int ac, char**av)
{
  my_printf("1 - une chaine\n");
  my_printf("2 - %s%s\n", "une autre chaine", "bite");
  my_printf("3 - %i\n", 42);
  my_printf("4 - %s %d %s%c", "avec", 4, "parametres", '\n');
  return (0);
}
