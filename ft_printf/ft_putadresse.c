#include "libftprintf.h"

int ft_putadresse(unsigned long nb,unsigned long len){
    int cout;
    char *base;

    base = "0123456789abcdef";
    cout = 0;
    if (nb > len -1)
    {
        cout +=ft_putadresse(nb / len,len);
        cout +=ft_putadresse(nb % len,len);
    }
    else{
        cout +=ft_putchar(base[nb]);
    }
    return cout;
}