#include <stdlib.h>

void*	mycalloc(size_t count, size_t size)
{
	char*	p;
	char*	pt;
	size_t	len;

	len = count * size;
	if(len == 0)
		return(NULL);
	p = (char*)malloc(len);
	pt = p;
	while(len > 0)
	{
		*pt = 0;
		len--;
		pt++;
	}
	return(p);
}
