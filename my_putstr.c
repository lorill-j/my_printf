/*
** my_putstr.c for my_putstr.c in /home/jimmy/libmy.a
** 
** Made by Lorillard Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Thu Oct  6 09:02:50 2016 Lorillard Jimmy
** Last update Fri Mar 24 16:33:13 2017 LORILLARD Jimmy
*/

#include <unistd.h>
#include "my_printf.h"

void	my_putchar(char c);

void	my_putstr(const char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
}
