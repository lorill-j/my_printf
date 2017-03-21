/*
** my_strlen.c for my_strlen.c in /home/jimmy/libmy.a
** 
** Made by Lorillard Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Thu Oct  6 09:06:05 2016 Lorillard Jimmy
** Last update Thu Oct  6 10:04:16 2016 Lorillard Jimmy
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (*str != '\0')
    {
      i++;
      str++;
    }
  return (i);
}
