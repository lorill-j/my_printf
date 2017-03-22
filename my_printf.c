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

int	check_argnbr(const char *str)
{
	int i;
	int j;
	int str_len;
	char *specifier;
	int k;

  specifier = "scid";
  i = 0;
  j = 0;
  k = 0;
  while (str[i] != '\0')
    {
      str_len = my_strlen(specifier);
      while (k != str_len)
	{
	  if (str[i] == '%' && str[i + 1] == specifier[k])
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

void my_strreplace(const char *str)
{
  int i;
  int k;
  char *specifier;

  specifier = "scid";
  i = 0;
  k = 0;
  while (str[i] != '\0')
    {
      while (str[i] != '%' && str[i + 1] != specifier[k])
	my_putchar(str[i]);
      
      i++;
      k++;
    }
}

int	my_printf(const char *str, ...)
{
	va_list ap;
	char **next_arg;
	char * arg;
	int i;
	int arg_nbr;

    va_start(ap, str);
    arg_nbr = 0;	
    i = 0;
    arg_nbr = check_argnbr(str);
    va_start(ap, str);
    next_arg = malloc(arg_nbr * sizeof(char *) + 1);
    while (i != arg_nbr)
      {
	arg = va_arg(ap, char *);
	next_arg[i] = malloc(my_strlen(arg) * sizeof(char) + 1);
	next_arg[i] = arg;
	i++;
      }
    my_strreplace(str);
    va_end(ap);
    return (0);
}

int	main(int ac, char **av)
{
  my_printf("1 - une chaine\n");
  my_printf("2 - %s\n", "une autre chaine");
  my_printf("3 - %s %s\n", "42", "bite");
  my_printf("4 - %s %s %s%s", "avec", "4", "parametres", "\n");
  return (0);
}
