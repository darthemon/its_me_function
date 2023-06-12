#include <stdio.h>
#include <stdlib.h>
#include "myftatoi.c"

int	main()
{
	//타이틀
	printf("myftatoi TEST\n\n");

	//숫자 문자열을 정수형으로 변환하기
	printf("[12345] : ");
	if(myft_atoi("12345") == 12345)
		printf("O\n");
	else
		printf("X\n");

	//숫자가 나오다 다른게 나오면 숫자까지만 처리하기
	printf("[1234abc567] : ");
	if(myft_atoi("1234abc567") == 1234)
		printf("O\n");
	else
		printf("X\n");

	//앞에 공백문자 있으면 스킵하기
	printf("[               212] : ");
	if(myft_atoi("                212") == 212)
		printf("O\n");
	else
		printf("X\n");

	//+- 개수 맞춰서 양수인지 음수인지 정확히 출력
	printf("[+---+-++--+---+98765] : ");
	if(myft_atoi("+---+-++--+---+98765") == (-98765))
		printf("O\n");
	else
		printf("X\n");

	//오버플로우, 언더플로우 무시하기
}
