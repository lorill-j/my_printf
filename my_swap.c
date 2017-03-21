/*
** my_swap.c for my_swap.c in /home/jimmy/libmy.a
** 
** Made by Lorillard Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Thu Oct  6 09:01:58 2016 Lorillard Jimmy
** Last update Thu Oct  6 09:02:22 2016 Lorillard Jimmy
*/

void	my_swap(int *a, int *b)
{
  int	c;

  c = 0;
  c = *a;
  *a = *b;
  *b = c;
}
