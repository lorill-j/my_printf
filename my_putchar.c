/*
** my_putchar.c for my_putchar.c in /home/jimmy/libmy.a
** 
** Made by Lorillard Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Thu Oct  6 08:44:32 2016 Lorillard Jimmy
** Last update Fri Mar 24 16:32:52 2017 LORILLARD Jimmy
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
