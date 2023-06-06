#include <stdio.h>
#include <string.h>
#include "mystrnstr.c"

void	test_mystrnstr(char *big, char *small, int len)
{
	char	*pb;
	char	*fn;

	fprintf(stderr, "Find %s from %s:", small, big);
	pb = mystrnstr(big, small, len);
	fn = strnstr(big, small, len);
	if((pb == NULL && fn == NULL) || 
		(pb != NULL && fn != NULL && strcmp(pb, fn) == 0))
		fprintf(stderr, "OK\n");
	else
		fprintf(stderr, "Fail\n");
	
}

int	main()
{
	char	*big = "HELLOWORLD";
	char	*small = "ORL";

	test_mystrnstr(big, small, 20);
	test_mystrnstr(big, "H", 20);
	test_mystrnstr(big, "", 20);
	test_mystrnstr(big, "D", 20);
	test_mystrnstr(big, small, 7);
	test_mystrnstr(big, "HELLOWORLDANDUNIVERSE", 50);
}
