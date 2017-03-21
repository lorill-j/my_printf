/*
** my_strncmp.c for my_strncmp.c in /home/jimmy/libmy.a
** 
** Made by Lorillard Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Thu Oct  6 09:15:48 2016 Lorillard Jimmy
** Last update Thu Oct  6 09:16:32 2016 Lorillard Jimmy
*/

int     my_strncmp(char *s1, char *s2, int n)
{
  int  i;

  i = 0;
  while (i != n || i != n)
    {
      if (s1[i] > s2[i])
	{
	  return (1);
	}
      else if (s1[i] < s2[i])
	{
	  return (-1);
	}
      i++;
    }
  return (0);
}
