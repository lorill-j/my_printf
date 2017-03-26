/*
** xmalloc.c for xmalloc.c in /home/jimmy/my_printf.git/trunk/src/lib
** 
** Made by LORILLARD Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Sat Mar 25 22:21:45 2017 LORILLARD Jimmy
** Last update Sun Mar 26 23:14:40 2017 LORILLARD Jimmy
*/

#include "../../inc/my_printf.h"

void	*xmalloc(int size)
{
  void	*memory;
  char	*str;
  int	str_len;

  str = "Malloc failed";
  str_len = my_strlen(str);
  if ((memory = malloc(size)) != NULL)
    return (memory);
  else
    write(2, str, str_len);
  return (0);
}
