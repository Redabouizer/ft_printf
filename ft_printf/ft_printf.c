#include "libftprintf.h"

int check_format(char format, va_list list)
{
    if (format == 'c')
        return (ft_putchar(va_arg(list, int)));
    else if (format == 's')
        return (ft_putstr(va_arg(list, char *)));
    else if (format == 'p')
        return (ft_putstr("0x") + ft_putadresse((long)va_arg(list, void *),16));
    else if (format == 'd' || (format == 'i'))
        return (ft_putnbr_base(va_arg(list, int), "0123456789",10));
    else if (format == 'u')
        return (ft_putadresse(va_arg(list, unsigned int),10));
    else if (format == 'x')
        return (ft_putnbr_base(va_arg(list, int), "0123456789abcdef",16));
    else if (format == 'X')
        return (ft_putnbr_base(va_arg(list, int), "0123456789ABCDEF",16));
    else if (format == '%')
        return (ft_putchar('%'));
    else
        return ft_putchar(format);
}
    int ft_printf(const char *format, ...)
    {
        va_list list;
        size_t i;
        int count;

        i = 0;
        count = 0;
        va_start(list, format);
        while (format[i] != '\0')
        {
            if (format[i] == '%')
            {
                count += check_format(format[i + 1], list);
                i++;
            }
            else
                count += ft_putchar(format[i]);
            i++;
        }
        va_end(list);
        return (count);
    }
