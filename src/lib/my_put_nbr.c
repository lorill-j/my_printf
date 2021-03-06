/*
** my_put_nbr.c for my_put_nbr.c in /home/jimmy/lorill_j/src/lib
** 
** Made by LORILLARD Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Sat Mar 25 14:48:57 2017 LORILLARD Jimmy
** Last update Sun Mar 26 20:24:53 2017 LORILLARD Jimmy
*/

#include "../../inc/my_printf.h"

void	my_put_nbr(int n)
{
  if (n == -2147483647)
    {
      my_putstr("-2147483648");
      return ;
    }
  if (n < 0)
    {
      my_putchar('-');
      n = - n;
    }
  if (n < 10)
    my_putchar(n + '0');
  else if (n > 9)
    my_put_int(n);
}

void	my_put_int(int n)
{
  int	k;
  int	j;
  int	i;

  k = 1;
  j = n;
  i = 1;
  while (n / 10)
    {
      n = n / 10;
      k = k * 10;
      i++;
    }
  n = j;
  while (i != 0 )
    {
      my_putchar(n / k + '0');
      n = n % k;
      k = k / 10;
      i--;
    }
}
