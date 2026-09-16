#include <stdio.h>

int ft_who_comes_first(char *s1, char *s2)
{
	while(*s1 && *s2)
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

void    sort_params(int size, char **vector)
{
		int		index;
		int		result;
		
		index = 1;
		result = 0;
		while(index < (size-1))
		{
			result = ft_who_comes_first(vector[index], vector[index+1]);
			if(result == -1)
			{
				ft_swap_str(&vector[index], &vector[index+1]);
				index = 1;
			}
			else
				index++;
		}
}

int main(int argc, char **argv)
{
	int		i;
	sort_params(argc, argv);
	i = 1;
	while(i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}