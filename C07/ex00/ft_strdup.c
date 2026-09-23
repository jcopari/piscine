#include <stdlib.h>
#include <stdio.h>


int ft_strlen(const char *src)
{
	int	i = 0;
	
	while (src[i] != '\0')
	    i++;
	return (i);
}

char	*ft_strdup(char *src)
{
    int len = ft_strlen(src);
    int i = 0;
    char *p_newstr = malloc((len+1)*(sizeof(char)));
    if(!p_newstr)
        return (NULL);
    while(src[i] != '\0')
    {
        p_newstr[i] = src[i];
        i++;
    }
    p_newstr[i] = '\0';
    return ((char *)p_newstr);
}

int main(void)
{
	char str[] = "Hello";
	char *p_str;
	p_str = ft_strdup(str);
	printf("A string duplicada: %s", p_str);
	free(p_str);
	return (0);
}