#include <unistd.h>

int main(int argc, char *argv[])
{
	int j = 0;
	int i = 1;
	
	while(i < argc)
	{
		while(argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1,"\n ",1);
		j = 0;
		i++;
	}
	return (0);
}