/*
** my_printf.c for my_printf.c in /home/jimmy/lorill_j/src
** 
** Made by LORILLARD Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Sat Mar 25 14:44:54 2017 LORILLARD Jimmy
** Last update Sun Mar 26 23:05:41 2017 LORILLARD Jimmy
*/

#include "../inc/my_printf.h"

t_specifiers g_specifiers[8] =
  {
    {'s', &print_s},
    {'i', &print_i},
    {'d', &print_d},
    {'c', &print_c},
    {'u', &print_u},
    {'o', &print_o},
    {'X', &print_X},
    {'x', &print_x}
  };

int             check_argnbr(const char *str)
{
  int           i;
  int           j;
  int           str_len;
  int           k;

  i = 0;
  j = 0;
  k = 0;
  while (str[i] != '\0')
    {
      str_len = my_strlen(SPECIFIERS);
      while (k != str_len)
	{
	  if (str[i] == '%' && str[i + 1] == SPECIFIERS[k])
	    j++;
	  k++;
	}
      k = 0;
      i++;
    }
  if (j == 0)
    my_putstr(str);
  return (j);
}

int             is_specifier(char c)
{
  int           i;

  i = 0;
  while (SPECIFIERS[i] != '\0')
    {
      if (SPECIFIERS[i] == c)
	return (1);
      i++;
    }
  return (0);
}

void		get_args(char c, va_list ap)
{
  int		i;

  i = 0;
  while (i != 8)
    {
      if (c == g_specifiers[i].s_name)
	(g_specifiers[i].fnc)(ap);
      i++;

    }
}

void		my_str_replace(const char *str, int arg_nb, va_list ap)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '%' && is_specifier(str[i + 1]) && (j < arg_nb))
	{
	  get_args(str[i + 1], ap);
	  j++;
	}
      else if (!is_specifier(str[i]) && str[i - 1] != '%')
	my_putchar(str[i]);
      else if (str[i] == '%' && str[i + 1] == '\n')
	my_putchar(str[i + 1]);
      i++;
    }
}

int		my_printf(const char *str, ...)
{
  va_list	ap;
  int		arg_nbr;

  arg_nbr = 0;
  arg_nbr = check_argnbr(str);
  va_start(ap, str);
  if (arg_nbr > 0)
    my_str_replace(str, arg_nbr, ap);
  va_end(ap);
  return (0);
}

int main(void)
{
  my_printf("1 - %s\n", "une chaine");
  my_printf("2 - %s %s\n", "une autre chaine", "et enfin encore une autre");
  my_printf("3 %i\n", 42);
  my_printf("4 %o\n", 458);
  my_printf("5 %s %d %s%c", "avec", 4, "parametres", '\n');
  my_printf("6 %u\n", 4200000000);
  my_printf("8 %X\n", 2000000);
  my_printf("9 %x\n", 2000000);
  return (0);
}
