/*
** my_strcat.c for my_strncat.c in /home/jimmy/libmy.a
** 
** Made by Lorillard Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Thu Oct  6 09:17:35 2016 Lorillard Jimmy
** Last update Thu Oct  6 10:04:57 2016 Lorillard Jimmy
*/

int	my_strlen(char *str);

char	*my_strncat(char *dest, char *src, int n)
{
  int	i;
  int	k;

  i = 0;
  k = my_strlen(dest);
  while (i != n)
    {
      dest[k] = src[i];
      i++;
      k++;
    }
  dest[k] = '\0';
  return (dest);
}
