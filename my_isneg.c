/*
** my_isneg.c for my_isneg.c in /home/jimmy/libmy.a
** 
** Made by Lorillard Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Thu Oct  6 08:45:35 2016 Lorillard Jimmy
** Last update Thu Oct  6 08:46:13 2016 Lorillard Jimmy
*/

#include <unistd.h>

void	my_putchar(char c);

int	my_isneg(int n)
{
  if (n < 0 )
    {
      return (1);
    }
  else
    return (0);
}
