#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    int a = 0;
    int b = 1;

    while (a <= 98)
    {
        ft_putchar(a / 10 + '0');
        ft_putchar(a % 10 + '0');
        ft_putchar(' ');
        ft_putchar(b / 10 + '0');
        ft_putchar(b % 10 + '0');
        write(1, ", ", (a != 98) * 2);

        b++;

        if (b > 99)
            b = ++a + 1;
    }
}

int main(void)
{
    ft_print_comb2();
    return 0;
}