/*
** my_putchar.c for my_putchar.c in /home/jimmy/lorill_j/src/lib
** 
** Made by LORILLARD Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Sat Mar 25 14:46:34 2017 LORILLARD Jimmy
** Last update Sat Mar 25 14:48:17 2017 LORILLARD Jimmy
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
