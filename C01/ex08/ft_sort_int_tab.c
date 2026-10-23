#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int c;
    
    c = *a;
    *a = *b;
    *b = c;
}

void    ft_rev_int_tab(int *tab, int size)
{
    int *begin = &tab[0];
    int *end = &tab[(size - 1)];
    int i = 0;
    while()
        ft_swap(begin, end);
}

int main(void)
{   
    
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    ft_rev_int_tab(array, 10);
    for(int i = 0; i < 10; i++)
        printf("%d", array[i]);
    printf("\n");

    return 0;
}