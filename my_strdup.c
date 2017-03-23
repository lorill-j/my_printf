/*
** my_strdup.c for my_strdup.c in /home/jimmy/libmy.a
** 
** Made by Lorillard Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Thu Oct  6 09:42:06 2016 Lorillard Jimmy
** Last update Thu Oct  6 10:15:40 2016 Lorillard Jimmy
*/

#include <unistd.h>
#include <stdlib.h>

int	my_strlen(char *str);

char	*my_strdup(char *str)
{
  char	*strcp;
  int	i;

  i = my_strlen(str);
  if ((strcp = malloc(i * sizeof(*strcp) + 1)) != NULL);
  i = 0;
  while (str[i] != '\0')
    {
      strcp[i] = str[i];
      i++;
    }
  strcp[i] = '\0';
  return (strcp);
}
