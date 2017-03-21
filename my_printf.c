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
	
  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      while (str[i] == '%' && (str[i + 1] == 's' ||  str[i + 1] == 'c' || str[i + 1] == 'i' 
			       || str[i + 1] == 'd'))
	{
	  j++;
	  i++;
	}
      i++;
    }
  return (j);
}

int	my_printf(const char *str, ...)
{
	va_list ap;
	char *next_str;
	int i;
	int arg_nbr;

    va_start(ap, str);
    arg_nbr = 0;	
    i = 0;
    arg_nbr = check_argnbr(str);
    va_start(ap, str);
    my_putstr(str);
    while (i != arg_nbr)
      {
	next_str = va_arg(ap, char *);
	printf("%s", next_str);
	i++;
      }
    va_end(ap);
    return (0);
}
 
int	main(int ac, char**av)
{
  my_printf("1 - une chaine\n");
  my_printf("2 - %s\n", "une autre chaine\n");
  return (0);
}
