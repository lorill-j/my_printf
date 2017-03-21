/*
** my_strcat.c for my_strcat.c in /home/jimmy/libmy.a
** 
** Made by Lorillard Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Thu Oct  6 09:23:29 2016 Lorillard Jimmy
** Last update Thu Oct  6 10:01:13 2016 Lorillard Jimmy
*/

int	my_strlen(char *str);

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	k;

  i = 0;
  k = my_strlen(dest);
  while (src[i] != '\0')
    {
      dest[k] = src[i];
      i++;
      k++;
    }
  dest[k] = '\0';
  return (dest);
}
