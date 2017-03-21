/*
** my_strcpy.c for my_strcpy.c in /home/jimmy/libmy.a
** 
** Made by Lorillard Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Thu Oct  6 09:07:49 2016 Lorillard Jimmy
** Last update Thu Oct  6 09:10:03 2016 Lorillard Jimmy
*/

#include <unistd.h>

char	*my_strcpy(char *dest, char *src) 
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
