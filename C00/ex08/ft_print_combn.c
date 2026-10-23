#include <stdio.h>
#include <unistd.h>

void ft_print_combn(int n)
{
	char array[] = "000000000";
	int position = (n - 1);
	int i = 0;
	while(i < n)
	{
		array[position] = array[position] + 1;
		i++;
	}
}

int main(void)
{
    ft_print_combn(9);
    return 0;
}
