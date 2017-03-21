/*
** my_strstr.c for my_strstr.c in /home/jimmy/my_strstr
** 
** Made by Lorillard Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Mon Oct  3 23:39:57 2016 Lorillard Jimmy
** Last update Thu Oct  6 10:07:55 2016 Lorillard Jimmy
*/

#include <unistd.h>
#include <string.h>

void	my_putchar(char c);

void	my_putstr(char *str);

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;
  char *p;

  p = NULL;
  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      while (str[i] == to_find[j])
	{
	  if (to_find[j + 1] == '\0')
	    return (str + (i - j));
	  j++;
	  i++;
	}
      i++;
    }
  return (p);
}
