#ifndef _LIB_H_
#define _LIB_H_

#include <stdarg.h>
#define SPECIFIERS "scidouxX"

typedef struct s_bite
{
  char pointeur;
  void (*fnc)(va_list ap); 
} t_bite;

void print_s(va_list ap);

void print_i(va_list ap);

void print_d(va_list ap);

void print_c(va_list ap);

void print_u(va_list ap);

void print_o(va_list ap);

void my_print_octal(int n);

void my_putchar(char c);

void my_putstr(const char *str);

void my_isneg(int n);

void my_put_unbr(unsigned int n);

void my_put_nbr(int n);

void my_getnbr(char *str);

char **my_str_to_wordtab(char *str);

char *my_strcat(char *dest, char *src);

int my_strcmp(char *s1, char *s2);

char *my_strcpy(char *dest, char *src);

char *my_strdup(char *str);

int my_strlen(char *str);

char *my_strncat(char *dest, char *src, int n);

int my_strncmp(char *s1, char*s2, int n);

char *my_strncpy(char *dest, char *src, int n);

char *my_strstr(char *str, char *to_find);

void my_swap(int *a, int *b);

#endif /* !_LIB_H_ */
