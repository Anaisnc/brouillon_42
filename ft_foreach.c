#include <unistd.h>
void ft_foreach(int *tab, int length, void (*f)(int))
{
    int i ;
    i = 0;
    while (i < length)
    {
        f(tab[i]);
        i++;
    }
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int   nb)
{
    unsigned int res;

    res = nb;
    if (nb < 0)
    {
        ft_putchar('-');
        res = -nb;
    }
    if (res <= 9)
    {
        ft_putchar(res + 48);
    }
    if (res >= 10)
    {
        ft_putnbr(res / 10);
        ft_putnbr(res % 10);
    }
}

int main(void)
{
    int tab[] = {1, 24, 5};
    ft_foreach(tab, 3, &ft_putnbr);
    return (0);
}
