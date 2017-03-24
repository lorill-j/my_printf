/*
** my_put_nbr.c for my_put_nbr.c in /home/jimmy/libmy.a
** 
** Made by Lorillard Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Thu Oct  6 08:54:35 2016 Lorillard Jimmy
** Last update Fri Mar 24 10:41:23 2017 LORILLARD Jimmy
*/

#include <unistd.h>

void	my_putchar(char c);

void	my_put_unbr(unsigned int n);

void	my_put_uint(unsigned int n);

void	my_putstr(char *str);

void	my_put_unbr(unsigned int n)
{
  if (n < 10)
    my_putchar(n + '0');
  else if (n > 9)
    my_put_uint(n);
}

void	my_put_uint(unsigned int n)
{
  unsigned int k;
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
