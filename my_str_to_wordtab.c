/*
** my_str_to_wordtab.c for my_str_to_wordtab.c in /home/jimmy/lorill_j/my_str_to_wordtab
** 
** Made by Lorillard Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Mon Oct  3 13:53:34 2016 Lorillard Jimmy
** Last update Thu Oct  6 08:03:43 2016 Lorillard Jimmy
*/

#include <unistd.h>
#include <stdlib.h>

void	my_putchar(char c);

int	my_strlen(char *str);

void	my_putstr(char *str);

int	my_is_alpha(char c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
      (c >= '0' && c <= '9'))
    return (1);
  else
    return (0);
}

int	my_count_word(char *str)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (str[i] != '\0')
    {
      if (my_is_alpha(str[i]) == 1)
	{
	  count++;
	  i++;
	  while (my_is_alpha(str[i]) == 1)
	    {
	      i++;
	    }
	  i = i - 1;
	}
      i++;
    }
  return (count);
}

char	**my_str_to_wordtab(char *str)
{
  char	**strcp;
  int	i;
  int	j;
  int	count;
  int	k;

  k = 0;
  i = 0;
  j = 0;
  count = my_count_word(str);
  strcp = malloc(count * sizeof(char *) + 1);
  while (count != 0)
    {
      strcp[j] = malloc(my_strlen(str) * sizeof(char) + 1);
      count--;
      j++;
    }
  j = 0;
  while (str[i] != '\0')
    {
      if (my_is_alpha(str[i]) == 1)
	{
	  while (my_is_alpha(str[i]) == 1)
	    {
	      strcp[j][k] = str[i];
	      i++;
	      k++;
	    }
	  strcp[j][k] = '\0';
	  j++;
	  k = 0;
	}
      else
	i++;
    }
  strcp[j] = NULL;
  return (strcp);
}
