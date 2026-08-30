#include <unistd.h>

void	ft_putchar(int c);
void	ft_putstr(char *str);

int	main(int argc, char *argv[])
{
	while(argc > 1)
	{
		ft_putstr(argv[(argc--)-1]);
		ft_putchar('\n');
	}
	return (0);
}

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}