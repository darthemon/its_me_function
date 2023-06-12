#include <stdlib.h>

int	mystrlen(char *str)
{
	int	len;

	len = 0;
	while(str[len] != '\0')
		len++;
	return(len);
}

char*	mystrdup(char *str)
{
	char*	pc;
	char*	p1;

	pc = (char*)malloc(mystrlen(str) * sizeof(char));
	p1 = pc;
	while(*str != '\0')
	{
		*p1 = *str;
		p1++;
		str++;
	}
	return(pc);
}
