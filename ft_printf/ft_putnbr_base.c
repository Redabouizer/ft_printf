#include "libftprintf.h"

int ft_putnbr_base(int nb , char *base, int len ){
    int cout;
    cout = 0;;
    if (nb < 0 )
    {
        cout +=ft_putchar('-');
        nb = -nb;
    }
    if (nb >= len)
    {
        cout +=ft_putnbr_base(nb / len , base,len);
        cout +=ft_putnbr_base(nb % len ,base,len);
    }
    else{
        cout +=ft_putchar(base[nb]);
    }
    return cout;
}