/*
** my_getnbr.c for my_getnbr.c in /home/jimmy
** 
** Made by Lorillard Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Tue Oct  4 18:23:21 2016 Lorillard Jimmy
** Last update Fri Oct  7 09:14:30 2016 Lorillard Jimmy
*/

#include <unistd.h>

void	my_putstr(char *str);

void	my_putchar(char c);

int	my_getnbr(char *str)
{
  int sign;
  int i;
  int j;

  i = 0;
  j = 1;
  while ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
    {
      if (str[i] == '-')
	{
	  j = j * -1;
	}
      i++;
    }
  str = str + i;
  i = 0;
  sign = 0;
  while (str[i] <= 57  && str[i] >= 48)
    {
      sign =  sign * 10;
      sign -= (str[i] - 48);
      i++;
    }
  return (sign * j * -1);
}
