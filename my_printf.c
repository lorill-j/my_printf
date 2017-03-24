/*
** test.c for test.c in /home/jimmy/my_ls
** 
** Made by Lorillard Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Tue Feb 07 09:09:21 2017 Lorillard Jimmy
** Last update Fri Mar 24 16:19:16 2017 LORILLARD Jimmy
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "lib.h"

t_bite tbite[6] =
  {
    {'s', &print_s},
    {'i', &print_i},
    {'d', &print_d},
    {'c', &print_c},
    {'u', &print_u},
    {'o', &print_o}
  };

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

void		my_print_octal(int n)
{
  int		l;
  int		j;
  int		k;
  int		*array;

  l = 0;
  k = 0;
  j = n;
  while (j >= 8)
    {
      j = j / 8;
      k++;
    }
  if ((array = malloc((k + 1) * sizeof(int) + 1)) != NULL)
    while (n > 0)
      {
	array[l] = n % 8;
	n = n / 8;
	l++;
      }
  while (k != -1)
    {
      my_put_nbr(array[k]);
      k--;
    }
}

void		get_args(char c, va_list ap)
{
  int i;
  
  i = 0;
  while (i != 6)
    {
      if (c == tbite[i].pointeur)
	(tbite[i].fnc)(ap);
      i++;
    }
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
	  get_args(str[i + 1], ap);
	  j++;
	}
      else if (!is_specifier(str[i]) && str[i - 1] != '%')  
	my_putchar(str[i]);
      else if (str[i] == '%' && str[i + 1] == '\n')
	my_putchar(str[i + 1]);
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

int		main(int ac, char **av)
{
  my_printf("1 - une chaine\n");
  my_printf("2 - %s\n", "une autre chaine");
  my_printf("3 - %i\n", 42);
  my_printf("4 - %s %d %s%c", "avec", 4, "parametres", '\n');
  my_printf("5 - %d%%\n", 42);
  my_printf("6 - %u\n", (unsigned int)4200000000);
  my_printf("7 - %o\n", 90000);
  return (0);
}
