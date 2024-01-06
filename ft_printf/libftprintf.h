#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <unistd.h>
#include <stdarg.h>

int ft_putchar(char c);
int ft_putstr(char *str);
int ft_putadresse(unsigned long nb,unsigned long len);
int ft_putnbr_base(int nb , char *base, int len );
int ft_printf(const char *format, ...);

#endif