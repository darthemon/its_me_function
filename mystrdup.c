#include <stdlib.h>

int	strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

char*	mystrdup(char *str)
{
	char*	c;
	int	i;

	i = 0;
	c = (char*)malloc(strlen(str));
	while(str[i] != '\0')
	{
		c[i] = str[i];
		i++;
	}
	return(c);
}
