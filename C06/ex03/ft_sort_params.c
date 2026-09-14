#include <stdio.h>

int ft_who_comes_first(char *s1, char *s2)
{
    while(*s1 || *s2)
    {
        if(*s1 < *s2)
            return (1);
        else if(*s1 > *s2)
            return (-1);
        s1++;
        s2++;
    }
    return 0;
}

void    ft_swap_str(char **s1, char **s2)
{
    char *swap;

    swap = *s1;
    *s1 = *s2;
    *s2 = swap;
}

int main(int argc, char **argv)
{    
    int i = 0;
    int result = 0;
    while(i < argc)
    {
        result = ft_who_comes_first(argv[i], argv[i+1]);
        if(result == 0 || result == 1)
            i++;
        else
        {
            ft_swap_str(&argv[i], &argv[i+1]);
            i = 0; //Isto aqui está gerando um problema
        }
    }
    i = 0;
    while(i < argc)
        printf("%s ", argv[i++]);
    
    return (0);
