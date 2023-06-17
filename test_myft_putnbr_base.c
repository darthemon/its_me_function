#include <stdio.h>
#include "myft_putnbr_base.c"

void	print(int nbr, char *str)
{
	fprintf(stderr, "[%d, %s] => ", nbr, str);
	myft_putnbr_base(nbr, str);
	printf("\n");
}

int	main()
{
	//[함수 개요]
	//int형식의 숫자와 char형식의 기수
	//12345, abcde 받으면 12345를 5진법으로 변환해서 abcde를 활용해 출력
	//기수로 받은 문자열 길이 = 진수, 기수로 받은 문자열 = 기수

	//[작동 테스트]
	fprintf(stderr, "[12345, ABCDE] => ");
	myft_putnbr_base(12345, "ABCDE");
	printf("\n");

	//[TEST CASE]
	//음수도 다뤄야 한다
	print(-12345, "ABCDE");

	//[유효하지 않은 인자 처리]
	//기수가 없거나 1자리(1진법)
	print(21212, "");
	print(12345, "S");

	//기수에 동일한 문자 두번 포함
	print(12345, "ABCAD");

	//기수에 + 혹은 -가 포함
	print(12345, "ADW+GB");
}
