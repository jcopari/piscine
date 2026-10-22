#include <unistd.h>

void	ft_print_number(int nbr)
{
    if(nbr > 9)
        ft_print_number(nbr/10);
    write(1, &"0123456789"[nbr%10], 1);
}

void    ft_putnbr(int nb)
{
    if(nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if(nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    ft_print_number(nb);
}