/*
** xmalloc.c for xmalloc.c in /home/jimmy/my_printf.git/trunk/src/lib
** 
** Made by LORILLARD Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Sat Mar 25 22:21:45 2017 LORILLARD Jimmy
** Last update Sat Mar 25 22:25:10 2017 LORILLARD Jimmy
*/

#include "../../inc/my_printf.h"

void	*xmalloc(int size)
{
  void	*memory;
  
  if ((memory = malloc(size)) != NULL)
    return (memory);
  else
    perror("Malloc failed");
  return (0);
}
