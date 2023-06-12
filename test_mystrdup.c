#include <stdio.h>
#include <string.h>
#include "mystrdup.c"

int	main()
{
	char*	str = "NewStringHere";
	char	looong[1000] = {'0'};
	char	looonger[100000] = {'0'};
	char*	notstr = "";

	printf("[strdup VS mystrdup]\n[value same = O]\n[or = X]\n\n");
	//평범한 길이, 평범한 내용, 평범한 문자열
	printf("Normal String : %s\n", (strcmp(strdup(str), mystrdup(str))) ? "X" : "O" );
	//1000자리 긴 문자열
	printf("Long String : %s\n", (strcmp(strdup(looong), mystrdup(looong))) ? "X" : "O" );
	//100000자리 많이 긴 문자열
	printf("Super long String : %s\n", (strcmp(strdup(looonger), mystrdup(looonger))) ? "X" : "O" );
	//0자리 빈 문자열
	printf("Empty String : %s\n", (strcmp(strdup(notstr), mystrdup(notstr))) ? "X" : "O" );
}
