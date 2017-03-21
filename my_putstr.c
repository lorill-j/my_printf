/*
** my_putstr.c for my_putstr.c in /home/jimmy/libmy.a
** 
** Made by Lorillard Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Thu Oct  6 09:02:50 2016 Lorillard Jimmy
** Last update Thu Oct  6 09:05:28 2016 Lorillard Jimmy
*/

#include <unistd.h>
#include "lib.h"

void	my_putchar(char c);

void	my_putstr(const char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
}
