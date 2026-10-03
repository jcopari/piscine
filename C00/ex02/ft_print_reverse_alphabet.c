#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char letter = 'z';

    while(letter >= 'a')
    {
        write(1, &letter, 1);
        letter--;
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}