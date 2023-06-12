#include <stdio.h>
#include <stdlib.h>
#include "mycalloc.c"

int	main()
{
	char*	pc;
	int		len;

	//콜록이랑 내가 만든거랑 각각 출력
	printf("calloc : %s\nmycalloc : %s\n", (char*)calloc(5, sizeof(char)), (char*)mycalloc(5, sizeof(char)));

	//size, count중에 하나라도 0일 시 NULL 반환
	printf("NULL argument test : ");
	if((char*)mycalloc(0, sizeof(char)) == NULL)
		printf("O\n");
	else
		printf("X\n");

	//반환된 메모리 값이 0이 맞는지 확인
	printf("value 0 test : ");
	pc = (char*)mycalloc(5, sizeof(char));
	len = 0;
	while(len < 5)
	{
		if(*pc != '\0')
		{
			printf("x\n");
			break;
		}
		pc++;
		len++;
	}
	if(len == 5)
		printf("O\n");
}
