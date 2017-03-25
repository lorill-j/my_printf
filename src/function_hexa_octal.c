/*
** function_hexa_octal.c for function_hexa_octal.c in /home/jimmy/lorill_j/src
** 
** Made by LORILLARD Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Sat Mar 25 14:44:28 2017 LORILLARD Jimmy
** Last update Sat Mar 25 22:19:33 2017 LORILLARD Jimmy
*/

#include "../inc/my_printf.h"

void            my_print_octal(int n)
{
  int           l;
  int           j;
  int           k;
  int           *octal;

  l = 0;
  k = 0;
  j = n;
  while (j >= 8)
    {
      j = j / 8;
      k++;
    }
  octal = xmalloc((k + 1) * sizeof(int));
    while (n > 0)
      {
	octal[l] = n % 8;
	n = n / 8;
	l++;
      }
  while (k != -1)
    my_put_nbr(octal[k--]);
  free(octal);
}

void		print_hexa(int *hexa, int l, int i)
{
  int		m;
  char		*str;

  if (i)
    str = "ABCDEF";
  else
    str = "abcdef";
  while (l != -1)
    {
      if (hexa[l] >= 10)
	{
	  m = hexa[l] - 10;
	  my_putchar(str[m]);
	}
      else
	my_put_unbr(hexa[l]);
      l--;
    }
}

void		my_maj_hexa(unsigned int n)
{
  int		i;
  int		k;
  int		j;
  int		l;
  int		*hexa;

  i = n;
  k = 0;
  j = 0;
  while (n >= 16)
    {
      n = n / 16;
      k++;
    }
  l = k;
  hexa = xmalloc((k + 1) * sizeof(int));
    while (i >= 16)
      {
	k = i % 16;
	i = i / 16;
	hexa[j] = k;
	if (i <= 9)
	  hexa[j + 1] = i;
	j++;
      }
  print_hexa(hexa, l, 1);
  free(hexa);
}

void		my_min_hexa(unsigned int n)
{
  int		i;
  int		k;
  int		j;
  int		l;
  int		*hexa;

  i = n;
  k = 0;
  j = 0;
  while (n >= 16)
    {
      n = n / 16;
      k++;
    }
  l = k;
  hexa = malloc((k + 1) * sizeof(int));
    while (i >= 16)
      {
	k = i % 16;
	i = i / 16;
	hexa[j] = k;
	if (i <= 9)
	  hexa[j + 1] = i;
	j++;
      }
  print_hexa(hexa, l, 0);
  free(hexa);
}
