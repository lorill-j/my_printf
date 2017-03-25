/*
** my_putstr.c for my_putstr.c in /home/jimmy/lorill_j/src/lib
** 
** Made by LORILLARD Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Sat Mar 25 14:46:54 2017 LORILLARD Jimmy
** Last update Sat Mar 25 15:05:21 2017 LORILLARD Jimmy
*/

void	my_putchar(char c);

void	my_putstr(const char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
}
