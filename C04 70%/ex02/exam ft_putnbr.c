#include <unistd.h>

void    ft_putchard(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
    if (nb == -2147483648)
        ft_putchard(-2147483648);
    if (nb < 0)
    {
        ft_putchard('-');
        ft_putchard(nb-nb);
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        ft_putchard(nb + 48);
    }
}

int main (int argc, char** argv)
{
    (void)argc;
    
    ft_putnbr(argv[1]);
}