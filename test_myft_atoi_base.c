#include <stdio.h>
#include "myft_atoi_base.c"

void	test(char *str, char *base, int val)
{
	printf("%s, %s : ", str, base);
	if(myft_atoi_base(str, base) == val)
		printf("O\n");
	else
		printf("X\n");
}

int	main()
{
	//[함수 원형]
	//int	myft_atoi_base(char *str, char *base)

	//[작동 순서]
	//1.base 길이 측정해서 진법 알아내기
	//2.기수법에 해당하는 문자까지만 찾아내는 수제 atoi 돌리기
	//3.그렇게 받아낸 기수법 문자열을 10진법 숫자로 바꾸기
	//4.반환

	//[기본 테스트]
	test("1010", "01", 10);
	test("ABCDERTH", "ABCDE", 194);
	test("-ABCDEFRGT", "ABCDE", -194);
	test("AA8A00", "0123456789ABCDEF", 11176448);
	
	//[유효하지 않은 인자]
	//기수가 0 혹은 1자리
	test("12345", "0", 0);
	test("12345", "", 0);

	//기수에 같은 문자가 두번 포함
	test("12345", "114325", 0);

	//기수에 +, -나 공백문자가 포함됨
	test("+---12345", "1+2435", 0);
	test("--+-12345", "3-4512", 0);
	test("12345", " ", 0);
}
